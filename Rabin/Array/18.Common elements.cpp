vector <int> commonElements (int A[], int B[], int C[], int n1, int n2, int n3)
        {
            //code here.
            vector<int> ans;
            map<int,int> m1,m2,m3;
            for(int i=0;i<n1;i++){
                m1[A[i]]++;
            }
            for(int i=0;i<n2;i++){
                if(m1[B[i]]) m2[B[i]]++;
            }
            for(int i=0;i<n3;i++){
                if(m2[C[i]]) m3[C[i]]++;
            }
            for(auto it : m3) ans.push_back(it.first);
            return ans;
        }

// Time Complexity: O(n1 + n2 + n3)
// Auxiliary Space: O(n1 + n2 + n3)
