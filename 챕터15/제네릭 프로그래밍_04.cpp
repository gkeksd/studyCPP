#include <iostream>
#include <assert.h>
using namespace std;

class Pokemon {
public:
    int hp, level;
    string name;
    Pokemon() : hp(0), level(0), name("무명의 포켓몬") {}
    Pokemon(int hp, int level, string name) : hp(hp), level(level), name(name) {};

    int operator<(const Pokemon& poke) {
        return this->hp < poke.getHP(); // 더 작은 객체 반환
    }
    friend ostream& operator <<(ostream& o, const Pokemon& p) {
        o << p.name << "\n";
        return o;
    }

    int getHP() const { return hp; }
};

template <typename T>
class Stack
{
private:
    T* ptr;
    int capacity;
    int size;
public:
    Stack(int capacity);
    ~Stack();
    void push(const T& element);
    T pop();
};

// 생성자
template<typename T>
Stack<T>::Stack(int cap)
    : capacity(cap), size(0)
{
    ptr = new T[capacity];
}
// 소멸자
template<typename T>
Stack<T>::~Stack()
{
    delete[] ptr;
}
// push 함수
template<typename T>
void Stack<T>::push(const T& element)
{
    if (size < capacity)
    {
        ptr[size] = element;
        size++;
    }
    else
    {
        cout << "스택이 꽉 차서 삽입할 수 없습니다." << endl;
        assert(false);
    }
}
// pop 함수
template<typename T>
T Stack<T>::pop()
{
    if (size > 0)
    {
        T temp = ptr[size - 1];
        size--;
        return temp;
    }
    else
    {
        cout << "스택이 비어서 삭제할 수 없습니다." << endl;
        assert(false);
    }
}

typedef Stack<int> istack;
typedef Stack<Pokemon> pokeStack;

int main()
{
    pokeStack pStack(3);
    Pokemon p1(100, 2, "피카츄");
    Pokemon p2(200, 5, "라이츄");
    Pokemon p3;
    pStack.push(p1);
    pStack.push(p2);
    pStack.push(p3);
    cout << pStack.pop() << "\n"; // 무명의 포켓몬

    istack stack(10);
    stack.push(5);
    stack.push(6);
    stack.push(7);
    stack.push(3);
    cout << stack.pop() << endl; // 3
    cout << stack.pop(); // 7
    return 0;
}