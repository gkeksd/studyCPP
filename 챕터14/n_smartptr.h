#pragma once
//#include "dynamicarray.h"
#include "dynamicarray_SPtr.h"
#include "Myexception.h"
#include "smartptr.h"

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
    bool isValid() const { return ptr != nullptr; }

    // ���� ó���ϴ� ���丮 �Լ�
    static SmartPtr Create(int size) {
        int* rawArray = nullptr; // ������ ����� �迭 ������
        try {
            DynamicArray_SPtr da(size); // SmartPtr���� ������ ��ü ����
            rawArray = new int[size]; // rawArray �ʱ�ȭ
            for (int i = 0; i < size; ++i) {
                rawArray[i] = da.getAt(i); // �ʱ�ȭ�� �����͸� ����
            }
        }
        catch (const MyException& me) {
            // DynamicArray ���� ���� �� ó�� (��: �α� ���, �ٸ� ���� ������ ��)
            std::cerr << "DynamicArray_SPtr ���� ����: " << me.errorMessage << std::endl;
            return SmartPtr(nullptr); // ���� �� nullptr�� �ʱ�ȭ�� SmartPtr ��ȯ
        }
        return SmartPtr(rawArray); // ���� �� �迭 �����ͷ� �ʱ�ȭ
    }
};
