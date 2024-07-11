#include <iostream>
#include <cmath>
using namespace std;

class Qfunc {
private:
	double two, one, num;
	double root;
public:
	Qfunc(double t, double o, double n);
	Qfunc(const Qfunc& func1, const Qfunc & func2);
	void printFunc();
	void getRoot();
};

int main() {
	double t, o, n;
	cout << "�����Լ� 1�� ������� �Է����ּ���: ";
	cin >> t >> o >> n;
	Qfunc Qfunc1(t, o, n);

	cout << "�����Լ� 2�� ������� �Է����ּ���: ";
	cin >> t >> o >> n;
	Qfunc Qfunc2(t, o, n);

	Qfunc Qfunc3(Qfunc1, Qfunc2);

	cout << "�Լ�1: ";
	Qfunc1.printFunc();
	cout << "�� ���� ";
	Qfunc1.getRoot();
	cout << "�Լ�2: ";
	Qfunc2.printFunc();
	cout << "�� ���� ";
	Qfunc2.getRoot();
	cout << "�Լ�3: ";
	Qfunc3.printFunc();
	cout << "�� ���� ";
	Qfunc3.getRoot();
}

Qfunc::Qfunc(double t, double o, double n) : two{ t }, one{ o }, num{ n } {}

Qfunc::Qfunc(const Qfunc& func1, const Qfunc& func2) : two{ func1.two + func2.two }, one{ func1.one + func2.one }, num{ func1.num + func2.num } {}

void Qfunc::printFunc() {
	cout << two << "x^2 + " << one << "x + " << num;
}

void Qfunc::getRoot() {
	if (one * one - 4 * two * num > 0) cout << (-1 * one + sqrt(one * one - 4 * two * num)) / (2 * two) << "��(��) " << (-1 * one - sqrt(one * one - 4 * two * num)) / (2 * two) << "�Դϴ�.\n";
	else if (one * one - 4 * two * num == 0) cout << (-1 * one) / (2 * two) << "�Դϴ�.\n";
	else cout << "�������� �ʽ��ϴ�.\n";
}