package com.aio.aio2020.baubles;

public class Bauble {
    public int getNum(int[] vals) {
        int redO = vals[0];
        int blueO = vals[1];
        int spare = vals[2];
        int redT = vals[3];
        int blueT = vals[4];
        if (redO > redT && blueO > blueT) {
            if (redT == 0) {
                return blueO - blueT + 1 + spare;
            }
            else if (blueT == 0) {
                return redO - redT + 1 + spare;
            }
            else {
                return Math.min(redO - redT, blueO - blueT) + 1 + spare;
            }
            
        }
        else if (redO < redT && blueO < blueT) {
            return spare - (redT - redO + blueT - blueO) + 1;
        }
        else {
            if (blueT == 0) {
                return spare - redT + redO + 1;
            }
            else if (redT == 0) {
                return spare - blueT + blueO + 1;
            }
            else {
                return spare - Math.max(redT - redO, blueT - blueO) + 1;
            }
        }
    }
}
