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
		return this->hp < poke.getHP(); // 더 작은 객체 반환
	}
	friend ostream& operator <<(ostream& o, const Pokemon& p) {
		o << p.name << "\n";
		return o;
	}

	int getHP() const { return hp; }
};

// 템플릿 함수 정의
template<typename T>
T smaller(const T& first, const T& second) {
	if (first < second) return first;
	return second;
}

// 템플릿 함수 오버로딩
// 매개변수가 세개일때 자동으로 이 템플릿 함수로 매개변수가 전달됨
template<typename T>
T smaller(const T& first, const T& second, const T& third) {
	return smaller(smaller(first, second), third);
}

// 템플릿 함수 특수화
template<>
const char* smaller(const char* const& first, const char* const& second) {
	if (strcmp(first, second) < 0) return first;
	return second;
}

int main() {
	Pokemon p1(100, 1, "피카츄"), p2(120, 2, "꼬부기");
	string s1 = "AXE", s2 = "ACE";
	string str1 = "Hello", str2 = "Bye";
	cout << smaller(s1, s2) << "\n"; //<연산자 오버로딩으로 반환한 hp가 더 작은 객체의 name 요소를 << 오버로딩으로 출력
	cout << smaller(17, 24, 20) << "\n";
	cout << "두 값 중 더 작은 값: " << smaller <double>(23, 67.2) << "\n"; //23이 double형 23.0으로 형변환
	cout << smaller (str1, str2) << "\n"; // Bye가 더 작음

	return 0;
}