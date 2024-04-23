package com.aio.aio2018;

import java.util.Arrays;

public class Janitor {
    public int[][] matrix = {
            { 5, 3, 2, 0 },
            { 4, 8, 4, 3 },
            { 5, 7, 6, 1 }
    };

    public void updateMatrix(int row, int col, int val) {
        matrix[row - 1][col - 1] = val;
    }

    public int fills(int[][] matrix) {
        int cnt = 0;

        int[][] tempMatrix = new int[matrix.length][];
        for (int i = 0; i < matrix.length; i++) {
            tempMatrix[i] = Arrays.copyOf(matrix[i], matrix[i].length);
        }
        boolean[][] filled = new boolean[matrix.length][matrix[0].length];
        while (!allFilled(filled)) {
            for (int i = 0; i < tempMatrix.length; i++) {
                int tmpVal = -1;
                int row = i;
                int col = 0;
                for (int j = 0; j < tempMatrix[0].length; j++) {
                    if (filled[i][j] == false && tempMatrix[i][j] > tmpVal) {
                        tmpVal = tempMatrix[i][j];
                        row = i;
                        col = j;
                    }
                }
                if (tmpVal != -1) {
                    cnt++;
                    fillThem(row, col, filled, tempMatrix);
                }
            }

        }
        return cnt;
    }

    public void fillThem(int row, int col, boolean[][] filled, int[][] tempMatrix) {
        filled[row][col] = true;
        if (row - 1 >= 0 && !filled[row - 1][col] && tempMatrix[row - 1][col] <= tempMatrix[row][col]) {
            fillThem(row - 1, col, filled, tempMatrix);
        }
        if (row + 1 < filled.length && !filled[row + 1][col] && tempMatrix[row + 1][col] <= tempMatrix[row][col]) {
            fillThem(row + 1, col, filled, tempMatrix);
        }
        if (col - 1 >= 0 && !filled[row][col - 1] && tempMatrix[row][col - 1] <= tempMatrix[row][col]) {
            fillThem(row, col - 1, filled, tempMatrix);
        }
        if (col + 1 < filled[0].length && !filled[row][col + 1] && tempMatrix[row][col + 1] <= tempMatrix[row][col]) {
            fillThem(row, col + 1, filled, tempMatrix);
        }
    }

    public boolean allFilled(boolean[][] filled) {
        for (int i = 0; i < filled.length; i++) {
            for (int j = 0; j < filled[0].length; j++) {
                if (filled[i][j] == false)
                    return false;
            }
        }
        return true;
    }
}
