#include <iostream>
using namespace std;
/*
	c++���� ��Ʈ���� ������������ ���� ����� ���α׷�����
	�귯���� �ִ� �����Ϳ� �װ��� �ٷ�� ���� ����
	extern ostream cout;
	extern istream cin;
	ios_base // basic_ios�� �θ� Ŭ����

	basic_ios // basic_ostream�� basic_istream�� �θ� Ŭ����

	typedef basic_ostream<char> ostream;  // cout ��ü�� ����
	typedef basic_istream<char> istream;  // cin ��ü�� ����
*/

void main() {

	// �Ǽ��� ��� ������ �����ϴ� ��
	float f = 0.01234f;
	ios_base::fmtflags old; // ios_base : ����� ���˰� ���õ� ����� �����ϴ� Ŭ����
	cout << f << endl;
	//setf�� ����� ������ �����ϴ� �Լ�
	//�����ڸ� �̿��� cout�� �Բ� �����ϰ� ��뵵 ����
	// ������ ǥ���(scientific)�� �����Ҽ���(fixed)�߿� ���� ����
	old = cout.setf(ios_base::scientific, ios_base::floatfield);
	cout << f << endl;
	cout.setf(old, ios_base::floatfield);
	cout << f << endl;

	// ������ 16������ ����ϴ� ��
	int a = 11;
	cout << hex; // ������ �����ε��� �����ڸ� Ȱ���� ������ ����
	//cout.setf(ios_base::hex, ios_base::basefield); // setf�� �̿��� ����
	cout << a << endl;

	// �� Ÿ�� ������ true�� false�� ����ϴ� ��
	bool test = true;
	//cout << boolalpha;
	cout.setf(ios_base::boolalpha);
	cout << test << endl;
	cout.unsetf(ios_base::boolalpha); // �Ű����ڰ� �Ѱ��϶� �ٽ� ������� ��� ������ �ǵ���
	
	// width() �Լ��� ����� ��ü ������ �����ϴ� �Լ�
	// precision() �Լ��� �Ҽ��� �� �ڸ����� ������� �����ϴ� �Լ�
}