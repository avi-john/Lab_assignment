
#include <iostream>
using namespace std;
void display(int traffic[],int lanes);
void maximum_number(int traffic[],int lanes);
void average_number(int traffic[],int lanes,int &average);
void reset(int traffic[],int lanes,int average);
int main() {
 
int lanes;
 
int average;
 
cout<<"Enter the number of lanes :";
 
cin>>lanes;
 
int traffic[lanes];
 
int i;
 
for(i=0;i<lanes;i++) {
 
cout<<"\nNumber of cars in lane "<<i+1<<" :";
 
cin>>traffic[i];
 
}
 
display(traffic,lanes);
 
maximum_number(traffic,lanes);
 
average_number(traffic,lanes,average);
 
reset(traffic,lanes,average);
}
void display(int traffic[],int lanes) {
 
int i;
 
for(i=0;i<lanes;i++) {
 
cout<<"\nLane "<<i+1<<" :"<<traffic[i];
 
}
}
void maximum_number(int traffic[],int lanes) {
 
int temp_number=traffic[0];
 
int temp_index=0;
 
for(int i=0;i<lanes;i++) {
 
if(temp_number<traffic[i]) {
 
temp_number=traffic[i];
 
temp_index=i+1;
 
}
 
}
 
cout<<"\nMaximum number of car is in lane "<<temp_index <<" which is :"<<temp_number;
}
void average_number(int traffic[],int lanes,int &average) {
 
int temp_sum=0;
 
int i;
 
for(i=0;i<lanes;i++) {
 
temp_sum+=traffic[i];
 
}
 
average=temp_sum/lanes;;
 
cout<<"\nThe average is :"<<average;
}
void reset(int traffic[],int lanes,int average) {
 
int i;
 
for(i=0;i<lanes;i++) {
 
if(traffic[i]<average) {
 
traffic[i]=0;
 
}
 
}
 
cout<<"\nThe value are being reset is ";
 
for(i=0;i<lanes;i++) {
 
cout<<"\nLane "<<i+1<<" :"<<traffic[i];
 
}
}
