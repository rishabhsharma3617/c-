//pointers function
using namespace std;
#include<iostream>
int add(int x,int y)
{return x+y;}
int sub(int x,int y)
{return x-y;}
int mul(int x,int y)
{return x*y;}
int main()
{
int (*p[3])(int ,int);
p[0]=add;
p[1]=sub;
p[2]=mul;
for(int i=0;i<3;i++)
cout<<p[i](5,6)<<endl;
}
