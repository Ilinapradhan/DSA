 int doUnion(int a[], int n, int b[], int m)  {
        //code here
        // int t =m;
        
        // for(int i=0 ; i<n ; i++){
        //     bool exists = find(b, b + m, a[i]) != b + m;
        //     if (!exists) {
        //         t++;
        //     }
        // }
       
        // return t ;
        unordered_set<int>s (a,a+n);
        for(int i=0;i<m;i++) s.insert(b[i]);
        return s.size();
    }
