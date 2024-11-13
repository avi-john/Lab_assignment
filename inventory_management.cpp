
#include <iostream>
#include <string>
#include <vector>
using namespace std;
void addItem(vector <string> &itemName,vector <int> &quantity);
void displayinventory(vector <string> &itemName,vector <int> &quantity);
int main()
{
 
vector <string> itemName;
 
vector <int> quantity;
 
int choice;
 
addItem(itemName,quantity);
 
displayinventory(itemName,quantity);
}
void addItem(vector <string> &itemName,vector <int> &quantity)
{
 
/*vector <char> itemName;
 vector <int> quantity;*/
 
int a=0;
 
int temp_quantity;
 
string temp_itemName;
 
while(a==0)
 
{
 
cout<<"Enter the name of the item you want to add :";
 
cin>>temp_itemName;
 
itemName.push_back(temp_itemName);
 
cout<<"\nEnter the amount of the item you want to add :";
 
cin>>temp_quantity;
 
quantity.push_back(temp_quantity);
 
cout<<"\nDo you want to again input the items If yes input 0 else input 1 :";
 
cin>>a;
 
}
}
void displayinventory(vector <string> &itemName,vector <int> &quantity)
{
 
int i,j;
 
cout<<"\nCurrent Inventory";
 
cout<<"\n";
 
for(i=0;i<itemName.size();i++)
 
{
 
cout<<itemName[i];
 
cout<<":";
 
cout<<quantity[i];
 
cout<<"\n";
 
}
}

