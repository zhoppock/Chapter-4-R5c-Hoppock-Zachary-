// Hoppock, Zachary
// oddSumLoop.cpp
// Oct. 10, 2020
// Print the sum of all odd numbers between two given values (inclusive)
// Version # 1
#include <iostream>

using namespace std;
int main()
{
cout << "Enter a value for a (lower): ";
int a;
cin >> a;
cout << "Enter a value for b (higher): ";
int b;
cin >> b;

int sum = 0;

if (a % 2 != 0)
{
  for (int i = a; i <= b; i = i + 2)
    sum = sum + i;
}
else
{
  a++;
  for (int i = a; i <= b; i = i + 2)
    sum = sum + i;
}
cout << "The sum of all odd numbers between a and b is " << sum;
return 0;
}