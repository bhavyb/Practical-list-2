// Write a C++ program to demonstrate use of return by reference.
//220130318038
//Bhavy Bhuva
#include<iostream>
using namespace std;
int x=5 //global variable
int & test();
int main()
{
    cout<<x<<endl;
    test()=15;
    cout<<x<<endl;
    return 0;
}
int &test ()
{
    return x;
}
