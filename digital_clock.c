#include <stdio.h>
#include <time.h>

int main() {
    while(1) {
        // Get the current time
        time_t currentTime = time(NULL);
        struct tm* tm = localtime(&currentTime);

        // Extract the hour, minute, and second
        int hour = tm->tm_hour;
        int minute = tm->tm_min;
        int second = tm->tm_sec;

        // Print the digital clock
        printf("%02d:%02d:%02d\n", hour, minute, second);

        // Wait for one second
        sleep(1);
    }
    
    return 0;
}
