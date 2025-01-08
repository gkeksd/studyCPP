// bad_allocation 예외처리 클래스 예제
#include <new>
#include <iostream>
using namespace std;

int main() {
	register int size; // register는 변수를 레지스터 영역에 저장해줌. 현재는 사문화
	int* p = nullptr;
	try {
		cin >> size;
		p = new int[size];
	}
	catch (bad_alloc error) {
		cout << error.what() << "\n";
	}
	delete[] p;
	return 0;
}