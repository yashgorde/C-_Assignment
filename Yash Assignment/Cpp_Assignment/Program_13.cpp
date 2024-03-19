/*13.
Write a program to print the roll number and average marks of 8 students in three subjects (each
out of 100). The marks are entered by the user and the roll numbers are automatically assigned.
*/

#include<iostream>
using namespace std;
class Student
{
	public:
		int avgmark, rollno=0;
	void set()
	{
		cout<<"\nenter average marks";
		cin>>avgmark;
		rollno++;
	}
	void get()
	{
		int rollno;
		cout<<"\nroll_no="<<rollno<<"      Average Marks="<<avgmark;
	}
};
main(
{
    Student s[8];
    int i;
    for(i=0;i<8;i++)
    {
	    s[i].set();
    }
    for(i=0;i<8;i++)
    {
	    s[i].get();
    }
}
