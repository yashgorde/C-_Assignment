/*5.
Write a program to print the area of two rectangles having sides (4,5) and (5,8) respectively by
creating a class named 'Rectangle' with a function named 'Area' which returns the area. Length and
breadth are passed as parameters to its constructor.
*/
#include<iostream>
using namespace std;
class rectangle{
	public:
		int a,b,ar;
	int area(int x,int y){
		a=x;
		b=y;
		ar=a*b;
		return ar;
		
	}
};
main(){
	rectangle t1,t2;
	int a1,a2;
   a1=t1.area(4,5);
   a2=t2.area(5,8);
   cout<<"\narea of first rectangle="<<a1;
   cout<<"\narea of second rectangle"<<a2;
}
