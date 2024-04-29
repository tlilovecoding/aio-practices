package com.aio.aio2020.levelground;

public class LevelGround {

    public int largest(int[] arr) {
        int max = 0;
        int left = 0;
        int right = 0;
        while (right < arr.length) {
            if(arr[right]==arr[left]){
                right++;
            }else{
                max = Math.max(max, arr[left]*(right-left));
                left=right;
            }
        }
        max = Math.max(max, arr[left]*(right-left));
        return max;
    }
}
