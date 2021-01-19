#include <iostream>
using namespace std;

class Point{
private:
	int x, y;
	double z;
public: 
	Point(int x1=0, int y1=0, double z1=0.0) : x(x1), y(y1),z(z1) {}
	friend ostream& operator <<(ostream&, const Point&);
	friend istream& operator>>(istream&,Point& pt);//const 로 매개변수를 설정하면 안됨
};

ostream& operator<<(ostream& os, const Point& pt)
{
	os<< '[' << pt.x << ", " << pt.y <<","<< pt.z<<"]" << endl;
	return os;
}
istream& operator>>(istream& is, Point& pt) 
{
	is >> pt.x >> pt.y >> pt.z;
	return is;
}
int main(void)
{
	cout << "좌표를 입력하세요" << endl;
	Point pt2;
	Point pt1(64, 20, 59.12);
	cin >> pt2;
	cout << pt2;
	cout << pt1;	//== operator<<(cout,pos)
	
}