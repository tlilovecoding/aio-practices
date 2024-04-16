package com.aio.aio2023.DistinctosRaffle;

import java.io.*;
import java.util.Arrays;

class Solution {

    /* N is the number of competitors. */
    private static int N;

    /* Competitors all submit a number between 1 and K inclusive. */
    private static int K;

    /* numbers contains the submitted numbers. */
    private static int numbers[] = new int[100005];

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

    private static int getWiner() {
        int[] votes = new int[K + 1];
        Arrays.fill(votes, -1);
        for (int i : numbers) {
            if (votes[i] == -1) {
                votes[i] = 1;
            } else if (votes[i] == 1) {
                votes[i] = 0;
            } else if (votes[i] == 0) {

            }
        }
        for(int i=0;i<K+1;i++){
            if(votes[i]==1){
                return i;
            }
        }
        return -1;
    }

    public static void main(String[] args) throws IOException {
        /* Open the input and output files. */
        BufferedReader input_file = new BufferedReader(new FileReader(
                "C:/Ting/Study/aio-practices/java-solutions/solutions/src/main/java/com/aio/aio2023/distinctosraffle/rafflein.txt"));
        BufferedWriter output_file = new BufferedWriter(new FileWriter(
                "C:/Ting/Study/aio-practices/java-solutions/solutions/src/main/java/com/aio/aio2023/distinctosraffle/raffleout.txt"));

        /*
         * Read the values of N, K and the submitted numbers from the input
         * file.
         */
        N = Integer.parseInt(readToken(input_file));
        K = Integer.parseInt(readToken(input_file));
        for (int i = 0; i < N; i++) {
            numbers[i] = Integer.parseInt(readToken(input_file));
        }

        answer = getWiner();

        /*
         * TODO: This is where you should compute your solution. Store the
         * winning number, or -1 if there is no winning number, into the
         * variable answer.
         */

        /* Write the answer to the output file. */
        output_file.write(answer + "\n");

        /* Finally, close the input/output files. */
        input_file.close();
        output_file.close();
    }
}