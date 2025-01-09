#include "Ctemp.cpp"

int main() {
	Ctemp<int> Fun1(23);
	Ctemp<double> Fun2(12.7);
	Ctemp<char> Fun3('A');
	Ctemp<string> Fun4("Hello");

	cout << "Fun1: " << Fun1.get() << "\n";
	cout << "Fun2: " << Fun2.get() << "\n";
	cout << "Fun3: " << Fun3.get() << "\n";
	cout << "Fun4: " << Fun4.get() << "\n";

	Fun1.set(47);
	Fun3.set('B');

	cout << "set 호출 후의 Fun1: " << Fun1.get() << "\n";
	cout << "set 호출 후의 Fun3: " << Fun3.get() << "\n";

	return 0;
}