#include<bits/stdc++.h>
using namespace std;
int main()
{

	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	int n=13;
	int a[n]={0, 1, 1, 0, 1, 2, 1, 2, 0, 0, 0, 1,2};

	int lo = 0;
	int mid = 0;
	int hi = n-1;

	while(mid<=hi)
	{
		if(a[mid]==0)
		{
			swap(a[mid++],a[lo++]);
		}
		else if(a[mid]==2)
		{
			swap(a[mid],a[hi--]);
		}
		else
		{
			mid++;
		}
	}

	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
}
// Time complexity : O(N)
