#include <iostream>
using namespace std;

// ���ø� �Լ� ����
// �ڵ� ���̴� �پ������ �޸� ��ƸԴ� �뷮 ��ü�� �״��
template<typename T>
T smaller(T first, T second) {
	if (first < second) return first;
	return second;
}

int main() {
	cout << "�� �� �� �� ���� ��: " << smaller('a', 'B') << "\n"; //�ƽ�Ű �ڵ�� ��

	return 0;
}