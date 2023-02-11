Time complexity : O(N)
space comlexity : O(1)
  
   vector<int> duplicates(int arr[], int n) {
        vector<int> v;
        for(int i=0;i<n;i++)
        {
            int index=arr[i]%n;
            arr[index]+=n;
        }
        for(int i=0;i<n;i++)
        {
            if((arr[i]/n)>=2)
            {
                v.push_back(i);
            }
        }
        if(v.size()==0)
        v.push_back(-1);
        return v;
    }
