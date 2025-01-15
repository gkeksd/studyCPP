#include <iostream>
#include <algorithm> // 정렬, 검색 등의 알고리즘을 구현한 헤더
#include <list> // 연결 리스트 (요소의 삽입, 삭제에 뛰어남)
#include <vector> // 동적 배열 (검색 위주에 뛰어남)
using namespace std;

void main() {
	vector<char> vec;
	vec.push_back('e');
	vec.push_back('b');
	vec.push_back('a');
	vec.push_back('d');
	vec.push_back('c');

	sort(vec.begin(), vec.end()); // end는 맨 끝 + 1의 주소를 줌

	for (auto i : vec) cout << i;
	cout << endl;

	char arr[5]{ 'e', 'b', 'a', 'd', 'c' };

	sort(arr, arr + 5); // 마찬가지로 마지막 원소 + 1 위치를 끝으로 줌

	//old style
	vector<char>::iterator it;
	for (it = vec.begin(); it != vec.end(); it++) cout << *it;
	cout << endl;

	// modern c++ style
	for (auto i : arr) cout << i;
}