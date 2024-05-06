package com.aio.aio2020.ghost;

public class GhostEncounter2 {

    public int getMax(int k, int[] meters, int[] seconds) {
        // the idea is use double pointer
        // start with ghost 1, and go through to the last ghost, count the ones visited,
        // and mark them as visited
        // once went to the last, turn back again, until left pointer went to right most
        boolean[] visited = new boolean[meters.length];
        int left = 0;
        int right = 0;
        int max = 0;
        while (left < meters.length) {
            int cnt = 0;
            if (visited[left]) {
                left++;
                continue;
            }
            // meet the first ghost for this round
            cnt = 1;
            right = left + 1;
            visited[left] = true;
            // start right pointer
            while (right < meters.length) {
                if (visited[right]) {
                    right++;
                    continue;
                }
                // found an unvisited ghost, check if it is the 'right' one
                if ((meters[right] - meters[left]) * k == seconds[right] - seconds[left]) {
                    cnt++;
                    visited[right++] = true;
                    continue;
                }
                right++;
            }
            max = Math.max(max, cnt);
        }
        return max;
    }
}
