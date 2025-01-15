#include <iostream>
using namespace std;
/*
	c++에서 스트림은 파이프라인을 통해 연결된 프로그램에서
	흘러가고 있는 데이터와 그것을 다루는 것을 뜻함
	extern ostream cout;
	extern istream cin;
	ios_base // basic_ios의 부모 클래스

	basic_ios // basic_ostream과 basic_istream의 부모 클래스

	typedef basic_ostream<char> ostream;  // cout 객체의 형식
	typedef basic_istream<char> istream;  // cin 객체의 형식
*/

void main() {

	// 실수의 출력 형식을 조정하는 예
	float f = 0.01234f;
	ios_base::fmtflags old; // ios_base : 입출력 포맷과 관련된 기능을 제공하는 클래스
	cout << f << endl;
	//setf는 입출력 형식을 지정하는 함수
	//조정자를 이용해 cout과 함께 간단하게 사용도 가능
	// 과학적 표기법(scientific)과 고정소수점(fixed)중에 선택 가능
	old = cout.setf(ios_base::scientific, ios_base::floatfield);
	cout << f << endl;
	cout.setf(old, ios_base::floatfield);
	cout << f << endl;

	// 정수를 16진수로 출력하는 예
	int a = 11;
	cout << hex; // 연산자 오버로딩된 조정자를 활용한 간단한 버전
	//cout.setf(ios_base::hex, ios_base::basefield); // setf를 이용한 정석
	cout << a << endl;

	// 불 타입 변수를 true와 false로 출력하는 예
	bool test = true;
	//cout << boolalpha;
	cout.setf(ios_base::boolalpha);
	cout << test << endl;
	cout.unsetf(ios_base::boolalpha); // 매개인자가 한개일때 다시 원래대로 출력 형식을 되돌림
	
	// width() 함수는 출력할 전체 공간을 지정하는 함수
	// precision() 함수는 소수점 몇 자리까지 출력할지 설정하는 함수
}