#include "dynamicarray_SPtr.h"
#include "Myexception.h"
#include "smartptr.h"

int main() {
    // SmartPtr을 사용하여 DynamicArray 객체를 관리
    SmartPtr da01 = SmartPtr::Create(5);

    if (da01.isValid()) { // 객체 생성이 성공했는지 확인
        try {
            da01->setAt(0, 999);
            cout << da01->getAt(0) << "\n";
            cout << da01->getAt(3) << "\n";
            cout << da01->getAt(2) << "\n";
            da01->setAt(5, 999); // 이 부분은 예외를 발생시킬 가능성이 있음
            cout << da01->getAt(5) << "\n";
        }
        catch (int arr) {
            cout << "Error Code: " << arr << "\n";
        }
        catch (const char* texts) {
            cout << texts;
        }
        catch (const MyException& me) {
            cout << me.errorMessage
                << "Error Code: "
                << me.errorCode << "\n"
                << &me.errorAddress << "\n";
        }
    }
    else {
        std::cout << "객체 생성 실패\n";
    }

    return 0;
}
