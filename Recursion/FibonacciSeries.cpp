#include<iostream>
using namespace std; 

int Fibo(int n) {
    if(n == 1 or n == 0)
    return n;
    return Fibo(n-2) + Fibo(n-1);
}

int main()
{
    int n;
    cin>>n;
    cout<<Fibo(n);
 return 0;
}