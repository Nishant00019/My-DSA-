#include<bits/stdc++.h>
using namespace std;
int main()
{
    string p;
    cin>>p;
    reverse(p.begin(), p.end());
    for(int i=0;i<p.size();i++)
    {
        cout<<p[i];
    }
}

//Time complexity : O(n)
