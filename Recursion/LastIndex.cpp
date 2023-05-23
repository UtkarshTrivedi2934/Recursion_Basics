// Given an array of length N and an integer x, you need to find and return the last index of integer x present in the array. Return -1 if it is not present in the array.
// Last index means - if x is present multiple times in the array, return the index at which x comes last in the array.
// You should start traversing your array from 0, not from (N - 1).
// Do this recursively. Indexing in the array starts from 0.
// Input Format :
// Line 1 : An Integer N i.e. size of array
// Line 2 : N integers which are elements of the array, separated by spaces
// Line 3 : Integer x

// Output Format :
// last index or -1

// Constraints :
// 1 <= N <= 10^3

// Sample Input :
// 4
// 9 8 10 8
// 8

// Sample Output :
// 3


#include<iostream>
using namespace std;

int last_index(int n,int arr[],int x,int curr_index) {
    //Base case
    if(curr_index == 0)
    return -1;

    if(x == arr[curr_index])
        return curr_index;
    
    //Recursion
    return last_index(n,arr,x,curr_index-1);
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0;i<n;i++) {
        cin>>arr[i];
    }
    int x;
    cin>>x;

    cout<<last_index(n,arr,x,n);

 return 0;
}