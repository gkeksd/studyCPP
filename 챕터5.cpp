#include <iostream>
using namespace std;

int main() {
	string name = "noname"; string birth = "220101";
	string test;
	double temp;
	bool cough;
	bool suspec = 0; bool confirm = 0;
	cout << "1. �Ż� ���� �Է�\n2. �ǽ� ������ �ִ� ���\n3. �ڷγ� �˻縦 ���� ���\n4. ��� ���\n";
	for (int i = 0; ;) {
		int menu;
		cin >> menu;
		switch (menu) {
		case 1: cout << "�̸��� ��������� �Է��ϼ���.\n"; 
			cin >> name >> birth; 
			continue;
		case 2: cout << "ü�°� ��ħ ���� ����(true/false)�� �Է��ϼ���\n"; 
			cin >> temp >> boolalpha >> cough; 
			(temp > 38 && cough) ? (suspec = 1) : (suspec = 0); 
			continue;
		case 3: cout << "�ż��׿��˻� �缺: �ż�, PCR �缺: PCR, ����: ����\n"; 
			cin >> test; 
			(test == "�ż�" || test == "PCR") ? (confirm = 1) : (confirm = 0); 
			continue;
		case 4: {
			((suspec && confirm) || confirm) ? cout << name << " " << birth << "\nȮ�����Դϴ�. �ݸ��Ͻñ� �ٶ��ϴ�.\n" : ((suspec && !confirm) ? cout << name << " " << birth << "\n�����ǽ����Դϴ�. �˻縦 ��������\n" : cout << name << " " << birth << "\n�������� �ʾҽ��ϴ�.\n");
			name = "noname"; birth = "220101";
			suspec = 0; confirm = 0;
			++i;
			if (i == 3) break;
			continue;
		}
		default: cout << "�߸��� �Է��Դϴ�."; 
			continue;
		}
		if (i == 3) break;
	}
}