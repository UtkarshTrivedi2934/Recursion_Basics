// Problem Statement: Return Keypad - String
// Problem Level: HARD
// Problem Description:
// Given an integer n, using phone keypad find out all the possible strings that can be made using digits of input n.
// Return empty string for numbers 0 and 1.
// Note : 1. The order of strings are not important.
// 2. Input and output has already been managed for you. You just have to populate the output array and return 
// the count of elements populated in the output array.
// Input Format :
// Integer n

// Output Format :
// All possible strings in different lines

// Constraints :
// 1 <= n <= 10^6

// Sample Input:
// 23

// Sample Output:
// ad
// ae
// af
// bd
// be
// bf
// cd
// ce
// cf

#include<bits/stdc++.h>
using namespace std;

void KeypadReturn(string digits,string mapping[],int index,vector<string> &ans,string output)
{

    //Base case
    if(index >= digits.length())
    {
        ans.push_back(output);
        return;
    }

    int num = digits[index] - '0';
    string value = mapping[num]; 

    for(int i = 0;i<value.length();i++)
    {
        output.push_back(value[i]);
        KeypadReturn(digits,mapping,index+1,ans,output);
        output.pop_back();
    }
}
int main()
{
    string n;
    cin>>n;
    string mapping[10] = {"","","abc","def","ghi","jkl","mno","pqrs","tuv","wzxyz"};
    vector<string> ans;
    string output;
    KeypadReturn(n,mapping,0,ans,output);
    for(auto i:ans) {
        cout<<i<<endl;
    }
 return 0;
}