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
	std::cout << "ù ��° ���͸� �Է��ϼ���: ";
	std::cin >> x1 >> y1;
	Vector vec1{ x1, y1 };
	vec1.setX(x1);
	vec1.setY(y1);
	std::cout << "���� (" << vec1.getX() << ", " << vec1.getY() << ")�� �����Ǿ����ϴ�.\n";

	std::cout << "�� ��° ���͸� �Է��ϼ���: ";
	std::cin >> x2 >> y2;
	Vector vec2{ x2, y2 };
	vec2.setX(x2);
	vec2.setY(y2);
	std::cout << "���� (" << vec2.getX() << ", " << vec2.getY() << ")�� �����Ǿ����ϴ�.\n\n";

	Vector vec3{ vec1.add(vec2) };
	vec3.setX(x1 + x2);
	vec3.setY(y1 + y2);
	std::cout << "���� (" << vec3.getX() << ", " << vec3.getY() << ")�� �����Ǿ����ϴ�.\nv1 + v2 = (" << vec3.getX() << ", " << vec3.getY() << ")\n\n";

	Vector vec4{ vec1.subtract(vec2) };
	vec4.setX(x1 - x2);
	vec4.setY(y1 - y2);
	std::cout << "���� (" << vec4.getX() << ", " << vec4.getY() << ")�� �����Ǿ����ϴ�.\nv1 - v2 = (" << vec4.getX() << ", " << vec4.getY() << ")\n\n";

}

Vector::Vector(int x, int y) {}
Vector::~Vector() {
	std::cout << "���� (" << _x << ", " << _y << ")�� �Ҹ�Ǿ����ϴ�.\n";
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