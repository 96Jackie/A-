#ifndef __CUS_
#define __CUS_

class Customer
{
private:
	int MyHeight;
	int MyWeight;
	int Pay, Num;
	bool MyTube, Free;
	public:
	void Basic(int height,int weight); 
	void Rent(bool tube);
	void Ticket(bool free,int num);
	void CustomerState();	
	void Money(int money);
};
/*Customer 클래스 private 로 선언된 변수를 메인 함수에서 사용해야될 때 어떻게 꺼내서 사용하는지.. 
ex) 놀이기구 횟수가 기록된 Num 값을 메인 함수에서 호출해서 놀이기구 클래스에서 사용해야될 때 
ex) 놀이기구 클래스에서 키가 기준을 넘는지에 대해 판정할 때 Customer 클래스 private 변수인
height 변수를 어떻게 꺼내는 */
#endif
