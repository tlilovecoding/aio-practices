package com.aio.aio2021.melody;

import java.util.Dictionary;
import java.util.Hashtable;
import java.util.HashMap;

public class Melody{
    public int changes(int[] arr){
        HashMap<String, Integer> dict = new HashMap<>();
        StringBuilder sb = new StringBuilder(); 
        for(int i=0;i<arr.length;i+=3){
            for(int j=i;j<i+3;j++){
                if(j>i){
                    sb.append("|");
                }
                sb.append(arr[j]);
            }
            if(dict.containsKey(sb.toString())) {
                // do something
                dict.put(sb.toString(),dict.get(sb.toString())+1);
            }else{
                dict.put(sb.toString(),1);
            }
            sb.setLength(0);
        }

        return 0;
    }
}
