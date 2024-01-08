bool subArrayExists(int arr[], int n)
    {
        unordered_set<int> s;
        int prefix_sum = 0;
        for(int i=0;i<n;i++)
        {
            prefix_sum += arr[i];
            if(prefix_sum == 0) return true;
            
            if(s.find(prefix_sum)!=s.end()) return true;
            
            s.insert(prefix_sum);
        }
        return false;
    }

// Time Complexity: O(n)
// Auxiliary Space: O(n)
