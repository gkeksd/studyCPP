#include <iostream>
using namespace std;
/*
const_cast : const, volatile 등의 속성을 변경
dynamic_cast : 상속 관계의 클래스 포인터 및 참조 타입 체크
static_cast : 논리적으로 변환 가능한 타입만 변환. 그 외의 변환은 에러로 처리.
reinterpret_cast : 포인터끼리 또는 포인터와 수치형 간의 변환
*/

// const cast
//void main() {
//	char univ[] = "Inha";
//	const char* c1 = univ;
//	char* c2;
//	c2 = const_cast<char*>(c1);  // const char *인 c1을 char*로 상수 캐스팅
//	//int* pi = const_cast<int*>(c1);  // 대상체의 타입까지 변경은 불가능
//	//float f = const_cast<float>(c1);  // 상수 캐스팅은 포인터나 참조 타입으로만 변경 가능
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
	C* pc2 = dynamic_cast<C*>(pa2);  // A 클래스의 주소를 갖는 A 클래스 타입 포인터 -> 캐스팅 실패 -> NULL 반환

	try {
		C& rc1 = dynamic_cast<C&>(*pa2); // bad cast(이유는 위와 동일). 예외 발생해 밑의 구문 실행.
	}
	catch (bad_cast& e) {
		cout << "bad cast" << "\n";
	}
	return 0;
}
