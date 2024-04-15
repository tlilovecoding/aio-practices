package com.aio.aio2022.ElectionII;

import java.io.*;

class Solution {

    /* N is the number of votes. */
    private static int N;

    /* votes contains the sequence of votes. */
    private static char votes[] = new char[100005];

    private static char answer;

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

    private static Character getWinner() {
        int[] candidates = new int[265];
        for (char c : votes) {
            candidates[c]++;
        }
        if (candidates['A'] > candidates['B'] && candidates['A'] > candidates['C'])
            return 'A';
        if (candidates['B'] > candidates['A'] && candidates['B'] > candidates['C'])
            return 'B';
        if (candidates['C'] > candidates['A'] && candidates['C'] > candidates['B'])
            return 'C';
        return 'T';
    }

    public static void main(String[] args) throws IOException {
        /* Open the input and output files. */
        BufferedReader input_file = new BufferedReader(new FileReader(
                "C:/Ting/Study/aio-practices/java-solutions/solutions/src/main/java/com/aio/aio2022/electionII/elecin.txt"));
        BufferedWriter output_file = new BufferedWriter(new FileWriter(
                "C:/Ting/Study/aio-practices/java-solutions/solutions/src/main/java/com/aio/aio2022/electionII/elecout.txt"));

        /* Read the value of N and the votes from the input file. */
        N = Integer.parseInt(readToken(input_file));
        votes = readToken(input_file).toCharArray();

        answer = getWinner();

        /*
         * TODO: This is where you should compute your solution. Store the
         * winning candidate ('A', 'B' or 'C'), or 'T' if there is a tie, into
         * the variable answer.
         */

        /* Write the answer to the output file. */
        output_file.write(answer + "\n");

        /* Finally, close the input/output files. */
        input_file.close();
        output_file.close();
    }
}
