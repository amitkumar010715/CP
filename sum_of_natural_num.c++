 int sumOfNaturals(int n) {
        // code here
        
     long mod=1e9+7;
        long temp = long(n) * long(n+1);
        int ans;
        temp = temp/2;
        temp = temp % mod;
        ans = int(temp);
        return ans;
    }