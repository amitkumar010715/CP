if n=5;
void printTillN(int N)
    {
        if(N == 0)
            return;
        printTillN(N-1);
        cout << N << " ";
    }
    output: 1 2 3 4 5

*******************************************************
    void printTillN(int N)
    {
        if(N == 0)
            return;
        cout << N << " ";
        printTillN(N-1);
        
    }
    output: 5 4 3 2 1
**************************************************************************



// question del mid element of stack



 void solve(int index,stack<int>&s,int n)
    {
        
        if(index==n){
            s.pop();
            return ;
        }
        int a = s.top();
        s.pop();
        solve(index + 1,s,n);// ye pura hone ke bad s.push(a) wala last  se call 
        s.push(a);
    
    }
    void deleteMid(stack<int>&s, int si)
    {
        // code here.. 
        int n=ceil(((si+1)/2.0)) ;
        solve(1,s,n);
    }


