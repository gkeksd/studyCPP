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
	cout << "�簢��1 ����: ";
	cin >> w;
	cout << "�簢��1 ����: ";
	cin >> l;
	if (w <= 0 || l <= 0) cout << "Rectangle ��ü�� ������ �� �����ϴ�.\n";
	Rectangle rec1{ w, l };
	cout << "�簢��1: ";
	rec1.inform();
	cout << "����: ";
	rec1.Area();
	cout << "�ѷ�";
	rec1.Round();

	double w2, l2;
	Rectangle rec2{};
	cout << "�簢��2 ����: ";
	cin >> w2;
	cout << "�簢��2 ����: ";
	cin >> l2;
	if (w2 <= 0 || l2 <= 0) cout << "Rectangle ��ü�� ������ �� �����ϴ�.\n";
	rec2.setRec(w2, l2);
	cout << "�簢��2: ";
	rec2.inform();
	cout << "����: ";
	rec2.Area();
	cout << "�ѷ�";
	rec2.Round();

	Rectangle rec3{ rec1 };
	cout << "�簢��1: ";
	rec3.inform();
	cout << "����: ";
	rec3.Area();
	cout << "�ѷ�";
	rec3.Round();
}

Rectangle::Rectangle(double w, double l) : wid{ w }, leng{ l } {

}

Rectangle::Rectangle() {

}

Rectangle::Rectangle(const Rectangle& w, const Rectangle& l) : wid{ w.wid }, leng{ l.leng } {

}