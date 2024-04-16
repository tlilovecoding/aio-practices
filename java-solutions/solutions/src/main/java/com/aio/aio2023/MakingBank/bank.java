package com.aio.aio2023.MakingBank;

import java.io.*;

class Solution {

    /* N is the number of days. */
    private static int N;

    /* days contains the type of each day. */
    private static char days[] = new char[100005];

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

    private static int makeMoney() {
        int skill = 1;
        int money = 0;
        for (int i = 0; i < N; i++) {
            if (days[i] == 'M') {
                money += skill;
            } else {
                if (N - i > skill) {
                    skill++;
                } else {
                    money += skill;
                }
            }
        }
        return money;
    }

    public static void main(String[] args) throws IOException {
        /* Open the input and output files. */
        BufferedReader input_file = new BufferedReader(new FileReader(
                "C:/Ting/Study/aio-practices/java-solutions/solutions/src/main/java/com/aio/aio2023/makingbank/bankin.txt"));
        BufferedWriter output_file = new BufferedWriter(new FileWriter(
                "C:/Ting/Study/aio-practices/java-solutions/solutions/src/main/java/com/aio/aio2023/makingbank/bankout.txt"));

        /*
         * Read the value of N and the string of characters from the input file.
         */
        N = Integer.parseInt(readToken(input_file));
        days = readToken(input_file).toCharArray();

        /*
         * TODO: This is where you should compute your solution. Store the most
         * money that you can retire with into the variable answer.
         */

        answer = makeMoney();

        /* Write the answer to the output file. */
        output_file.write(answer + "\n");

        /* Finally, close the input/output files. */
        input_file.close();
        output_file.close();
    }
}
