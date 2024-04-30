import org.junit.Test;

import com.aio.aio2022.beautifulbuildings.BeautifulBuilding;

import static org.junit.Assert.assertEquals;

public class BeautifulBuildingTest {

    @Test
    public void testMiniUgliness() {
        BeautifulBuilding beautifulBuilding = new BeautifulBuilding();

        // Test case 1: Array with all elements equal
        int[] arr1 = {80, 60, 10, 40, 70, 20};
        assertEquals(120, beautifulBuilding.miniUgliness(arr1));

        // Test case 2: Array with increasing elements
        int[] arr2 = {5,10,15};
        assertEquals(5, beautifulBuilding.miniUgliness(arr2));

        // // Test case 3: Array with decreasing elements
        int[] arr3 = {2,2,2};
        assertEquals(0, beautifulBuilding.miniUgliness(arr3));

        // // Test case 4: Array with alternating elements
        // int[] arr4 = {1, 3, 2, 4, 3, 5};
        // assertEquals(6, beautifulBuilding.miniUgliness(arr4));

        // // Test case 5: Array with random elements
        // int[] arr5 = {2, 5, 1, 4, 3};
        // assertEquals(6, beautifulBuilding.miniUgliness(arr5));
    }
}