// Find premutation in C++


#include <iostream>
using namespace std;
// factorial function
long long int facto (int n)                         // we take long long int data type because some times factorial value size is  more then long long int 
{
    long long int fact =1;
    for (int i=2;i<=n;i++)                          // we start loop with 2 because the multiplaction of any number with one is give that number
    {
        fact *= i;                                  // formula of find factorial
    }
    return fact;
}

int mai5n()
{
    int n,r;
    cout << "Enter the value of n : ";              // take number of thigs or etc....
    cin >> n;
    cout << "Enter the value of r :";               //take  number how amny 
    cin >> r;
    long long int premutetion;
    premutetion =facto(n)/facto(n-r);               // here is the formula of premutaion 


    cout << "Premutation of this given numbers is : " << premutetion << endl;
    return 1;
}