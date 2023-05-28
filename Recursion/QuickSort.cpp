#include<bits/stdc++.h>
using namespace std;

int partition1(vector<int> &arr,int start,int end) {
    //find count of smaller elements
     int piv = arr[start];     
     int i = start;
     int j = end;

    
    while(i<j) {
        while(arr[i]<=piv and i<=end-1)
        i++;

        while(arr[j]>piv and j>=start+1)
        j--;

        if(i<j)
        swap(arr[i],arr[j]);
    }
    swap(arr[start],arr[j]);
    return j;
}

void qs(vector<int> &arr,int start,int end) {
    if(start>=end)
    return;

    int pos = partition1(arr,start,end);
    qs(arr,start,pos-1);
    qs(arr,pos+1,end);
    // start to pos-1 number of elements will be less than x
    // pos+1 to end number of elementds will be greater than x
}

int main()
{
    int n;
    cin>>n;
    vector<int> arr;
    int a;
    for(int i = 0;i<n;i++) {
        cin>>a;
        arr.push_back(a);
    }
    qs(arr,0,n-1);
    for(int i = 0;i<n;i++) {
        cout<<arr[i]<<" ";
    }
 return 0;
}