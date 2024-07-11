#include <iostream>
using namespace std;

class Car {
private:
	string command;
	int speed;
public:
	Car(int sp);
	void com();
};

int main() {
	int sp = 0;
	Car car{ sp };
	car.com();
}

Car::Car(int sp) : speed{ sp } {}

void Car::com() {
	string str;
	while (!(str == "-1")) {
		cout << "����� �Է��ϼ���(accelerate, decelerate, speed): ";
		cin >> str;
		if (str == "accelerate") speed += 10;
		else if (str == "decelerate") {
			if (speed > 10) speed -= 10;
			else if (speed <= 10 && speed >= 0) speed = 0;
		}
		else if (str == "speed") cout << "���� �ӵ�: " << speed << "km/h\n";
		else if (str == "-1") break;
	}
}