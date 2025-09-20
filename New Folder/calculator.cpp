#include <bits/stdc++.h>
using namespace std;

int add(int a, int b)
{
    return a + b;
}

int subtract(int a, int b)
{
    return a - b;
}
int multiply(int a, int b)
{
    return a * b;
}
int divide(int a, int b)
{
    return a / b;
}
int calculator(int a, int b, int c)
{
    cout << "Calculator" << endl;
    if(c==1){
        cout << "Addition: ";
        cout << add(a,b) << endl;
    }else if(c==2)
      {  cout << "Subtraction: ";
        cout << subtract(a,b) << endl;
      }else if(c==3)
       { cout << "Multiplication: ";
        cout << multiply(a,b) << endl;
       }else if(c==4){
        cout << "Division: ";
        cout << divide(a,b) << endl;}
}
int main()
{
    int a, b, c;
    cin >> a >> b>>c;
    calculator(a, b ,c);
        return 0;
}