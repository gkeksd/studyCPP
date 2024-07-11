#include <iostream>
using namespace std;

class ShadowPartner; // ���� ����

class NightLord {
private:
    int atk, hp, mp;
public:
    NightLord() {}
    NightLord(int at, int h, int m) : atk{ at }, hp{ h }, mp{ m } {}
    ShadowPartner createShadowPartner();
    /*int getAtk() const { return atk; }
    int getHp() const { return hp; }
    int getMp() const { return mp; }*/
};

class ShadowPartner {
private:
    double n_atk, n_hp, n_mp;
public:
    ShadowPartner(double at, double h, double m) : n_atk{ at }, n_hp{ h }, n_mp{ m } {}
    ~ShadowPartner() {
        cout << "��������Ʈ�ʰ� �Ҹ�Ǿ����ϴ�.\n";
    }
    void printShadowPartner() {
        cout << "��������Ʈ���� �����Դϴ�. ���ݷ�: " << n_atk << ", ü��: " << n_hp << ", ����: " << n_mp << "\n";
    }
};

ShadowPartner NightLord::createShadowPartner() { //�� �Լ� ������ ����� ShadowPartner Ŭ������ ��ü��
    double n_atk = atk * 0.7;
    double n_hp = hp * 0.7;
    double n_mp = mp * 0.7;
    cout << "��������Ʈ�ʰ� �����Ǿ����ϴ�.\n";
    return ShadowPartner(n_atk, n_hp, n_mp);
}

int main() {
    int atk, hp, mp;
    cout << "����Ʈ�ε��� ���ݷ��� �Է��ϼ���: ";
    cin >> atk;
    cout << "����Ʈ�ε��� ü���� �Է��ϼ���: ";
    cin >> hp;
    cout << "����Ʈ�ε��� ������ �Է��ϼ���: ";
    cin >> mp;
    cout << "\n";

    NightLord nl(atk, hp, mp);
    ShadowPartner sp = nl.createShadowPartner(); //createShadowPartner�� ����� ��ȯ�� ShadowPartner ��ü�� ������ sp ��ü�� �Ҵ�. 
    // �̷��� ���� ������ createShadowPartner �޼��忡�� ���� ShadowPartner ��ü�� ȣ���� ����ϵ��� �ؾ� ��
    sp.printShadowPartner();

    return 0;
}