// Write a C++ program for endl and setw function.
//220130318038
//Bhavy Bhuva
#include <iostream>     
#include <iomanip>
using namespace std;  
int main () 
{
    int roll;
    cout<<"Enter the roll number :: ";  
    cin>>roll;
    cout<<"Your Roll number is :: "<<setw(4)<<roll;  
    return 0;  
}
