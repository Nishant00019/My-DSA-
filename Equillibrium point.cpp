int equilibriumPoint(long long a[], int n) {
    
        if(n==1)
        {
            return 1;
        }
        int sum=0;
        for(int i=0;i<n;i++)
        {
            sum+=a[i];
        }
        int left=0;
        for(int i=0;i<n;i++)
        {
            if(sum-left-a[i]==left)
            {
                return i+1;
            }
            left+=a[i];
        }
        return -1;
    }
