#include<iostream>
using namespace std;
int main()
{
int a,b,h;
cout<<"enter any two numbers respectively : ";
cin>>a>>b;
for(h=a<b?a:b;h>=1;h--)
if(a%h==0 && b%h==0)
break;
cout<<"HCF of these two numbers is "<<h;
}
