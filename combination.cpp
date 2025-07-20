#include<iostream>
using namespace std;

long long int facto(int n)
{
    long long int fact =1;
    for(int i=2;i<=n;i++)
    {
        fact *= i;
    }
    return fact;
}
int main()
{
    int n,r;
    cout << "Enter the value of n : ";
    cin >> n;
    cout << "Enter the value of r : ";
    cin >> r;
    long long int comb;
    comb = facto(n)/(facto(r)*facto(n-r));
    cout << "The combination of this given value is  : "<< comb;
    return 0;
}