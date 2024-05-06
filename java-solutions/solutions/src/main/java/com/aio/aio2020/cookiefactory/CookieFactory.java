package com.aio.aio2020.cookiefactory;

public class CookieFactory {
    int days;
    int cookies = 0;
    int dailyProductivity;
    int f1Needs;
    int f1Increase;
    boolean f1Bought = false;
    int f2Needs;
    int f2Increase;
    boolean f2Bought = false;

    public int getMostCookies() {
        int cDay = 1;
        while (cDay <= days) {
            // the first day must produce some cookies
            if (cDay == 1) {
                produceAndMoveon(cDay);
                continue;
            }
            // if nothing to do, just produce and move on
            if ((f1Bought || cookies < f1Needs) && (f2Bought || cookies < f2Needs)) {
                produceAndMoveon(cDay);
                continue;
            }
            // if only f1 is avaiable and afforadable, check and decide
            if ((!f1Bought && cookies >= f1Needs) && (f2Bought || cookies < f2Needs)) {
                int dayleft = days - cDay;
                int newProductivity = dailyProductivity + f1Increase;
                if (dayleft * dailyProductivity < dayleft * newProductivity - f1Needs) {
                    f1Bought = true;
                    dailyProductivity += f1Increase;
                }
                produceAndMoveon(cDay);
                continue;
            }

            if ((!f2Bought && cookies >= f2Needs) && (f1Bought || cookies < f1Needs)) {
                int dayleft = days - cDay;
                int newProductivity = dailyProductivity + f1Increase;
                if (dayleft * dailyProductivity < dayleft * newProductivity - f2Needs) {
                    f2Bought = true;
                    dailyProductivity += f1Increase;
                }
                produceAndMoveon(cDay);
                continue;
            }

            
        }
        return cookies;
    }

    private void produceAndMoveon(int cDay) {
        cookies += dailyProductivity;
        cDay++;
    }
}
