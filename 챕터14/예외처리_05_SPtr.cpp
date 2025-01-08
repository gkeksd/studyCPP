#include "dynamicarray_SPtr.h"
#include "Myexception.h"

class SmartPtr {
private:
    DynamicArray* ptr;
public:
    SmartPtr(DynamicArray* p) : ptr(p) {};
    ~SmartPtr() { delete ptr; }; // 힙메모리 해제
    DynamicArray& operator*() const { return *ptr; } // 값을 리턴
    DynamicArray* operator->() const { return ptr; } // 주소를 리턴

    // 객체가 유효한지 확인하는 함수 추가
    bool isValid() const { return ptr != nullptr; }

    // 오류 처리하는 팩토리 함수
    static SmartPtr Create(int size) {
        DynamicArray* da = nullptr;
        try {
            da = new DynamicArray(size);
        }
        catch (const MyException& me) {
            // DynamicArray 생성 실패 시 처리 (예: 로그 기록, 다른 예외 던지기 등)
            std::cerr << "DynamicArray 생성 실패: " << me.errorMessage << std::endl;
            return SmartPtr(nullptr); // 실패 시 nullptr로 초기화된 SmartPtr 반환
        }
        return SmartPtr(da);
    }
};

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
