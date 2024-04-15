package com.aio.aio2023.TeleTrip;

import java.io.*;

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
        while (next >= 0 && Character.isWhitespace((char)next))
            next = in.read();

        /* Read the following token. */
        while (next >= 0 && ! Character.isWhitespace((char)next)) {
            ans.append((char)next);
            next = in.read();
        }

        return ans.toString();
    }

    public static void main(String[] args) throws IOException {
        /* Open the input and output files. */
        BufferedReader input_file = new BufferedReader(new FileReader(
                "telein.txt"));
        BufferedWriter output_file = new BufferedWriter(new FileWriter(
                "teleout.txt"));

        /* Read the value of N and the instructions from the input file. */
        N = Integer.parseInt(readToken(input_file));
        instructions = readToken(input_file).toCharArray();

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
