#include <iostream>
#include <iomanip>
using namespace std;

class Student {
private:
	int score1, score2, score3;
	int sum;
	double average;
	string name;
public:
	void printStudent();
	void getAverage();
	void setName();
	void setScore();
};

void Student::setName() {
	cout << "Input name: ";
	cin >> name;
}

void Student::getAverage() {
	sum = score1 + score2 + score3;
	average = static_cast<double> (sum) / 3;
}

void Student::setScore() {
	cout << "Input 3 scores: ";
	cin >> score1 >> score2 >> score3;
	getAverage();
}

void Student::printStudent() {
	cout << left << setw(10) << name << right << setw(10) << score1 << right << setw(10) << score2 
		<< right << setw(10) << score3 << right << setw(10) << average << "\n";
}

int main() {
	Student student[4];
	for (Student& s : student) {
		s.setName();
		s.setScore();
	}

	cout << "\n\n" << left << setw(10) << "Name" << right << setw(10) << "score1" << right << setw(10) << "score2" << right << setw(10) << "score3" << right << setw(10) << "Average\n";

	for (Student& s : student) {
		s.printStudent();
	}
}