class Solution
{
    long long fact[21];
    int firstcall = 0;

private:
// this fuction is define only one call and result store in arr only one for easy excess
    void func()
    {
        fact[0] = 1;
        for (int i = 1; i <= 20; ++i)
        {
            fact[i] = fact[i - 1] * i;
        }
    }

public:
    long long possibleStrings(int n, int r, int b, int g)
    {
        // code
        if (firstcall == 0)
        {
            func();
            firstcall = 1;
        }
        long long ans = 0;
        int left = n - (r + g + b);
        for (int i = 0; i <= left; ++i)
        {
            for (int j = 0; j <= left; ++j)
            {
                int k = left - (i + j);
                if (k >= 0)
                {
                    int R = r + i;
                    int G = g + j;
                    int B = b + k;
                    ans += (fact[n] / (fact[R] * fact[G] * fact[B]));
                }
            }
        }
        return ans;
    }
};


int main(int argc, char const *argv[])
{
    int t;
    cin>>t;
    while (t--)
    {   // this call is run up to t testcase and each testcase it calculate factorial which is not good part so use above technuque
         cout<<ob.possibleString(----)<<endl;
    }
    
    return 0;
}
