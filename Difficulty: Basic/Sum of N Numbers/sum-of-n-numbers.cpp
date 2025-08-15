int nSum(int n) {
    // code here
    
    int ans = 0;
    
    if(n == 0)
    {
        return 0;
    }
    if(n == 1)
    {
        return n;
    }
    ans = nSum(n-1) + n;
    return ans;
}