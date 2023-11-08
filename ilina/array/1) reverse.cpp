string reverseWord(string str)
    {
        // Your code goes here
        int i =0;
        int n = str.length()-1;
        while(i<=n){
            swap(str[i],str[n]);
            i++;
            n--;
        }
        return str;
    }
