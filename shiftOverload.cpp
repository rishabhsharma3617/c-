//overload shift operator
#include<iostream>
using namespace std;
class complex
{
	int r,i;
	public:
	friend void operator>>(istream &in, complex &ob)
	{
	in>>ob.r;
	in>>ob.i;	
	}
	friend void operator<<(ostream &out, complex &ob)
	{
	out<<ob.r<<endl;
	out<<ob.i;	
	}
};
int main()
{
	complex c;
	cin>>c;
	cout<<c;
}
 //check this code
