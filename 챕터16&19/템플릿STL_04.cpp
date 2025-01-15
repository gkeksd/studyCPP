#include <iostream>
#include <algorithm> // 정렬, 검색 등의 알고리즘을 구현한 헤더
#include <list> // 연결 리스트 (요소의 삽입, 삭제에 뛰어남)
#include <vector> // 동적 배열 (검색 위주에 뛰어남)
using namespace std;

bool myfunc(int i, int j) { return i > j; }

struct mystruct {
	bool operator() (int i, int j) { return i > j; }
} myobj1;

class myclass {
public:
	bool operator() (int i, int j) { return i > j; }
} myobj2;

void main() {
	vector<char> vec;
	vec.push_back('e');
	vec.push_back('b');
	vec.push_back('a');
	vec.push_back('d');
	vec.push_back('c');

	//sort(vec.begin(), vec.end()); // 오름차순 정렬
	//sort(vec.begin(), vec.end(), myfunc); // 내림차순(함수 이용)
	//sort(vec.begin(), vec.end(), myobj1); // 내림차순(구조체 이용)
	sort(vec.begin(), vec.end(), myobj2); // 내림차순(클래스 이용)

	for (auto i : vec) cout << i;
	cout << endl;
}