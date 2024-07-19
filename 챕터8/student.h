#pragma once
#include <string>

class Student {
private:
	std::string _name;
	int _score;
	static int number; //ÇÐ»ý¼ö
public:
	Student();
	Student(std::string name, int score);
	~Student();
	void numberOfStudent();
};