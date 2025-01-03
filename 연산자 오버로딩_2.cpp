#include <iostream>
using namespace std;
/*
const_cast : const, volatile ���� �Ӽ��� ����
dynamic_cast : ��� ������ Ŭ���� ������ �� ���� Ÿ�� üũ
static_cast : �������� ��ȯ ������ Ÿ�Ը� ��ȯ. �� ���� ��ȯ�� ������ ó��.
reinterpret_cast : �����ͳ��� �Ǵ� �����Ϳ� ��ġ�� ���� ��ȯ
*/

// const cast
//void main() {
//	char univ[] = "Inha";
//	const char* c1 = univ;
//	char* c2;
//	c2 = const_cast<char*>(c1);  // const char *�� c1�� char*�� ��� ĳ����
//	//int* pi = const_cast<int*>(c1);  // ���ü�� Ÿ�Ա��� ������ �Ұ���
//	//float f = const_cast<float>(c1);  // ��� ĳ������ �����ͳ� ���� Ÿ�����θ� ���� ����
//	c2[0] = 'i';
//	cout << c2 << endl;
//}

// dynamic cast
class A {
public:
	virtual void Func() {}
};
class B : public A {};
class C : public B {};

int main() {
	A* pa1 = new C;
	A* pa2 = new A;
	C* pc1 = dynamic_cast<C*>(pa1);
	C* pc2 = dynamic_cast<C*>(pa2);  // A Ŭ������ �ּҸ� ���� A Ŭ���� Ÿ�� ������ -> ĳ���� ���� -> NULL ��ȯ

	try {
		C& rc1 = dynamic_cast<C&>(*pa2); // bad cast(������ ���� ����). ���� �߻��� ���� ���� ����.
	}
	catch (bad_cast& e) {
		cout << "bad cast" << "\n";
	}
	return 0;
}