#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    cin>>str;
    char temp;
    int n=str.size();
    for(int i=0;i<n/2;i++)
    {
        temp=str[i];
        str[i]=str[n-i-1];
        str[n-i-1]=temp;
    }
    cout<<str;
}