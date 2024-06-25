#include <print>
#include <iostream>
#include <string>
using namespace std;

int main() {
	string name;
	int age;
	float l_vis, r_vis;
	bool glass;

	print("이름을 입력해주세요: ");
	cin >> name;
	print("나이를 입력해주세요: ");
	cin >> age;
	print("왼쪽과 오른쪽 시력을 각각 입력해주세요: ");
	cin >> l_vis;
	cin >> r_vis;
	print("안경 착용 여부를 입력해주세요(True=1 / False=0)");
	cin >> glass;

	print("당신의 이름은 {}입니다\n나이는 {}살이며,\n시력은 각각 왼쪽과 오른쪽이 {}, {}입니다\n", name, age, l_vis, r_vis);
	print("안경 착용 여부: {}", glass);
}