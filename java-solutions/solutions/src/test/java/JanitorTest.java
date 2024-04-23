import org.junit.Test;

import com.aio.aio2018.Janitor;

import static org.junit.Assert.assertEquals;

public class JanitorTest {

    @Test
    public void testFills() {
        Janitor janitor = new Janitor();

        // Test case 1: Empty matrix
        int[][] matrix1 = {
                { 5, 3, 2, 0 },
                { 4, 8, 4, 3 },
                { 5, 7, 6, 1 }
        };
        assertEquals(2, janitor.fills(matrix1));

        matrix1[1][2] = 1;
        assertEquals(3, janitor.fills(matrix1));


        matrix1[2][0] = 2;
        assertEquals(3, janitor.fills(matrix1));


        matrix1[1][2] = 9;
        assertEquals(2, janitor.fills(matrix1));

        // Test case 2: Matrix with all elements filled
        // int[][] matrix2 = {
        // {1, 2, 3},
        // {4, 5, 6},
        // {7, 8, 9}
        // };
        // assertEquals(0, janitor.fills(matrix2));

        // // Test case 3: Matrix with some elements filled
        // int[][] matrix3 = {
        // {1, 0, 3},
        // {0, 5, 0},
        // {7, 0, 9}
        // };
        // assertEquals(4, janitor.fills(matrix3));

        // // Test case 4: Matrix with no elements filled
        // int[][] matrix4 = {
        // {0, 0, 0},
        // {0, 0, 0},
        // {0, 0, 0}
        // };
        // assertEquals(9, janitor.fills(matrix4));

        // // Test case 5: Matrix with negative values
        // int[][] matrix5 = {
        // {-1, -2, -3},
        // {-4, -5, -6},
        // {-7, -8, -9}
        // };
        // assertEquals(0, janitor.fills(matrix5));
    }
}