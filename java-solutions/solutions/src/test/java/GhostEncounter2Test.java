import org.junit.Test;

import com.aio.aio2020.ghost.GhostEncounter2;

import static org.junit.Assert.assertEquals;

public class GhostEncounter2Test {

    @Test
    public void testGetMaxA() {
        GhostEncounter2 ghostEncounter2 = new GhostEncounter2();
        int[] meters = {1, 2, 2};
        int[] seconds = {2, 6, 9};

        // Test case 1: No ghosts added
        assertEquals(2, ghostEncounter2.getMax(4, meters, seconds));
    }

    @Test
    public void testGetMaxB() {
        GhostEncounter2 ghostEncounter2 = new GhostEncounter2();
        int[] meters = {2, 3, 4, 7};
        int[] seconds = {4, 3, 6, 7};

        // Test case 1: No ghosts added
        assertEquals(2, ghostEncounter2.getMax(1, meters, seconds));
    }

    @Test
    public void testGetMaxC() {
        GhostEncounter2 ghostEncounter2 = new GhostEncounter2();
        int[] meters = {1, 1, 1, 2, 2};
        int[] seconds = {5, 5, 5, 5, 5};

        // Test case 1: No ghosts added
        assertEquals(3, ghostEncounter2.getMax(2, meters, seconds));
    }
}
