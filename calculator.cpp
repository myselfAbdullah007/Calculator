  
#include <bits/stdc++.h>
using namespace std;

template<nametype t>
t add(t num1, t num2) {
  return num1 + num2;
}
template<nametype d>
d div(d num1, d num2) 
{
  if(num2<=0)
  {
    cout<<"Division not possible : Denomiator = "; 
    return 0;
  }
  return num1 / num2;
}
template<nametype x>
x multiply(x num1, x num2) 
{
   return num1 * num2;
}

int main() 
{
  
  float num1, num2;
  
  cout << "Enter first number: ";
  cin >> num1;
  cout << "Enter second number: ";
  cin >> num2;
  
  cout << "Addition of first number and second number is: " << add(num1, num2);
  cout << "Division of first number and second number is: " << div(num1, num2);
  
  return 0;
}
