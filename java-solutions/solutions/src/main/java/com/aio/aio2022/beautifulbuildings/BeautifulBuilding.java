package com.aio.aio2022.beautifulbuildings;

public class BeautifulBuilding {
    public int miniUgliness(int[] buildingHeights) {
        if (buildingHeights.length == 2) {
            return 0;
        }
        int allHeight = 0;
        int[] diff = new int[buildingHeights.length - 1];
        for (int i = 1; i < buildingHeights.length; i++) {
            diff[i - 1] = (int) Math.abs(buildingHeights[i] - buildingHeights[i - 1]);
            allHeight += diff[i - 1];
        }
        int min = allHeight;
        for (int i = 0; i < buildingHeights.length; i++) {
            if (i == 0) {
                min = Math.min(min, allHeight - diff[0]);
            } else if (i == buildingHeights.length - 1) {
                min = Math.min(min, allHeight - diff[i - 1]);
            } else {
                min = Math.min(min, allHeight - diff[i - 1] - diff[i]
                        + Math.abs(buildingHeights[i - 1] - buildingHeights[i + 1]));
            }
        }
        return min;
    }
}
