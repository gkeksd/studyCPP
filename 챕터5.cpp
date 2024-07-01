#include <iostream>
using namespace std;

int main() {
	string name = "noname"; string birth = "220101";
	string test;
	double temp;
	bool cough;
	bool suspec = 0; bool confirm = 0;
	cout << "1. 신상 정보 입력\n2. 의심 증상이 있는 경우\n3. 코로나 검사를 받은 경우\n4. 결과 출력\n";
	for (int i = 0; ;) {
		int menu;
		cin >> menu;
		switch (menu) {
		case 1: cout << "이름과 생년월일을 입력하세요.\n"; 
			cin >> name >> birth; 
			continue;
		case 2: cout << "체온과 기침 증상 유무(true/false)를 입력하세요\n"; 
			cin >> temp >> boolalpha >> cough; 
			(temp > 38 && cough) ? (suspec = 1) : (suspec = 0); 
			continue;
		case 3: cout << "신속항원검사 양성: 신속, PCR 양성: PCR, 음성: 음성\n"; 
			cin >> test; 
			(test == "신속" || test == "PCR") ? (confirm = 1) : (confirm = 0); 
			continue;
		case 4: {
			((suspec && confirm) || confirm) ? cout << name << " " << birth << "\n확진자입니다. 격리하시기 바랍니다.\n" : ((suspec && !confirm) ? cout << name << " " << birth << "\n감염의심자입니다. 검사를 받으세요\n" : cout << name << " " << birth << "\n감염되지 않았습니다.\n");
			name = "noname"; birth = "220101";
			suspec = 0; confirm = 0;
			++i;
			if (i == 3) break;
			continue;
		}
		default: cout << "잘못된 입력입니다."; 
			continue;
		}
		if (i == 3) break;
	}
}