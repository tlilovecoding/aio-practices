import org.junit.Test;

import com.aio.aio2021.hippo.HippoDistance;

import static org.junit.Assert.*;

public class HippoDistanceTest {

    @Test
    public void testHowMany() {
        HippoDistance hippoDistance = new HippoDistance();

        // Test case 1: Empty meals array
        int[] meals1 = {3,2,3};
        int dist1 = 1;
        assertEquals(2, hippoDistance.howMany(meals1, dist1));

        // Test case 2: Single meal
        int[] meals2 = {1,3,7};
        int dist2 = 2;
        assertEquals(3, hippoDistance.howMany(meals2, dist2));

        // // Test case 3: Distances between meals are all greater than dist
        int[] meals3 = {3,5,1,12,10};
        int dist3 = 4;
        assertEquals(3, hippoDistance.howMany(meals3, dist3));

        // // Test case 4: Distances between meals are all less than dist
        // int[] meals4 = {1, 2, 3, 4};
        // int dist4 = 5;
        // assertEquals(1, hippoDistance.howMany(meals4, dist4));

        // // Test case 5: Distances between meals are a mix of greater and less than dist
        // int[] meals5 = {1, 3, 5, 7, 9};
        // int dist5 = 3;
        // assertEquals(5, hippoDistance.howMany(meals5, dist5));
    }
}