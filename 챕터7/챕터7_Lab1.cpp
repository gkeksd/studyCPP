#include <iostream>
using namespace std;

class Rectangle {
private:
	double wid, leng;
public:
	Rectangle(double w, double l);
	Rectangle();
	Rectangle(const Rectangle& w, const Rectangle& l);

	void setRec(double w, double l) {
		wid = w;
		leng = l;
	}
	void inform() {
		cout << wid << " x " << leng << "\n";
	}
	void Area() {
		cout << wid * leng << "\n";
	}
	void Round() {
		cout << 2 * wid + 2 * leng << "\n";
	}
};

int main() {
	double w, l;
	cout << "사각형1 가로: ";
	cin >> w;
	cout << "사각형1 세로: ";
	cin >> l;
	if (w <= 0 || l <= 0) cout << "Rectangle 객체를 생성할 수 없습니다.\n";
	Rectangle rec1{ w, l };
	cout << "사각형1: ";
	rec1.inform();
	cout << "넓이: ";
	rec1.Area();
	cout << "둘레";
	rec1.Round();

	double w2, l2;
	Rectangle rec2{};
	cout << "사각형2 가로: ";
	cin >> w2;
	cout << "사각형2 세로: ";
	cin >> l2;
	if (w2 <= 0 || l2 <= 0) cout << "Rectangle 객체를 생성할 수 없습니다.\n";
	rec2.setRec(w2, l2);
	cout << "사각형2: ";
	rec2.inform();
	cout << "넓이: ";
	rec2.Area();
	cout << "둘레";
	rec2.Round();

	Rectangle rec3{ rec1 };
	cout << "사각형1: ";
	rec3.inform();
	cout << "넓이: ";
	rec3.Area();
	cout << "둘레";
	rec3.Round();
}

Rectangle::Rectangle(double w, double l) : wid{ w }, leng{ l } {

}

Rectangle::Rectangle() {

}

Rectangle::Rectangle(const Rectangle& w, const Rectangle& l) : wid{ w.wid }, leng{ l.leng } {

}