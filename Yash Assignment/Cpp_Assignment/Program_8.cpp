/*8.
Print the average of three numbers entered by the user by creating a class named 'Average' having a
function to calculate and print the average without creating any object of the Average class.
*/

#include<iostream>
using namespace std;
class Average
{
	public:
		int a,b,c;
		float avg;
		void cal()
		{
			avg=a+b+c/3;
		}
		void print()
		{
			cout<<"average="<<avg;
		}
};
class B:public Average
{
	
};
main()
{
     B b1;
     b1.cal();
     b1.print();
}
