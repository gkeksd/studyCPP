#include <iostream>
#include "student.h"
using namespace std;

int Student::number = 0;

Student::Student() {}

Student::Student(std::string name, int score) {
	number++; //생성자를 호출해 학생수를 저장한 변수 값 1씩 증가시킴
}

Student::~Student() {}

void Student::numberOfStudent() {
	cout << "The number of Students: " << number << "\n"; //학생 수 출력하는 멤버 함수
}