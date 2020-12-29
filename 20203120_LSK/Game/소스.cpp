#include <iostream>
#include <string>
#define MAXLV 100
using namespace std;

class Game
{
protected:
	int Level=0,LVEXP[MAXLV], HP, Power, damage, shield;
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
private :
	bool gender;
	int money, EXP;

public:
	int reward;
	void GetEXP(int reward)
	{
		EXP += reward;
		if (EXP >= LVEXP[Game::Level])
		{
			Game:: Level++;
			cout << "Level up!!!" << Game::Level << "LV" << endl;
		}
	}
	int Attack()//몬스터 종류
	{
		/*몬스터 체력 -= Game::damage
		if(체력<0)
			몬스터가 죽었습니다.
			GetEXP(몬스터 경험치) */
	}
};