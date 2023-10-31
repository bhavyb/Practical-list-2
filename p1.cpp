// Write a C++ program to access global variable using scope resolution operator without using class.
//220130318038
//Bhavy Bhuva
#include <iostream>  
using namespace std;  
int num=15;  
int main()  
{  
    int num=20;  
    cout<<"The value of the local variable num :: " <<num<<endl;  
    cout<<"The value of the global variable num :: "<<::num;   
    return 0; 
}
