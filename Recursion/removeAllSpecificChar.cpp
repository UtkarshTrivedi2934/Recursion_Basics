#include<iostream>
using namespace std;


void rem(char s[],char x) {
    if(s[0] == '\0')
    return;

    if(s[0] == x)
    {
        int i = 1;
        for(i;s[i]!='\0';i++)
        s[i-1] = s[i];
        s[i-1] = s[i];
        rem(s,x);
    }
    rem(s+1,x);
}

int main()
{
    char str[100];
    char x;
    cin>>str>>x;
    rem(str,x);
    cout<<str;
 return 0;
}