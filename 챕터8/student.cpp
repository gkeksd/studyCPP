#include <iostream>
#include "student.h"
using namespace std;

int Student::number = 0;

Student::Student() {}

Student::Student(std::string name, int score) {
	number++; //�����ڸ� ȣ���� �л����� ������ ���� �� 1�� ������Ŵ
}

Student::~Student() {}

void Student::numberOfStudent() {
	cout << "The number of Students: " << number << "\n"; //�л� �� ����ϴ� ��� �Լ�
}