#include <iostream>
#include <algorithm> // ����, �˻� ���� �˰����� ������ ���
#include <list> // ���� ����Ʈ (����� ����, ������ �پ)
#include <vector> // ���� �迭 (�˻� ���ֿ� �پ)
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

	//sort(vec.begin(), vec.end()); // �������� ����
	//sort(vec.begin(), vec.end(), myfunc); // ��������(�Լ� �̿�)
	//sort(vec.begin(), vec.end(), myobj1); // ��������(����ü �̿�)
	sort(vec.begin(), vec.end(), myobj2); // ��������(Ŭ���� �̿�)

	for (auto i : vec) cout << i;
	cout << endl;
}