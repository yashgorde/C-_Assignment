/*11.
Write a program that would print the information (name, year of joining, salary, address) of three
employees by creating a class named 'Employee'. The output should be as follows:
Name Year of joining Address
Robert 1994 64C- WallsStreat
Sam 2000 68D- WallsStreat
John 1999 26B- WallsStreat
*/

#include<iostream>
using namespace std;
class Employee
{
	public:
		string name,address;
		int year;
		
		void set()
		{
			cout<<"\n enter name year of joining and Address";
			cin>>name>>year>>address;
		}
		void get()
		{
			cout<<"\n"<<name<<"       "<<year<<"        "<<"         "<<address;
		}
};
main()
{
	Employee e[3];
	int i;
	for(i=0;i<3;i++)
	{
		e[i].set();
	}
	cout<<"\n Name   year of joining      address";
	for(i=0;i<3;i++)
	{
		e[i].get();
	}
}