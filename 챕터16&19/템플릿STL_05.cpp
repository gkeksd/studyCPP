#include <iostream>
#include <algorithm> // sort, find(�����˻�), replace(Ư�� �� �˻��� ��ü), reverse(���� ���� ����), binary_search(����Ž��)
#include <vector>
// �̿ܿ��� map, deque ���� �ڷ����� ����
#include <functional> // greater ����� ���� ���
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
	sort(vec.begin(), vec.end(), [](int i, int j) { return i > j; });  // ���� ǥ���� �̿�
	
	for (auto i : vec) cout << i;
	cout << endl;
}