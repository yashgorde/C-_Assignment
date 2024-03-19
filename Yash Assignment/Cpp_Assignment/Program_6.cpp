/*6.
Write a program to print the area of a rectangle by creating a class named 'Area' having two
functions. First function named as 'setDim' takes the length and breadth of the rectangle as
parameters and the second function named as 'getArea' returns the area of the rectangle. Length and
breadth of the rectangle are entered through keyboard.
*/

#include<iostream>
using namespce std;
class Area{
	public:
		int a,b,ar;
		void setDim(){
			cout<<"enter lengh and breath";
			cin>>a>>b;
		}
		int getArea(){
			ar=a*b;
			return ar;
		}
};
main(){
	Area a1;
	int x;
	a1.setDim();
	x=a1.getArea();
	cout<<"\nArea of tringle"<<x;
}
