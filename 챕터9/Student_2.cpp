#include <iostream>
#include <iomanip>
#include "Student_2.h"
using namespace std;

int Student::m_sum = 0;
int Student::f_sum = 0;

Student::Student() {}

void Student::SetInfo(int _mid, int _fin, int _stuNum) { //입력받은 학생 정보를 객체의 데이터 멤버에 저장
	mid = _mid;
	m_sum += mid;
	fin = _fin;
	f_sum += fin;
	stuNum = _stuNum;
}

double Student::GetMidAverage(int Num) {
	average = static_cast<double>(m_sum) / Num;
	return average;
}

double Student::GetFinAverage(int Num) {
	average = static_cast<double>(f_sum) / Num;
	return average;
}

void Student::GetInfo() { //학생정보 출력
	if (stuNum < 10) {
		cout << "Student 0" << stuNum << ": " << setw(7) << right << mid << " " << setw(5) << right << fin << "\n";
	}
	else if (stuNum >= 10) {
		cout << "Student " << stuNum << ": " << setw(7) << right << mid << " " << setw(5) << right << fin << "\n";
	}
}