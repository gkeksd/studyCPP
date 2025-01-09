#include <iostream>
#include <assert.h>
using namespace std;

class Pokemon {
public:
    int hp, level;
    string name;
    Pokemon() : hp(0), level(0), name("������ ���ϸ�") {}
    Pokemon(int hp, int level, string name) : hp(hp), level(level), name(name) {};

    int operator<(const Pokemon& poke) {
        return this->hp < poke.getHP(); // �� ���� ��ü ��ȯ
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

// ������
template<typename T>
Stack<T>::Stack(int cap)
    : capacity(cap), size(0)
{
    ptr = new T[capacity];
}
// �Ҹ���
template<typename T>
Stack<T>::~Stack()
{
    delete[] ptr;
}
// push �Լ�
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
        cout << "������ �� ���� ������ �� �����ϴ�." << endl;
        assert(false);
    }
}
// pop �Լ�
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
        cout << "������ �� ������ �� �����ϴ�." << endl;
        assert(false);
    }
}

typedef Stack<int> istack;
typedef Stack<Pokemon> pokeStack;

int main()
{
    pokeStack pStack(3);
    Pokemon p1(100, 2, "��ī��");
    Pokemon p2(200, 5, "������");
    Pokemon p3;
    pStack.push(p1);
    pStack.push(p2);
    pStack.push(p3);
    cout << pStack.pop() << "\n"; // ������ ���ϸ�

    istack stack(10);
    stack.push(5);
    stack.push(6);
    stack.push(7);
    stack.push(3);
    cout << stack.pop() << endl; // 3
    cout << stack.pop(); // 7
    return 0;
}