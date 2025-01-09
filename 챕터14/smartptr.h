#pragma once
#include "dynamicarray.h"
#include "Myexception.h"

class SmartPtr {
private:
    int* ptr;
public:
    SmartPtr(int* p) : ptr(p) {};
    virtual ~SmartPtr() { cout << "���޸� ����\n";  delete ptr; }; // ���޸� ����
    int& operator*() const { return *ptr; } // ���� ����
    int* operator->() const { return ptr; } // �ּҸ� ����
    int& operator[](unsigned int i) { return ptr[i]; }

    // ��ü�� ��ȿ���� Ȯ���ϴ� �Լ� �߰�
    //bool isValid() const { return ptr != nullptr; }

    // ���� ó���ϴ� ���丮 �Լ�
    //static SmartPtr Create(int size) {
    //    DynamicArray* da = nullptr;
    //    try {
    //        da = new DynamicArray(size);
    //    }
    //    catch (const MyException& me) {
    //        // DynamicArray ���� ���� �� ó�� (��: �α� ���, �ٸ� ���� ������ ��)
    //        std::cerr << "DynamicArray ���� ����: " << me.errorMessage << std::endl;
    //        return SmartPtr(nullptr); // ���� �� nullptr�� �ʱ�ȭ�� SmartPtr ��ȯ
    //    }
    //    return SmartPtr(da);
    //}
};
