#include <iostream>
#include "student.h"
#include <vector>
#include <climits>
using namespace std;

void findMinMaxStudent(vector<string>& a, vector<int>& b, string Name[2], int Score[2]);

int main() {
	string minmaxName[2];
	int minmaxScore[2];
	
	vector<string> name;
	string _name; //이름 입력된 값 저장 변수
	vector<int> score;
	int _score; //성적 입력된 값 저장 변수
	
	cout << "Enter the number and score of student\n";
	while (cout << "(EOF to quit) ") {
		cin >> _name >> _score;
		if (cin.eof()) break;
		name.push_back(_name);
		score.push_back(_score);
		Student(_name, _score);
	}
	cout << "\n";

	Student n{};
	n.numberOfStudent();
	findMinMaxStudent(name, score, minmaxName, minmaxScore);
	
}

void findMinMaxStudent(vector<string>& a, vector<int>& b, string Name[2], int Score[2]) {
	string minName, maxName; //최소와 최대 점수 받은 학생 이름 저장하는 변수
	int minScore = INT_MAX; //최소 성적 저장하는 변수
	int maxScore = INT_MIN; //최대 성적 저장하는 변수

	for (int i = 0; i < b.size(); i++) {
		if (b[i] < minScore) {
			minScore = b[i];
			minName = a[i];
		}
		if (b[i] > maxScore) {
			maxScore = b[i];
			maxName = a[i];
		}
	}
	cout << "Minimam and Maximam scores\n" << minName << " " << minScore << " " << maxName << " " << maxScore;
}