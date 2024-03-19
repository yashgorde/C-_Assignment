/*1.
Create a class named 'Student' with a string variable 'name' and an integer variable 'roll_no'. Assign
the value of roll_no as '2' and that of name as "John" by creating an object of the class Student.
*/

#include<iostream>
using namespace std;
class student {
	public:
	string name;
	int roll_no;
	student(){
		name="john";
		roll_no=2;
	}
	void show(){
		cout<<"Name="<<name;
		cout<<"\nroll_no="<<roll_no;
	}
};
main()
{
	student s1;
	s1.show();
}

