  vector<int> subarraySum(vector<int>arr, int n, long long s)
    {
        
      long long int i,p=0,b=0;
    	for(i=0;i<n;i++)
	    {
		    p+=arr[i];
		    while(p>s&&b<i)
		    {
		        p-=arr[b++];
		    }
		    if(p==s)
		    {
			    return {b+1,i+1};
		    }
	    }
	    return {-1};
    }
