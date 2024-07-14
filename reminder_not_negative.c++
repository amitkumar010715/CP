// if (remainder is negative) then we have to add the divisor to the remainder;
// ex;
//    -2 %5 = -2 so  add 5 to them
//    so new remainder =3

// lets see: Longest subarray with sum divisible by K
             int longSubarrWthSumDivByK(int arr[], int n, int k)
	{
	    // Complete the function
	    int j=0;
	    int sum=0;
	    unordered_map<int,int>mp;
	    int r=0;
	    int ans=0;
	    for(int i=0;i<n;i++){
	       sum+=arr[i];
	       r=sum%k;
	       if(r==0){
	           ans=i+1;
	       }
	       if(r<0){ /// SEE THIS 
	           r+=k;
	       }
	      
	       if(mp.find(r)!=mp.end()){
	               ans=max(ans,i-mp[r]);
	           }
	           else{
	                mp[r]=i; 
	           }
	         
	       
	       
	    }
	    return ans;
	}