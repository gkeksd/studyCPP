#include <iostream>

class Vector {
private:
	int _x, _y;
public:
	Vector(int x, int y);
	void setX(int x);
	void setY(int y);
	int getX() const;
	int getY() const;
	Vector add(const Vector& v) const;
	Vector subtract(const Vector& v) const;
	~Vector();
};

int main() {
	int x1, y1, x2, y2;
	std::cout << "첫 번째 벡터를 입력하세요: ";
	std::cin >> x1 >> y1;
	Vector vec1{ x1, y1 };
	vec1.setX(x1);
	vec1.setY(y1);
	std::cout << "벡터 (" << vec1.getX() << ", " << vec1.getY() << ")가 생성되었습니다.\n";

	std::cout << "두 번째 벡터를 입력하세요: ";
	std::cin >> x2 >> y2;
	Vector vec2{ x2, y2 };
	vec2.setX(x2);
	vec2.setY(y2);
	std::cout << "벡터 (" << vec2.getX() << ", " << vec2.getY() << ")가 생성되었습니다.\n\n";

	Vector vec3{ vec1.add(vec2) };
	vec3.setX(x1 + x2);
	vec3.setY(y1 + y2);
	std::cout << "벡터 (" << vec3.getX() << ", " << vec3.getY() << ")가 생성되었습니다.\nv1 + v2 = (" << vec3.getX() << ", " << vec3.getY() << ")\n\n";

	Vector vec4{ vec1.subtract(vec2) };
	vec4.setX(x1 - x2);
	vec4.setY(y1 - y2);
	std::cout << "벡터 (" << vec4.getX() << ", " << vec4.getY() << ")가 생성되었습니다.\nv1 - v2 = (" << vec4.getX() << ", " << vec4.getY() << ")\n\n";

}

Vector::Vector(int x, int y) {}
Vector::~Vector() {
	std::cout << "벡터 (" << _x << ", " << _y << ")가 소멸되었습니다.\n";
}

void Vector::setX(int x) {
	_x = x;
}

void Vector::setY(int y) {
	_y = y;
}

int Vector::getX() const {
	return _x;
}

int Vector::getY() const {
	return _y;
}

Vector Vector::add(const Vector& v) const {
	return Vector(_x + v._x, _y + v._y);
}

Vector Vector::subtract(const Vector& v) const {
	return Vector(_x - v._x, _y - v._y);
}