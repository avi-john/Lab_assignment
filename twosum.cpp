
#include <iostream>
using namespace std;
void checking(int a[],int n);
int main()
{
 
int n;
 
cout<<"Enter the number of elements :";
 
cin>>n;
 
int a[n];
 
int i;
 
for(i=0;i<n;i++)
 
{
 
cout<<"\nEnter the elements in the array :";
 
cin>>a[i];
 
}
 
checking(a,n);
}
void checking(int a[],int n)
{
 
int target;
 
int count=0;
 
cout<<"\nEnter the your target :";
 
cin>>target;
 
int i,j;
 
for(i=0;i<n;i++)
 
{
 
for(j=i;j<n;j++)
 
{
 
if(a[i]==a[j])
 
{
 
continue;
 
}
 
else if(a[i]+a[j]==target)
 
{
 
count++;
 
if(a[i]>a[j])
 
{
 
cout<<"\nThe elements are "<<a[j]<<" and "<<a[i];
 
}
 
else
 
{
 
cout<<"\nThe elements are "<<a[i]<<" and "<<a[j];
 
}
 
}
 
}
 
}
 
if(count==0)
 
{
 
cout<<"\nThe number are not found ";
}
