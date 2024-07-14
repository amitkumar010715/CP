//  O(n*sqrt(n))
 int divisorSum(int n)
{
    int sum = 0;
 
    for(int i = 1; i <= n; ++i) 
    {
         
        // Find all divisors of i and add them
        for(int j = 1; j * j <= i; ++j)
        {
            if (i % j == 0)
            {
                if (i / j == j)
                    sum += j;
                else
                    sum += j + i / j;
            }
        }
    }
    return sum;
}
//  O(n)

  long long sumOfDivisors(int n)
    {
        // Write Your Code here
        long long sum=0;
        for(int i=1;i<=n;i++){// divisor_sum
       sum+=(n/i)*i;// (no of time particular number(i) comes * i)
        }
        return sum;
    }

    