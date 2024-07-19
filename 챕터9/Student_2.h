#pragma once

class Student {
private:
	int mid;
	int fin;
	int stuNum;
	double average;
	static int m_sum;
	static int f_sum;
public:
	Student();
	Student(int m, int f);
	void SetInfo(int _mid, int _fin, int _stuNum);
	void GetInfo();
	double GetMidAverage(int Num);
	double GetFinAverage(int Num);
};