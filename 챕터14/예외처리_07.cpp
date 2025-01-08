/**************************************************************
 * invalid_argument ��ü�� ����ؼ� 0���� ���� ���           *
 * ���ܸ� �߻���Ű�� ó���ϴ� ���α׷�                        *
 **************************************************************/
#include <stdexcept> // ǥ�� ���� Ŭ���� include
#include <iostream>
using namespace std;

// �Լ� ����
int quotient(int first, int second) {
    if (second == 0) throw invalid_argument("����:0���� ���� �� �����ϴ�.");

    return first / second;
}

int main() {
    int num1, num2, result;
    for (int i = 0; i < 3; i++)
    {
        cout << "������ �Է��ϼ���: ";
        cin >> num1;
        cout << "�� �ٸ� ������ �Է��ϼ���: ";
        cin >> num2;
        // try-catch ���
        try
        {
            cout << "��� = " << quotient(num1, num2);
            cout << endl;
        }
        catch (invalid_argument ex)
        {
            cout << ex.what() << endl; // what()�� quotient �Լ����� �Ѱܹ��� invalid_argument ���ڿ��� �������
        }
    }
    return 0;
}