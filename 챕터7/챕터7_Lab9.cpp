#include <iostream>
using namespace std;

class Point {
private:
	double _p1, _p2;
public:
	Point() : _p1(0), _p2(0) {};
	Point(double x, double y) : _p1{x}, _p2{y} {}
	double getX() const { return _p1; }
	double getY() const { return _p2; }
	void printPoint() { cout << "(" << _p1 << ", " << _p2 << ") 점이 생성되었습니다.\n"; }
};

class Line {
private:
	Point _p1, _p2;
public:
	Line(Point p1 = Point{ 0, 0 }, Point p2 = Point{ 0, 0 }) : _p1{ p1 }, _p2{ p2 } {}
	double getLength() const;
};

int main() {
	int x, y;
	cout << "첫번째 점의 x좌표와 y좌표를 입력하세요: ";
	cin >> x >> y;
	Point p1(x, y);

	cout << "두번째 점의 x좌표와 y좌표를 입력하세요: ";
	cin >> x >> y;
	Point p2(x, y);

	p1.printPoint();
	p2.printPoint();
	cout << "\n";

	Line l1(p1, p2); //p1과 p2가 Point 객체이므로 직접 Line 생성자에 전달
	cout << "(" << p1.getX() << ", " << p1.getY() << ")와 (" << p2.getX() << ", " << p2.getY() << ")를 이은 직선이 생성되었습니다.\n";
	cout << "두 점 사이를 이은 직선의 길이는 " << l1.getLength() << "입니다.";
}

double Line::getLength() const {
	double dx = _p2.getX() - _p1.getX();
	double dy = _p2.getY() - _p1.getY();
	return sqrt(dx * dx + dy * dy);
}