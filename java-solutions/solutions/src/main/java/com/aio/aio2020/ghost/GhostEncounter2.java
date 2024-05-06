package com.aio.aio2020.ghost;

public class GhostEncounter2 {
    public int getMax(int k, int[] meters, int[] seconds) {
        int max = 1;
        boolean[] encountered = new boolean[meters.length];
        for (int i = 0; i < meters.length; i++) {
            if(encountered[i]){
                continue;
            }
            int cnt = 1;
            int curMeter = meters[i];
            int curSec = seconds[i];
            for (int j = i + 1; j < meters.length; j++) {
                if(encountered[j]){
                    continue;
                }
                if(meters[j]==curMeter&&seconds[j]==curSec){
                    encountered[j]=true;
                    cnt++;
                    continue;
                }
                if((meters[j]-curMeter)*k==(seconds[j]-curSec)){
                    encountered[j]=true;
                    cnt++;
                    curMeter = meters[j];
                    curSec = seconds[j];
                    continue;
                }
            }
            max = Math.max(max, cnt);
        }
        return max;
    }
}
