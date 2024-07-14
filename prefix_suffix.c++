       
        vector<int>a(n);




        vector<int>pref_cnt(n+1,0);
        for (int i = 0; i <n; i++)
        {
            pref_cnt[i+1]=pref_cnt[i]+a[i];
        }


         vector<int> suf_cnt(n + 1, 0);
        for (int i = n - 1; i >= 0; i--) {
            suf_cnt[i] = suf_cnt[i + 1] + a[i];
        }
        