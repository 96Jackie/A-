﻿#include <iostream>
#include <cstring>

using namespace std;

#include <string>
#define MAXLV 100

class Game
{
public:
	int Level = 0, LVEXP[MAXLV], HP, Power, damage, shield;
	std::string name;
public:

	void EXPset()
	{
		for (int i = 0; i < MAXLV; i++)
		{
			LVEXP[i] = i * 10;
		}
	}
};
class Character : public Game
{
public:
	bool gender;
	int money, EXP;

public:
	int reward;
	int GetEXP(int reward)
	{
		EXP += reward;
		if (EXP >= LVEXP[Game::Level])
		{
			Game::Level++;
			cout << "Level up!!!" << Game::Level << "LV" << endl;
			return EXP;
		}
	}

};
class Wizard : public Character
{
public:
	int Power;
public:
	Wizard(int Power) : Power(Power) {}
	void WizardSkill()
	{
		/*cout << "마법사가 영창합니다. 마나가 모여듭니다." << endl << "ѮѭѮѯѰѲѶѨѥѣѐљ" << endl;
		cout << (몬스터이름), "에게", (공격력), "의 피해를 입혔습니다." << endl;
		*/


	}
private:
	int mana;
};

class Warriors : public Character
{
public:
	void WarriorsSkill(void)
	{
		/*전사의 투기 사용하는 함수;
		cout << "전사가 눈을 감습니다. 투기를 진정시킵니다." << endl << "심검 초식 전개." << endl;
		cout << (몬스터이름), "에게", (공격력), "의 피해를 입혔습니다." << endl;
		*/
	}
private:
	int stamina;
};




//code by SeoeunBae

class Monster : public Game {
public:
	double def;
	double damage;
	int rewards;
	int GiveEXP;
public:
	Monster(double def, int rewards, int GiveEXP) : def(def), rewards(rewards), GiveEXP(GiveEXP) {
		cout << "몬스터가 나타났습니다." << endl;
	}
	int underattack(Character& character) {     //공격반복+돈받기
		cout << "공격을 시작합니다." << endl;
		for (; Monster::HP > 0;) {
			damage = (character.Power) * def;
			Monster::HP = Monster::HP - damage;
			cout << "몬스터에게" << damage << "의 피해를 입혔습니다." << endl;
		}
		cout << "몬스터를 처치했습니다" << endl;
		character.money += rewards;
		cout << rewards << "\ 을 얻었습니다." << endl;
		return character.GetEXP(GiveEXP);
	}

};



class Boss : public Monster {
private:
	int count;
public:
	Boss(double def, int rewards, int GiveEXP) : Monster(def, rewards, GiveEXP) {
		cout << "보스 몬스터가 나타났습니다." << endl;
	}
	int underattack(Character& character) {
		cout << "보스 몬스터 공격을 시작합니다." << endl;                   //공격반복+돈받기
		for (count = 0; Boss::HP > 0; count++) {
			if (count % 10 == 0) {
				damage = 0;
				cout << "몬스터에게" << damage << "의 피해를 입혔습니다." << endl;
			}
			else {
				damage = (character.Power) * def;
				Boss::HP = Boss::HP - damage;
				cout << "몬스터에게" << damage << "의 피해를 입혔습니다." << endl;
			}
		}
		cout << "몬스터를 처치했습니다" << endl;
		character.money += rewards;
		cout << rewards << "\ 을 얻었습니다." << endl;
		return character.GetEXP(GiveEXP);
	}
};




int main(void) {
	Wizard A(100);
	Monster A1(0.8, 100, 10);
	Boss B1(2.5, 1000, 50);
	A1.underattack(A);
	B1.underattack(A);
	return 0;

}