#include<iostream>
using namespace std;

int multiplication(int m,int n) {
    //Base case
    if(n == 0)
    return 0;
    return m + multiplication(m,n-1);
}

int main()
{
    int m,n;
    cin>>m>>n;
    cout<<multiplication(m,n);
 return 0;
}