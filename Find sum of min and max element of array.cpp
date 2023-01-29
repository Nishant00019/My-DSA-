#include<bits/stdc++.h>
using namespace std;
int main()
{
  int N;
  cin>>N;
  int A[N];
  for(int i=0;i<N;i++)
  {
    cin>>A[i];
  }
  int mi=A[0];
  int ma=A[0];
  for(int i=1;i<N;i++)
  {
    if(A[i]<mi)
    {
      mi=A[i];
    }
    if(A[i]>ma)
    {
      ma=A[i];
    }
  }
  cout<<mi+ma<<endl;
}
  
//Time complexity : O(N)
