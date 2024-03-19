/*2.
Assign and print the roll number, phone number and address of two students having names "Sam"
and "John" respectively by creating two objects of the class 'Student'
*/

#include<iostream>
using namespace std;
class student {
	public:
	string name ,address;
	int roll_no;
	long int number;
	student(){
		cout<<"enter roll no name address phone number";
		cin>>roll_no;
		cin>>name;
		cin>>number;
		cin>>address;
	}
	void show(){
		cout<<"\nName="<<name;
		cout<<"\nroll_no="<<roll_no;
		cout<<"\nphone number";
		cout<<"address="<<address;
	
	}
};
main()
{
	student s1,s2;
	s1.show();
	s2.show();
}
