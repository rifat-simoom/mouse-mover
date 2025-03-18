// main.c
#include <stdio.h>
#include <unistd.h>
#include "mouse_mover.h"  // Import the function

int main(void) {
    printf("Mouse mover started. Press Ctrl+C to stop.\n");

    while (1) {
        move_mouse();
        sleep(60);
    }

    return 0;
}
