#include <iostream>
#include <string>
using namespace std;
void reverse(string name);
void check_palindrome(string name,string &temp_name);
int main()
{
    string name,temp_name;
    cout<<"Enter your word :";
    getline(cin,name);
    reverse(name);
    //check_palindrome(name,temp_name);
}
void reverse(string name)
{
    int i;
    string temp_name;
    for(i=name.length()-1;i>=0;i--)
    {
        temp_name=temp_name+name[i];
    }
    check_palindrome(name,temp_name);
}
void check_palindrome(string name,string &temp_name)
{
    int counter=0;
    int i;
    for(i=0;i<name.length();i++)
    {
        if(temp_name[i]==name[i])
        {
            counter++;
        }
    }
    if(counter==name.length())
    {
        cout<<"\nThe letter you have entered is a palindrome ";
    }
    else
    {
        cout<<"\nThe letter you have entered is not a palindrome ";
    }
}
