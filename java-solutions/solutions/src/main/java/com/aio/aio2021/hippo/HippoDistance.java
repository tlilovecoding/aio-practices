package com.aio.aio2021.hippo;

import java.util.*;
import java.util.stream.Collectors;

public class HippoDistance {
    public int howMany(int[] meals, int dist) {
        int ans = 1;
        
        Set<Integer> set = Arrays.stream(meals).boxed().collect(Collectors.toSet());
        List<Integer> list = new ArrayList<>(set);
        Collections.sort(list);

        int left = 0;
        int right = 1;
        while (right < list.size()) {
            if (list.get(right) - list.get(left) >= dist) {
                ans++;
                left = right;
                right++;
            } else {
                right++;
            }
        }
        return ans;
    }
}
