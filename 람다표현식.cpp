#include <iostream>
#include <array>
#include <algorithm>
using namespace std;

int main() {
	// ���� ǥ����(Lambda Expresstion)�� [ĸ�ĺ��](�Ű����� ����Ʈ) -> ����Ÿ��{�Լ� �ٵ�};�� ������ �̷����
	// ()�� ->, ���� Ÿ���� ���� ����
	// ǥ���� �������� ()�� �߰��ϸ� ǥ������ ��� �����Ŵ
	auto inha = [] { cout << "Hi lambda!"; };
	inha();

	array<int, 10> v = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };

	// for ���� ����� ���� �ݺ���
	for (int i = 0; i < 10; i++) {
		cout << v[i] << "\n";
	}

	// ���ٽ��� ����� ������ �ݺ���
	for_each(begin(v), end(v), [](auto n) {cout << n << " "; });

	return 0;
}