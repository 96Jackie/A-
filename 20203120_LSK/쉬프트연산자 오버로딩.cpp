#include <iostream>
using namespace std;

class Point{
private:
	int x, y;
	double z;
public: 
	Point(int x1=0, int y1=0, double z1=0.0) : x(x1), y(y1),z(z1) {}
	friend ostream& operator <<(ostream&, const Point&);
	friend istream& operator>>(istream&,Point& pt);//const �� �Ű������� �����ϸ� �ȵ�
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
	cout << "��ǥ�� �Է��ϼ���" << endl;
	Point pt2;
	Point pt1(64, 20, 59.12);
	cin >> pt2;
	cout << pt2;
	cout << pt1;	//== operator<<(cout,pos)
	
}