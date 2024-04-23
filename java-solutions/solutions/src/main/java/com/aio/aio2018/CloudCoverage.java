package com.aio.aio2018;

public class CloudCoverage {
    public int getMaxLen(int[] friends, int k){
        int len = 0;
        for (int i = 0; i < k; i++) {
            len += friends[i];
        }

        int ans = len;
        for(int i=k;i<friends.length;i++){
            len -=friends[i-k];
            len +=friends[i];
            ans = Math.min(len, ans);
        }
        return ans;
    }
}
