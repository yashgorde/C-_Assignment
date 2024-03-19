/*14.
Write a program to calculate the average height of all the students of a class. The number of students
and their heights are entered by the user.
*/

#include<iostream>
using namespace std;
class Student
{
	public:
		int hight,total=0;
		void set()
		{
			cout<<"enter hight";
			cin>>hight;
			total=total+hight;	
		}
		int tot()
		{
			return total;
		}
};
main()
{
	int n,h,i,avg;
	cout<<"\n enter number of student";
	cin>>n;
	Student s[n];
	Student st;
	for(i=0;i<n;i++)
	{
		s[i].set();
	}
	h=st.tot();
	avg=h/n;
	cout<<"Average hight="<<avg;
}