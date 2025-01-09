#include <iostream>
#include <string>
#include <cstring>
using namespace std;

class Pokemon {
public:
	int hp, level;
	string name;
	Pokemon(int hp, int level, string name) : hp(hp), level(level), name(name) {};

	int operator<(const Pokemon& poke) {
		return this->hp < poke.getHP(); // �� ���� ��ü ��ȯ
	}
	friend ostream& operator <<(ostream& o, const Pokemon& p) {
		o << p.name << "\n";
		return o;
	}

	int getHP() const { return hp; }
};

// ���ø� �Լ� ����
template<typename T>
T smaller(const T& first, const T& second) {
	if (first < second) return first;
	return second;
}

// ���ø� �Լ� �����ε�
// �Ű������� �����϶� �ڵ����� �� ���ø� �Լ��� �Ű������� ���޵�
template<typename T>
T smaller(const T& first, const T& second, const T& third) {
	return smaller(smaller(first, second), third);
}

// ���ø� �Լ� Ư��ȭ
template<>
const char* smaller(const char* const& first, const char* const& second) {
	if (strcmp(first, second) < 0) return first;
	return second;
}

int main() {
	Pokemon p1(100, 1, "��ī��"), p2(120, 2, "���α�");
	string s1 = "AXE", s2 = "ACE";
	string str1 = "Hello", str2 = "Bye";
	cout << smaller(s1, s2) << "\n"; //<������ �����ε����� ��ȯ�� hp�� �� ���� ��ü�� name ��Ҹ� << �����ε����� ���
	cout << smaller(17, 24, 20) << "\n";
	cout << "�� �� �� �� ���� ��: " << smaller <double>(23, 67.2) << "\n"; //23�� double�� 23.0���� ����ȯ
	cout << smaller (str1, str2) << "\n"; // Bye�� �� ����

	return 0;
}