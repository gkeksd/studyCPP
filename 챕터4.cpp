#include <iostream>
#include <string>
using namespace std;

int main() {
	string name;
	string test; //�˻� ��� ������ ���ڿ� ����
	int birth;
	double temp;
	bool cough; //��ħ ���� ���� bool ����
	bool suspec, confirm; //�����ǽ��ڿ� Ȯ���� ���� ������ bool ����

	cout << "�̸��� �������(yymmdd)�� �Է��ϼ���: ";
	cin >> name >> birth;
	cout << "ü�°� ��ħ ���� ����(true/false)�� �Է��ϼ���: ";
	cin >> temp >> boolalpha >> cough;
	cout << "�ڷγ� �˻� ����� �Է��ϼ���(�ż��׿� �缺: �ż�, PCR �缺: PCR, ����: ����): ";
	cin >> test;

	if (temp > 38 && cough == 1) { //ü���� 38�� �ʰ��̸鼭 ��ħ ������ ���� ���
		suspec = true; //�����ǽ�����
	}
	else {
		suspec = false;
	}

	if (test == "����") { //�˻����� ������ ���
		confirm = false;
	}
	else if ((test == "PCR") || (test == "�ż�")) { //PCR �˻糪 �ż��׿� �˻� ����� �缺�� ���
		confirm = true; //Ȯ������
	}
	else {
		cout << "�߸� �Է��ϼ̽��ϴ�. �ٽ� �Է��� �ּ���.";
	}

	if (suspec == true && confirm == true) {
		cout << name << " " << birth << endl;
		cout << "Ȯ�����Դϴ�. �ݸ��Ͻñ� �ٶ��ϴ�.";
	}
	else if (suspec == true && confirm == false) {
		cout << name << " " << birth << endl;
		cout << "���� �ǽ����Դϴ�. �˻縦 ��������";
	}
	else if (suspec == false && confirm == true) {
		cout << name << " " << birth << endl;
		cout << "Ȯ�����Դϴ�. �ݸ��Ͻñ� �ٶ��ϴ�.";
	}
	else {
		cout << name << " " << birth << endl;
		cout << "�������� �ʾҽ��ϴ�";
	}
}