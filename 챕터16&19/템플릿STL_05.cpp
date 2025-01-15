#include <iostream>
#include <algorithm> // sort, find(선형검색), replace(특정 값 검색해 교체), reverse(원소 순서 반전), binary_search(이진탐색)
#include <vector>
// 이외에도 map, deque 등의 자료형이 있음
#include <functional> // greater 사용을 위한 헤더
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

	//sort(vec.begin(), vec.end(), greater<char>()); 
	sort(vec.begin(), vec.end(), [](int i, int j) { return i > j; });  // 람다 표현식 이용
	
	for (auto i : vec) cout << i;
	cout << endl;
}