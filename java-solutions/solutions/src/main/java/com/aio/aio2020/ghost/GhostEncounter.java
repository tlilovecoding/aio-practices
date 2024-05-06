package com.aio.aio2020.ghost;

import java.util.ArrayList;
import java.util.List;

public class GhostEncounter {
    int speedPerMeter;

    public GhostEncounter(int speed) {
        speedPerMeter = speed;
    }

    List<Ghost> ghosts = new ArrayList<>();

    public void addGhost(int meter, int second) {
        Ghost ghost = new Ghost(meter, second);
        ghosts.add(ghost);
    }

    int max = 0;

    public int getMax() {
        for (int i = 0; i < ghosts.size(); i++) {
            if (max >= ghosts.size() - i) {
                break;
            }
            int cnt = 1;
            int second = ghosts.get(i).second;
            int meter = ghosts.get(i).meter;
            for (int j = i + 1; j < ghosts.size(); j++) {
                int dist = ghosts.get(j).meter - meter;
                int timeGap = ghosts.get(j).second - second;
                if (timeGap < 0) {
                    continue;
                }
                if (dist * speedPerMeter == timeGap) {
                    meter = ghosts.get(j).meter;
                    second =  ghosts.get(j).second;
                    cnt++;
                }
            }
            max = Math.max(max, cnt);
        }
        return max;
    }

    class Ghost {
        int meter;
        int second;

        public Ghost(int meter, int second) {
            this.meter = meter;
            this.second = second;
        }
    }
}
