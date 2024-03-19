/*3.
Write a program to print the area and perimeter of a triangle having sides of 3, 4 and 5 units by
creating a class named 'Triangle' with a function to print the area and perimeter.
*/

#include<iostream>
#include<cmath>
using namespace std;
class tringle{
	public:
	   int a,b,c;
	   float area,perimeter,sp;
	   tringle(){
	      a=3;
	      b=4;
	      c=5;
       }
	   void ar(){
	   	sp=(a+b+c)/2;
	   	area=sqrt(sp*(sp-a)*(sp-b)*(sp-c));
	   	cout<<"\nArea of tringle"<<area;
	   }
	   void pr(){
	   	perimeter=a+b+c;
	   	cout<<"\n perimeter of tringle"<<perimeter;
	   	
	   }
	   
};
main()
{
	tringle t1;
	t1.ar();
	t1.pr();
}
