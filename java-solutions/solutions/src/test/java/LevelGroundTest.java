import org.junit.Test;

import com.aio.aio2020.levelground.LevelGround;

import static org.junit.Assert.assertEquals;

public class LevelGroundTest {

    @Test
    public void testLargest() {
        LevelGround levelGround = new LevelGround();

        // Test case 1: Array with all elements equal
        int[] arr1 = {3,2 ,1 ,2 ,2, 2, 1 };
        assertEquals(6, levelGround.largest(arr1));

        // Test case 2: Array with increasing elements
        int[] arr2 = {10,10,10};
        assertEquals(30, levelGround.largest(arr2));

        // // Test case 3: Array with decreasing elements
        int[] arr3 = {1,1,1,4};
        assertEquals(4, levelGround.largest(arr3));

        // // Test case 4: Array with alternating elements
        // int[] arr4 = {1, 2, 1, 2, 1};
        // assertEquals(2, levelGround.largest(arr4));

        // // Test case 5: Array with random elements
        // int[] arr5 = {3, 2, 5, 1, 4};
        // assertEquals(6, levelGround.largest(arr5));
    }
}