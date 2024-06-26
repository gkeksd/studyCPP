#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {
	string name1, name2, name3;
	unsigned int plus1, plus2, plus3;
	int minus1, minus2, minus3;

	// 이름, 수입, 지출을 각각 입력받는 코드
	cout << "이름, 수입, 지출: ";
	cin >> name1 >> plus1 >> minus1;
	cout << "이름, 수입, 지출: ";
	cin >> name2 >> plus2 >> minus2;
	cout << "이름, 수입, 지출: ";
	cin >> name3 >> plus3 >> minus3;

	// 통장 출력. 
	cout << setw(10) << left << "이름" << " " << setw(5) << right << "수입" << " " << setw(5) << right << "지출" << endl; //각각 최대 입력 가능 자릿수만큼 setw 설정 후
	cout << setw(10) << left << name1 << " " << setw(5) << right << plus1 << " " << setw(5) << right << minus1 << endl; //이름은 좌측정렬, 
	cout << setw(10) << left << name2 << " " << setw(5) << right << plus2 << " " << setw(5) << right << minus2 << endl; //수입과 지출은 우측정렬.
	cout << setw(10) << left << name3 << " " << setw(5) << right << plus3 << " " << setw(5) << right << minus3 << endl << endl; //사이사이마다 한칸씩 공백을 둠.

	// 사람별 잔액 출력
	cout << "잔액 = " << static_cast<int>(plus1) + minus1 << " (" << name1 << ")" << endl; // unsigned int형을 int 형으로 변환
	cout << "잔액 = " << static_cast<int>(plus2) + minus2 << " (" << name2 << ")" << endl;
	cout << "잔액 = " << static_cast<int>(plus3) + minus3 << " (" << name3 << ")" << endl;
}