// Problem Statement: Replace character recursively
// Problem Level: EASY
// Problem Description:
// Given an input string S and two characters c1 and c2, you need to replace every occurrence of character c1 with character c2 in the given string.
// Do this recursively.
// Input Format :
// Line 1 : Input String S
// Line 2 : Character c1 and c2 (separated by space)

// Output Format :
// Updated string

// Constraints :
// 1 <= Length of String S <= 10^6

// Sample Input :
// abacd
// a x

// Sample Output :
// xbxcd

#include<bits/stdc++.h>
using namespace std;

string replaceOccur(string s,int n,char c1,char c2) {
    //base case
    if(n == 0)
    return "";

    if(s[0] == c1) {
        return c2 + replaceOccur(s.substr(1),n-1,c1,c2);
    }

    return s[0] + replaceOccur(s.substr(1),n-1,c1,c2);    
}

int main()
{
    string s;
    char c1,c2;
    cin>>s; 
    cin>>c1>>c2;
    int n = s.length();
    cout<<replaceOccur(s,n,c1,c2);
 return 0;
}