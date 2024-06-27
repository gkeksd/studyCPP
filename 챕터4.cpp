#include <iostream>
#include <string>
using namespace std;

int main() {
	string name;
	string test; //검사 결과 저장할 문자열 변수
	int birth;
	double temp;
	bool cough; //기침 증상 유무 bool 변수
	bool suspec, confirm; //감염의심자와 확진자 여부 저장할 bool 변수

	cout << "이름과 생년월일(yymmdd)을 입력하세요: ";
	cin >> name >> birth;
	cout << "체온과 기침 증상 유무(true/false)를 입력하세요: ";
	cin >> temp >> boolalpha >> cough;
	cout << "코로나 검사 결과를 입력하세요(신속항원 양성: 신속, PCR 양성: PCR, 음성: 음성): ";
	cin >> test;

	if (temp > 38 && cough == 1) { //체온이 38도 초과이면서 기침 증상이 있을 경우
		suspec = true; //감염의심자임
	}
	else {
		suspec = false;
	}

	if (test == "음성") { //검사결과가 음성일 경우
		confirm = false;
	}
	else if ((test == "PCR") || (test == "신속")) { //PCR 검사나 신속항원 검사 결과가 양성일 경우
		confirm = true; //확진자임
	}
	else {
		cout << "잘못 입력하셨습니다. 다시 입력해 주세요.";
	}

	if (suspec == true && confirm == true) {
		cout << name << " " << birth << endl;
		cout << "확진자입니다. 격리하시기 바랍니다.";
	}
	else if (suspec == true && confirm == false) {
		cout << name << " " << birth << endl;
		cout << "감염 의심자입니다. 검사를 받으세요";
	}
	else if (suspec == false && confirm == true) {
		cout << name << " " << birth << endl;
		cout << "확진자입니다. 격리하시기 바랍니다.";
	}
	else {
		cout << name << " " << birth << endl;
		cout << "감염되지 않았습니다";
	}
}