// 템플릿 클래스
//template <typename T>
//class AutoArray {
//private:
//	T* _ptr;
//public:
//	AutoArray(T* ptr) { _ptr = ptr; }
//	~AutoArray() { delete[] _ptr; }
//	T& operator[] (int index) { return _ptr[index]; }
//};
//int main() {
//	AutoArray<int> arri(new int[100]);
//	arri[0] = 100;
//	AutoArray<float> arrf(new float[100]);
//	arrf[99] = 2.71f;
//	return 0;
//}

// 템플릿 함수
//#include <iostream>
//template<typename T>
//T max(T a, T b) {
//	return (a > b) ? a : b;
//}
//void main() {
//	int i1 = 7, i2 = 4;
//	int i3 = max(i1, i2);
//	std::cout << i3 << "\n";
//
//	double d1 = 3.14, d2 = 2.71;
//	double d3 = max(d1, d2);
//	std::cout << d3 << "\n";
//}