#include <iostream>
#include <string>
using namespace std;
void check_vowel_and_consonants(string name);
int main()
{
    string name;
    cout<<"Enter the string :";
    getline(cin,name);
    check_vowel_and_consonants(name);
}
void check_vowel_and_consonants(string name)
{
    int i;
    int count_vowel=0,count_consonants=0;
    for(i=0;i<name.length();i++)
    {
        if(name[i]=='a' || name[i]=='e' || name[i]=='i' || name[i]=='o' || name[i]=='u')
        {
            count_vowel++;
        }
        else
        count_consonants++;
    }
    cout<<"\nThe number of vowel is :"<<count_vowel;
    cout<<"\nThe number of consonants is :"<<count_consonants;
}
