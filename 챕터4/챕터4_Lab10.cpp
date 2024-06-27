#include <print>
#include <iostream>
using namespace std;

int main() {
	int days, addDay;

	print("오늘의 요일을 입력하세요(월요일: 1, 화요일: 2, ... 토요일: 6, 일요일: 7): ");
	cin >> days;
	print("몇 일 뒤를 계산하시겠습니까?: ");
	cin >> addDay;

	int afterDay = days % 7 + (addDay % 7);

	switch (afterDay) {
	case 1: print("월요일!"); break;
	case 2: print("화요일!"); break;
	case 3: print("수요일!"); break;
	case 4: print("목요일!"); break;
	case 5: print("금요일!"); break;
	case 6: print("토요일!"); break;
	case 0: print("일요일!"); break;
	case 7: print("일요일!"); break;
	}
}