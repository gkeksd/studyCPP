#include <iostream>
#include <algorithm> // ����, �˻� ���� �˰����� ������ ���
#include <list> // ���� ����Ʈ (����� ����, ������ �پ)
#include <vector> // ���� �迭 (�˻� ���ֿ� �پ)
using namespace std;

void main() {
	vector<char> vec;
	vec.push_back('e');
	vec.push_back('b');
	vec.push_back('a');
	vec.push_back('d');
	vec.push_back('c');

	sort(vec.begin(), vec.end()); // end�� �� �� + 1�� �ּҸ� ��

	for (auto i : vec) cout << i;
	cout << endl;

	char arr[5]{ 'e', 'b', 'a', 'd', 'c' };

	sort(arr, arr + 5); // ���������� ������ ���� + 1 ��ġ�� ������ ��

	//old style
	vector<char>::iterator it;
	for (it = vec.begin(); it != vec.end(); it++) cout << *it;
	cout << endl;

	// modern c++ style
	for (auto i : arr) cout << i;
}