#include<bits/stdc++.h>
using namespace std;

int getSubseq(string s,string output[]) {
    if(s.size() == 0)
    {
        output[0] = "";
            return 1;
    }
    //return output array
    for(int i=0;i<getSubseq(s.substr(1),output);i++) {
        output[i + getSubseq(s.substr(1),output)] = s[0] + output[i];
    }

    // returning count of subseq
    return 2*(getSubseq(s.substr(1),output));
}

int main()
{
    string s;
    cin>>s;
    string *output = new string[1000];
    cout<<getSubseq(s,output);
    for(int i = 0;i<getSubseq(s,output);i++) {
        cout<<output[i]<<" ";
    }
 return 0;
}