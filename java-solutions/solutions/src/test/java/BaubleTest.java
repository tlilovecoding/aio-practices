import org.junit.Test;

import com.aio.aio2020.baubles.Bauble;

import static org.junit.Assert.assertEquals;

public class BaubleTest {
    
    @Test
    public void testGetNum() {
        Bauble bauble = new Bauble();
        
        // Test case 1: Spare + redO is less than redT, and spare + blueO is less than blueT
        int[] vals1 = {4,2,1,2,2};
        assertEquals(2, bauble.getNum(vals1));
        
        // Test case 2: Spare + redO is greater than redT, and spare + blueO is less than blueT
        int[] vals2 = {5,5,10,6,6};
        assertEquals(9, bauble.getNum(vals2));
        
        // Test case 3: Spare + redO is less than redT, and spare + blueO is greater than blueT
        int[] vals3 = {5, 6, 2, 100, 0};
        assertEquals(0, bauble.getNum(vals3));
        
        // Test case 4: Spare + redO is greater than redT, and spare + blueO is greater than blueT
        int[] vals4 = {10, 8, 0, 5, 6};
        assertEquals(3, bauble.getNum(vals4));

        int[] vals5 = {3,4,0,2,2};
        assertEquals(2, bauble.getNum(vals5));

        int[] vals6 = {3,4,1,2,2};
        assertEquals(3, bauble.getNum(vals6));

        int[] vals7 = {5,7,1,2,6};
        assertEquals(3, bauble.getNum(vals7));
    }
}