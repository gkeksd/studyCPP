#include "dynamicarray_SPtr.h"
#include "Myexception.h"

class SmartPtr {
private:
    DynamicArray* ptr;
public:
    SmartPtr(DynamicArray* p) : ptr(p) {};
    ~SmartPtr() { delete ptr; }; // ���޸� ����
    DynamicArray& operator*() const { return *ptr; } // ���� ����
    DynamicArray* operator->() const { return ptr; } // �ּҸ� ����

    // ��ü�� ��ȿ���� Ȯ���ϴ� �Լ� �߰�
    bool isValid() const { return ptr != nullptr; }

    // ���� ó���ϴ� ���丮 �Լ�
    static SmartPtr Create(int size) {
        DynamicArray* da = nullptr;
        try {
            da = new DynamicArray(size);
        }
        catch (const MyException& me) {
            // DynamicArray ���� ���� �� ó�� (��: �α� ���, �ٸ� ���� ������ ��)
            std::cerr << "DynamicArray ���� ����: " << me.errorMessage << std::endl;
            return SmartPtr(nullptr); // ���� �� nullptr�� �ʱ�ȭ�� SmartPtr ��ȯ
        }
        return SmartPtr(da);
    }
};

int main() {
    // SmartPtr�� ����Ͽ� DynamicArray ��ü�� ����
    SmartPtr da01 = SmartPtr::Create(5);

    if (da01.isValid()) { // ��ü ������ �����ߴ��� Ȯ��
        try {
            da01->setAt(0, 999);
            cout << da01->getAt(0) << "\n";
            cout << da01->getAt(3) << "\n";
            cout << da01->getAt(2) << "\n";
            da01->setAt(5, 999); // �� �κ��� ���ܸ� �߻���ų ���ɼ��� ����
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
        std::cout << "��ü ���� ����\n";
    }

    return 0;
}
