import org.junit.Test;

import com.aio.aio2018.StreetConstruction;

import static org.junit.Assert.assertEquals;

public class StreetConstructionTest {

    @Test
    public void testSmallest() {
        StreetConstruction streetConstruction = new StreetConstruction();

        assertEquals(1, streetConstruction.smallest(3, 1));

        assertEquals(0, streetConstruction.smallest(3, 3));

        assertEquals(4, streetConstruction.smallest(8, 1));

        assertEquals(2, streetConstruction.smallest(7, 2));

        // Test case 5: Chunks = 0, Parks = 0
        assertEquals(0, streetConstruction.smallest(0, 0));
    }
}