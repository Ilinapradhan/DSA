void sort012(int a[], int n)
    {
        int z=count(a, a + n, 0); 
        int o=count(a, a + n, 1);
        int t=count(a, a + n, 2);
        for(int i=0 ; i<z ; i++){
            a[i]=0;
        }
        for(int i=z ; i<z+o ; i++){
            a[i]=1;
        }
        for(int i=z+o ; i<n ; i++){
            a[i]=2;
        }
    }
    
