#include <iostream>
#include <string>
using namespace std;
void anagram(string name1,string name2);
int main()
{
   string name1;
   string name2;
   cout<<"Enter the first string :";
   getline(cin,name1);
   cout<<"\nEnter the second string :";
   getline(cin,name2);
   anagram(name1,name2);
}
void anagram(string name1,string name2)
{
    int i,sum1=0,sum2=0;
    for(i=0;i<name1.length();i++)
    {
        sum1=sum1+int(name1[i]);
    }
     for(i=0;i<name2.length();i++)
    {
        sum2=sum2+int(name2[i]);
    }
    if(sum1==sum2)
    {
        cout<<"\nThe strings you have entered is a anagram ";
    }
    else
    {
        cout<<"\nThe strings you have entered is not an anagram";
    }
}
