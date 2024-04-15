package com.aio.aio2023.TeleTrip;

import java.io.*;
import java.util.Arrays;

class Solution {

    /* N is the number of instructions. */
    private static int N;

    /* instructions contains the sequence of instructions. */
    private static char instructions[] = new char[100005];

    private static int answer;

    /*
     * Read the next token from the input file.
     * Tokens are separated by whitespace, i.e., spaces, tabs and newlines.
     * If end-of-file is reached then an empty string is returned.
     */
    private static String readToken(BufferedReader in) throws IOException {
        StringBuffer ans = new StringBuffer();
        int next;

        /* Skip any initial whitespace. */
        next = in.read();
        while (next >= 0 && Character.isWhitespace((char) next))
            next = in.read();

        /* Read the following token. */
        while (next >= 0 && !Character.isWhitespace((char) next)) {
            ans.append((char) next);
            next = in.read();
        }

        return ans.toString();
    }

    private static void calculate() {
        int[] arr = new int[2 * N + 1];
        Arrays.fill(arr, 1);
        arr[N] = 0;
        int cur = N;
        for (char c : instructions) {
            if (c == 'T') {
                cur = N;
            }
            if (c == 'L') {
                arr[--cur] = 0;
            }
            if (c == 'R') {
                arr[++cur] = 0;
            }
        }

        int cnt = 0;
        for(int i:arr){
            if(i==0){
                cnt++;
            }
        }
        answer = cnt;
    }

    public static void main(String[] args) throws IOException {
        /* Open the input and output files. */
        // BufferedReader input_file = new BufferedReader(new FileReader(
        // "telein.txt"));
        // BufferedWriter output_file = new BufferedWriter(new FileWriter(
        // "teleout.txt"));

        BufferedReader input_file = new BufferedReader(new FileReader(
                "C:/Ting/Study/aio-practices/java-solutions/solutions/src/main/java/com/aio/aio2023/TeleTrip/telein.txt"));
        BufferedWriter output_file = new BufferedWriter(new FileWriter(
                "C:/Ting/Study/aio-practices/java-solutions/solutions/src/main/java/com/aio/aio2023/TeleTrip/teleout.txt"));

        /* Read the value of N and the instructions from the input file. */
        N = Integer.parseInt(readToken(input_file));
        instructions = readToken(input_file).toCharArray();
        calculate();
        /*
         * TODO: This is where you should compute your solution. Store the
         * number of different farmhouses that you visit into the variable
         * answer.
         */

        /* Write the answer to the output file. */
        output_file.write(answer + "\n");

        /* Finally, close the input/output files. */
        input_file.close();
        output_file.close();
    }
}
