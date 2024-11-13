
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
int num,temp,c=0,rem;
 cout<<"Enter a number";
 cin>>num;
 temp=num;
int sum;
int temp1=temp;
/*cout<<"\n";
 cout<<"temp"<<temp;*/
while(num>0)
 {
 num=num/10;
 c++;
 }
int n=c;
while(c>0)
 {
 rem=temp%10;
 sum=sum+pow(rem,n);
 temp=temp/10;
 c--;
 }
/* cout<<"\nThe value of n is "<<n;
 cout<<"\nsum;"<<sum;
 cout<<"\n";
 cout<<"temp1 "<<temp1;*/
if(sum==temp1)
 {
 cout<<"\nThe number is a armstrong number";
 }
else
 {
 cout<<"\nThe number is not a armstrong number";
 }
}

