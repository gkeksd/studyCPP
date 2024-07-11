#include <iostream>
using namespace std;

class ShadowPartner; // 전방 선언

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
        cout << "섀도우파트너가 소멸되었습니다.\n";
    }
    void printShadowPartner() {
        cout << "섀도우파트너의 정보입니다. 공격력: " << n_atk << ", 체력: " << n_hp << ", 마나: " << n_mp << "\n";
    }
};

ShadowPartner NightLord::createShadowPartner() { //이 함수 실행의 결과를 ShadowPartner 클래스의 객체로
    double n_atk = atk * 0.7;
    double n_hp = hp * 0.7;
    double n_mp = mp * 0.7;
    cout << "섀도우파트너가 생성되었습니다.\n";
    return ShadowPartner(n_atk, n_hp, n_mp);
}

int main() {
    int atk, hp, mp;
    cout << "나이트로드의 공격력을 입력하세요: ";
    cin >> atk;
    cout << "나이트로드의 체력을 입력하세요: ";
    cin >> hp;
    cout << "나이트로드의 마나를 입력하세요: ";
    cin >> mp;
    cout << "\n";

    NightLord nl(atk, hp, mp);
    ShadowPartner sp = nl.createShadowPartner(); //createShadowPartner의 결과로 반환된 ShadowPartner 객체의 값들을 sp 객체에 할당. 
    // 이렇게 하지 않으면 createShadowPartner 메서드에서 직접 ShadowPartner 객체를 호출해 출력하도록 해야 함
    sp.printShadowPartner();

    return 0;
}