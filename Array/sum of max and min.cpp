int Maxim(int arr[], int n){
    // Write your code here.
    int mini=INT_MAX;
    for(int i=0;i<n;i++)
    {
        if(arr[i]<mini)
        {
            mini=arr[i];
        }
    }
    return mini;
}
int Minim(int arr[], int n){
    // Write your code here.
    int maxi=INT_MIN;
    for(int i=0;i<n;i++)
    {
        if(arr[i]>maxi)
        {
            maxi=arr[i];
        }
    }
    return maxi;
}
int sumOfMaxMin(int arr[], int n){
    int x=Minim(arr,n);
    int y=Maxim(arr,n);
    return x+y;
}
