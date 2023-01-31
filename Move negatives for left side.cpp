#include<bits/stdc++.h>
using namespace std;
int main()
{
  
	int n=8;
	int a[n]={12, 11, -13, -5, 6, -7, 5, -3, -6};
	
	int lo=0;
	int hi=n-1;

	while(lo<=hi)
	{
		if(a[lo]<0)
		{
			lo++;
		}
		else
		{
			swap(a[lo],a[hi--]);
		}
	}

	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
}

// Time complexity : O(N)
