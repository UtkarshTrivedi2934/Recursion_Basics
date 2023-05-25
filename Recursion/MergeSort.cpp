// Problem Statement: Merge Sort
// Problem Level: MEDIUM
// Problem Description:
// Sort an array A using Merge Sort.
// Change in the input array itself. So no need to return or print anything.
// Input format :
// Line 1 : Integer n i.e. Array size
// Line 2 : Array elements (separated by space)

// Output format :
// Array elements in increasing order (separated by space)

// Constraints :
// 1 <= n <= 10^3

// Sample Input 1 :
// 6 
// 2 6 8 5 4 3

// Sample Output 1 :
// 2 3 4 5 6 8

// Sample Input 2 :
// 5
// 2 1 5 2 3

// Sample Output 2 :
// 1 2 2 3 5


#include<bits/stdc++.h>
using namespace std;

void merge(vector<int> &arr,int start,int mid,int end){
    vector<int> temp;
    int left = start;
    int right = mid+1;

    while(left<=mid and right <= end) {
        if(arr[left] <= arr[right]) {
            temp.push_back(arr[left]);
            left++;
        }
        
        else {
            temp.push_back(arr[right]);
            right++;
        }
        
    }
    while(left<=mid)
    {
        temp.push_back(arr[left]);
            left++;
    }

    while(right<=end)
    {
        temp.push_back(arr[right]);
            right++;
    }

    for(int i = start;i<=end;i++)
        arr[i] = temp[i-start];

}   

void mergesort(vector<int> &a,int start,int end) {
    //base case
    if(start>=end)
    return;

    int mid = (start+end)/2;
    mergesort(a,start,mid);
    mergesort(a,mid+1,end);
    merge(a,start,mid,end);
}

int main() {
   int size;
   int a;
   cin>>size;
   vector<int> arr;

   for(int i = 0;i<size;i++) {
    cin>>a;
    arr.push_back(a);
   }

   mergesort(arr,0,size-1);

   for(auto i:arr)
   cout<<i<<" ";
}