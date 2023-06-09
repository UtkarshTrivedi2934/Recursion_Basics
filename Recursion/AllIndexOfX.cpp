
// Problem Description:
// Given an array of length N and an integer x, you need to find all the indexes where x is present in the input array. Save all the indexes in an array (in increasing order).
// Do this recursively. Indexing in the array starts from 0.
// Input Format :
// Line 1 : An Integer N i.e. size of array
// Line 2 : N integers which are elements of the array, separated by spaces
// Line 3 : Integer x

// Output Format :
// indexes where x is present in the array (separated by space)

// Constraints :
// 1 <= N <= 10^3

// Sample Input :
// 5
// 9 8 10 8 8
// 8

// Sample Output :
// 1 3 4

//Solution:
#include<bits/stdc++.h>
using namespace std;

vector<int> All_indices(int n,int a[],int x,int index,vector<int> output) {
    
    //Base case
    if(index == n) 
    return output;

    if(x == a[index]) {
        output.push_back(index);
        return All_indices(n,a,x,index+1,output);
    }
    return All_indices(n,a,x,index+1,output);
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0;i<n;i++) {
        cin>>arr[i];
    }
    vector<int> output;
    int x;
    cin>>x;
    for(auto i:All_indices(n,arr,x,0,output))
    {
        cout<<i<<" ";
    }
 return 0;
}