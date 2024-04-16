package com.aio.aio2021.RobotVacuum;

import java.io.*;

class Solution {

    /* K is the number of instructions. */
    private static int K;

    /* instrs contains the sequence of instructions. */
    private static char instrs[] = new char[100005];

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
                "C:/Ting/Study/aio-practices/java-solutions/solutions/src/main/java/com/aio/aio2021/RobotVacuum/robotin.txt"));
        BufferedWriter output_file = new BufferedWriter(new FileWriter(
                "C:/Ting/Study/aio-practices/java-solutions/solutions/src/main/java/com/aio/aio2021/RobotVacuum/robotout.txt"));

        /*
         * Read the value of K and the sequence of instructions from the input
         * file.
         */
        K = Integer.parseInt(readToken(input_file));
        instrs = readToken(input_file).toCharArray();

        /*
         * TODO: This is where you should compute your solution. Store the
         * fewest number of instructions you need to add to the end of the
         * sequence into the variable answer.
         */

        /* Write the answer to the output file. */
        output_file.write(answer + "\n");

        /* Finally, close the input/output files. */
        input_file.close();
        output_file.close();
    }
}
