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
        Student student;  // ���ο� �л� ��ü�� ����
        student.SetInfo(mid, fin, stunum);  // ������ ����
        students.push_back(student);  // ���Ϳ� �л� �߰�
    }

    cout << setw(12) << "            " << setw(7) << "midterm" << " " << setw(5) << "final\n";
    for (int i = 0; i < num; i++) {
        students[i].GetInfo();  // �л� ���� ���
    }
    cout << setw(12) << right << "Average: " << setw(7) << right << fixed << setprecision(1) << aver.GetMidAverage(num) << " "; // �߰� ���� ��� ���
    cout << setw(5) << right << fixed << setprecision(1) << aver.GetFinAverage(num); //�⸻���� ��� ���

    return 0;
}
