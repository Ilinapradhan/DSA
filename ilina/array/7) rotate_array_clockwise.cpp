void rotate(int arr[], int n)
{
    int temp = arr[n-1];
    for(int i=0 ; i<n ; i++){
        arr[n-i]=arr[n-i-1];
        
    }
    arr[0]=temp;
}
