#include <iostream>
#include <cmath>
using namespace std;

class Point {
private:
	int xPoint, yPoint;
	static double distance;
public:
	void inputPoint(int i);
	static void setDistance(Point p1, Point p2);
	static void getDistance();
};

double Point::distance = 0;

void Point::inputPoint(int i) {
	cout << i << "번 점의 좌표를 입력해주세요: ";
	cin >> xPoint >> yPoint;
}

void Point::setDistance(Point p1, Point p2) {
	int dx = p2.xPoint - p1.xPoint;
	int dy = p2.yPoint - p1.yPoint;
	distance = sqrt(static_cast<double> (dx * dx + dy * dy));
}

void Point::getDistance() {
	cout << "두 점 사이의 거리: " << distance;
}

int main() {
	Point point[5];

	for (int i = 0; i < 5; i++) {
		point[i].inputPoint(i);
	}
	
	int i1, i2;
	cout << "비교할 두 점의 인덱스를 임력해주세요(0~4): ";
	cin >> i1 >> i2;
	point->setDistance(point[i1], point[i2]);

	point->getDistance();
}