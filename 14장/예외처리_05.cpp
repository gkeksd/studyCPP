#include "dynamicarray.h"
#include "Myexception.h"

int main() {
	DynamicArray da01(5);

	try {
		da01.setAt(0, 999);
		cout << da01.getAt(0) << "\n";
		cout << da01.getAt(3) << "\n";
		cout << da01.getAt(2) << "\n";
		da01.setAt(5, 999);
		cout << da01.getAt(5) << "\n";
	}
	catch(int arr) {
		cout << "Error Code: " << arr << "\n";
	}
	catch (const char* texts) {
		cout << texts;
	}
	catch (const MyException& me) {
		cout << me.errorCode << "\n" << me.errorMessage << "\n" << &me.errorAddress << "\n";
	}

	return 0;
}