#include <stdio.h>
#include <string.h>

char* timeConversion(char* s) {
    int hour = (s[0] - '0') * 10 + (s[1] - '0');
    int minute = (s[3] - '0') * 10 + (s[4] - '0');
    int second = (s[6] - '0') * 10 + (s[7] - '0');
    char am_pm = s[8];

    if (am_pm == 'P' && hour != 12) {
        hour += 12;
    } else if (am_pm == 'A' && hour == 12) {
        hour = 0;
    }

    sprintf(s, "%02d:%02d:%02d", hour, minute, second);
    return s;
}

int main() {
    char s[12];
    gets(s);
    printf("%s\n", timeConversion(s));
    return 0;
}
