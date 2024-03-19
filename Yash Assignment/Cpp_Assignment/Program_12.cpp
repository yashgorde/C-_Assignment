/*12.
Write a program to print the name, salary and date of joining of 10 employees in a company. Use
array of objects.
*/

#include<iostream>
using namespace std;
class Employee
{
	public:
		string name;
		int year,salary;
		
		void set()
		{
			cout<<"\n enter name year of joining and salary";
			cin>>name>>year>>salary;
		}
		void get()
		{
			cout<<"\n"<<name<<"       "<<year<<"        "<<"         "<<salary;
		}
};
main()
{
	Employee e[10];
	int i;
	for(i=0;i<10;i++)
	{
		e[i].set();
	}
	cout<<"\n Name   year of joining      salary";
	for(i=0;i<10;i++)
	{
		e[i].get();
	}
}
