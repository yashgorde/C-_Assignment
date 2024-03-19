/*10.
Write a program to print the volume of a box by creating a class named 'Volume' with an
initialization list to initialize its length, breadth and height. (just to make you familiar with
initialization lists)
*/

#include<iostream>
using namespace std;
class Volume
{
	public:
	int length,breadth,height;
	float area;
	void Area()
	{
		length=3;
		breadth=6;
		height=4;
		area=length*breadth*height;
	}
	void print()
	{
	cout<<"Area="<<area;
	}
	
};
main()
{
	Volume v;
	v.Area();
	v.print();
}
