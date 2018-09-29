//new and delete
//dynamic constructor
// int *p=new int;
//int *p=new int[10];//means array
//int *p=new int(10);//means value not array
//delete p
//delete [] p//deacllocating memory
using namespace std;
#include<iostream>
class dynamic
{
	int *p;
	public:
		//default
		dynamic()
		{
			p=new int;
			*p=5;
			//or p=new int(5)
		}
		//parametrised
		dynamic(int x)
		{	
			p=new int;
			*p=x;
		}
		//copy
		dynamic(dynamic &ob)
		{
			p=ob.p;		
		}
		int value()
		{
		return *p;
		}
		//in case of pointer we can delete the value
		~dynamic()
		{
			delete p;
		}
};
int main()
{
	dynamic ob;
	dynamic ob1(5);
	dynamic ob2(ob1);
	cout<<ob.value();
	cout<<ob1.value();
	cout<<ob2.value();
	return 0;
}
