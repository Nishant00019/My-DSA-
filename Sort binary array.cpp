#include<bits/stdc++.h>
using namespace std;
int main()
{
  
	int n=8;
	int a[n]={1,0,1,0,0,1,0,1};

	int type0 = 0;
	int type1 = n-1;

	while(type0<type1)
	{
		if(a[type0]==1)
		{
			if(a[type1]==0)
			{
				swap(a[type0],a[type1]);
			}
			type1--;
		}
		else
		{
			type0++;
		}
	}

	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
}
// Time complexity : O(N)
