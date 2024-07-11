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
	void printPoint() { cout << "(" << _p1 << ", " << _p2 << ") ���� �����Ǿ����ϴ�.\n"; }
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
	cout << "ù��° ���� x��ǥ�� y��ǥ�� �Է��ϼ���: ";
	cin >> x >> y;
	Point p1(x, y);

	cout << "�ι�° ���� x��ǥ�� y��ǥ�� �Է��ϼ���: ";
	cin >> x >> y;
	Point p2(x, y);

	p1.printPoint();
	p2.printPoint();
	cout << "\n";

	Line l1(p1, p2); //p1�� p2�� Point ��ü�̹Ƿ� ���� Line �����ڿ� ����
	cout << "(" << p1.getX() << ", " << p1.getY() << ")�� (" << p2.getX() << ", " << p2.getY() << ")�� ���� ������ �����Ǿ����ϴ�.\n";
	cout << "�� �� ���̸� ���� ������ ���̴� " << l1.getLength() << "�Դϴ�.";
}

double Line::getLength() const {
	double dx = _p2.getX() - _p1.getX();
	double dy = _p2.getY() - _p1.getY();
	return sqrt(dx * dx + dy * dy);
}