#include <iostream>
#include <list>
#include <vector>
using namespace std;
void main() {
	list<int> iList; // 연결 리스트(Linked list)
	//vector<int> iList; // 동적 배열

	for (auto i = 0; i < 10; i++) iList.push_back(i);
	
	iList.remove(5); // 리스트 전용 메서드

	// old style
	// 자료형의 변경에 따른 범용성이 낮음
	list<int>::iterator it;
	for (it = iList.begin(); it != iList.end(); ++it) cout << *it << endl;
	cout << endl;

	// modern style
	// 자료형의 변경에 따른 범용성이 뛰어남
	for (auto k = iList.begin(); k != iList.end(); ++k) cout << *k << endl;
}