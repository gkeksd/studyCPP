#include <iostream>
#include <list>
#include <vector>
using namespace std;
void main() {
	list<int> iList; // ���� ����Ʈ(Linked list)
	//vector<int> iList; // ���� �迭

	for (auto i = 0; i < 10; i++) iList.push_back(i);
	
	iList.remove(5); // ����Ʈ ���� �޼���

	// old style
	// �ڷ����� ���濡 ���� ���뼺�� ����
	list<int>::iterator it;
	for (it = iList.begin(); it != iList.end(); ++it) cout << *it << endl;
	cout << endl;

	// modern style
	// �ڷ����� ���濡 ���� ���뼺�� �پ
	for (auto k = iList.begin(); k != iList.end(); ++k) cout << *k << endl;
}