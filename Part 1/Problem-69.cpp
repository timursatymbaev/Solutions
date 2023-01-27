/*
  Write a function that takes the time as three integer arguments (hours, minutes and seconds) and returns the number of seconds.
  Use this function to calculate the amount of time between two given times, both of which are within one 12-hour cycle of the clock.
*/

#include <iostream>

using namespace std;

int clock (int h, int m, int s) {
    s = (h * 60 + m) * 60 + s;
    return s;
}
int main ()
{
    int h1, m1, s1, h2, m2, s2;
    cin >> h1 >> m1 >> s1;
    cin >> h2 >> m2 >> s2;
    s1 = clock (h1, m1, s1);
    s2 = clock (h2, m2, s2);
    s1 = s2 - s1;
    h1 = s1 / 3600;
    s1 = s1 - h1 * 3600;
    m1 = s1 / 60;
    s1 = s1 - m1 * 60;
    cout << (h1 < 10 ? "0" : "") << h1 << ":" << (m1 < 10 ? "0" : "") << m1 << ":" << (s1 < 10 ? "0" : "") << s1;
}
