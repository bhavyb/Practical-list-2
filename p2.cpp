//220130318038
//Bhavy Bhuva
#include<iostream>
using namespace std;
class temp
{
    public:
        static int n;
};
int temp::n=15;
int main()
{
    int n=22;
    cout<<"Use of scope resolution operator with class "<<endl;
    cout<<"value stored in a using class is :: "<<temp::n<<endl;
    cout<<"value stored in a using class is :: "<<n<<endl;
    return 0;
}
