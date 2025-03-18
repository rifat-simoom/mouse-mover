// mouse_mover.c
#include <stdio.h>
#include <unistd.h>
#include <X11/Xlib.h>

void move_mouse() {
    Display *display = XOpenDisplay(NULL);
    if (display == NULL) {
        fprintf(stderr, "Cannot open display\n");
        return;
    }

    Window root = DefaultRootWindow(display);
    int x, y;
    XQueryPointer(display, root, &root, &root, &x, &y, &x, &y, (unsigned int[]){0});

    XWarpPointer(display, None, root, 0, 0, 0, 0, x + 5, y);
    XFlush(display);
    usleep(200000); // 0.2 seconds
    XWarpPointer(display, None, root, 0, 0, 0, 0, x, y);
    XFlush(display);

    XCloseDisplay(display);
}
