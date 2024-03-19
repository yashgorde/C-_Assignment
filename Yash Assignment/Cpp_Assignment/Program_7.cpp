/*7.
Write a program to print the area of a rectangle by creating a class named 'Area' taking the values of
its length and breadth as parameters of its constructor and having a function named 'returnArea'
which returns the area of the rectangle. Length and breadth of the rectangle are entered through
keyboard.
*/

#include<iostream>
using namespace std;
class Area{
	public:
		int p,q,ar;
		Area(int x,int y){
			p=x;
			q=y;
		}
		int getArea(){
			ar=p*q;
			return ar;
		}
};
main()
{
	int a,b;
	cout<<"enter lengh and breath";
	cin>>a>>b;
	Area a1(a,b);
	int x;
	x=a1.getArea();
	cout<<"\nArea of tringle"<<x;
}
