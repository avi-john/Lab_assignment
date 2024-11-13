#include <iostream>
#include <cmath>
using namespace std;
int main() {
 
float firstX, firstY, prevX, prevY, currentX, currentY;
 
float area = 0.0;
 
cout << "Enter first point (x y): ";
 
cin >> firstX >> firstY;
 
prevX = firstX;
 
prevY = firstY;
 
do {
 
cout << "Enter next point (x y): ";
 
cin >> currentX >> currentY;
 
area += (prevX * currentY) - (currentX * prevY);
 
prevX = currentX;
 
prevY = currentY;
 
} while (currentX != firstX || currentY != firstY);
 
area = abs(area) / 2.0;
 
cout << "The area of the polygon is: " << area << endl;
 
return 0;
