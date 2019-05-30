#include "stdafx.h"
#include"iostream"
using namespace std;
class CTest
{
	int  inch;
	int  feet;
	int centimeter;
public:
	CTest();
	CTest(int c);
	void setLenth(int c);
	void display();

};
CTest::CTest()
{

}
CTest::CTest(int c)
{
	centimeter = c;
}
void CTest::setLenth(int c)
{
	centimeter = c;
	feet = centimeter / 30.48;
	inch = 12 * (centimeter / 30.48 - feet);
}
void CTest::display()
{
	cout << "feet=" << feet<< " inch=" << inch << endl;
}
int main()
{
	CTest od;
	od.setLenth(170);
	od.display();
    return 0;
}

