/*Write a C++ program to demonstrate use of default arguments*/
//220130318038
//Bhavy Bhuva
#include<iostream>
using namespace std;
void f(int a=0, int b=0)
{
    cout<<"a = "<<a<<" , b = "<<b<<endl;
}
int main()
{
    f();
    f(10);
    f(10,0);
    f(10,99);
}
