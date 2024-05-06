import org.junit.Test;

import com.aio.aio2020.ghost.GhostEncounter;

import static org.junit.Assert.assertEquals;

public class GhostEncounterTest {

    @Test
    public void testGetMaxA() {
        GhostEncounter ghostEncounter = new GhostEncounter(4);
        ghostEncounter.addGhost(1, 2);
        ghostEncounter.addGhost(2, 6);
        ghostEncounter.addGhost(2, 9);

        // Test case 1: No ghosts added
        assertEquals(2, ghostEncounter.getMax());
    }


    @Test
    public void testGetMaxB() {
        GhostEncounter ghostEncounter = new GhostEncounter(1);
        ghostEncounter.addGhost(2, 4);
        ghostEncounter.addGhost(3, 3);
        ghostEncounter.addGhost(4, 6);
        ghostEncounter.addGhost(7, 7);

        // Test case 1: No ghosts added
        assertEquals(2, ghostEncounter.getMax());
    }

    @Test
    public void testGetMaxC() {
        GhostEncounter ghostEncounter = new GhostEncounter(2);
        ghostEncounter.addGhost(1, 5);
        ghostEncounter.addGhost(1, 5);
        ghostEncounter.addGhost(1, 5);
        ghostEncounter.addGhost(2, 5);
        ghostEncounter.addGhost(2, 5);

        // Test case 1: No ghosts added
        assertEquals(3, ghostEncounter.getMax());
    }
}