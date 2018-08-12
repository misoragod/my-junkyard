#include <stdio.h>
#include <sys/time.h>
#include <wiringPi.h>
#include <unistd.h>

// Which GPIO pin we're using
#define PIN 5
// How much time a change must be since the last in order to count as a change
#define IGNORE_CHANGE_BELOW_USEC 10000

// Current state of the pin
static volatile int state;


int main(void) {
        wiringPiSetup();

	// Set pin to output in case it's not

        pinMode(PIN, INPUT);
        pullUpDnControl (PIN, PUD_DOWN) ;

	for (;;) {
		sleep(2);
	}
}
