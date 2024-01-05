 vector <int> commonElements (int A[], int B[], int C[], int n1, int n2, int n3)
        {
            map<int,int>mp1,mp2,mp3;
            for(int i=0;i<n1;i++)mp1[A[i]]++;
            for(int i=0;i<n2;i++){
                if(mp1[B[i]])mp2[B[i]]++;
            }
            for(int i=0;i<n3;i++){
                if(mp2[C[i]])mp3[C[i]]++;
            }
            vector<int>ans;
            for(auto pair:mp3)ans.push_back(pair.first);
            return ans;
        }
