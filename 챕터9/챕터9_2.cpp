#include <iostream>
#include <vector>
#include <iomanip>
#include "Student_2.h"
using namespace std;

int main() {
    vector<Student> students; 
    Student aver;
    int num;
    int stunum;
    int mid, fin;

    cout << "Enter the number of students: ";
    cin >> num;

    for (int i = 0; i < num; i++) {
        cout << "Enter midterm and final score: ";
        cin >> mid >> fin;

        stunum = i + 1;
        Student student;  // 새로운 학생 객체를 생성
        student.SetInfo(mid, fin, stunum);  // 정보를 설정
        students.push_back(student);  // 벡터에 학생 추가
    }

    cout << setw(12) << "            " << setw(7) << "midterm" << " " << setw(5) << "final\n";
    for (int i = 0; i < num; i++) {
        students[i].GetInfo();  // 학생 정보 출력
    }
    cout << setw(12) << right << "Average: " << setw(7) << right << fixed << setprecision(1) << aver.GetMidAverage(num) << " "; // 중간 시험 평균 출력
    cout << setw(5) << right << fixed << setprecision(1) << aver.GetFinAverage(num); //기말시험 평균 출력

    return 0;
}
