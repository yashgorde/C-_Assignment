/*
9.
Print the sum, difference and product of two complex numbers by creating a class named 'Complex'
with separate functions for each operation whose real and imaginary parts are entered by the user
*/

#include<iostream>
using namespace std;
class Complex
{
	public:
	int a,b;
	char c1,c2;
	void add()
	{
	  cout<<"\nEnter real part";
	  cin>>a>>b;
	  cout<<"\nenter imaginary part";
	  cin>>c1>>c2;
	  void diff()
	{
	  cout<<"\n"<<a<<c1<<"+"<<b<<c2<<"="<<a-b<<c1-c2;
    }
      void pro()
	  {
      	cout<<"\n"<<a<<c1<<"+"<<b<<c2<<"="<<a*b<<c1*c2;
	  }
	}
};
main()
{
	Complex c1;
	c1.add();
	c1.diff();
	c1.pro();
}