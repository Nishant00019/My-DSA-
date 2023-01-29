#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  cin>>n;
  int a[n];
  for(int i=0;i<n;i++)
  {
    cin>>a[i];
  }
  int k;
  cin>>k;
  priority_queue<int>p;
  for(int i=0; i<=n; i++)
  {
    p.push(a[i]);
    if(p.size()>k)
    {
      p.pop();
    }
  }   
  cout<<p.top();
}

//Time complexity : O(N)
