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
    virtual ~SmartPtr() { cout << "힙메모리 해제\n";  delete ptr; }; // 힙메모리 해제
    int& operator*() const { return *ptr; } // 값을 리턴
    int* operator->() const { return ptr; } // 주소를 리턴
    int& operator[](unsigned int i) { return ptr[i]; }

    // 객체가 유효한지 확인하는 함수 추가
    bool isValid() const { return ptr != nullptr; }

    // 오류 처리하는 팩토리 함수
    static SmartPtr Create(int size) {
        int* rawArray = nullptr; // 실제로 사용할 배열 포인터
        try {
            DynamicArray_SPtr da(size); // SmartPtr에서 관리할 객체 생성
            rawArray = new int[size]; // rawArray 초기화
            for (int i = 0; i < size; ++i) {
                rawArray[i] = da.getAt(i); // 초기화된 데이터를 복사
            }
        }
        catch (const MyException& me) {
            // DynamicArray 생성 실패 시 처리 (예: 로그 기록, 다른 예외 던지기 등)
            std::cerr << "DynamicArray_SPtr 생성 실패: " << me.errorMessage << std::endl;
            return SmartPtr(nullptr); // 실패 시 nullptr로 초기화된 SmartPtr 반환
        }
        return SmartPtr(rawArray); // 성공 시 배열 포인터로 초기화
    }
};
