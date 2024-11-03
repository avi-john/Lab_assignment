#include <iostream>
#include <cmath>
using namespace std;
int main()
{
 
int a,b,c,x1,x2;
 
cout<<"the value of a ";
 
cin>>a;
 
cout<<"the value of b ";
 
cin>>b;
 
cout<<"the value of c ";
 
cin>>c;
 
x1=(-b+sqrt(b*b-4*a*c))/2*a;
 
x2=(-b-sqrt(b*b-4*a*c))/2*a;
 
cout<<"the value of first root is "<<x1;
 
cout<<"\n the value of second root is "<<x2;

}
