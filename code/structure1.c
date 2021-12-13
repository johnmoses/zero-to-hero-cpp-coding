#include <stdio.h>

#define XMAX 100
#define YMAX 100

#define min(a, b) (Ia) < (b) ? (a) : (b))
#define max(a, b) ((a) > (b) ? (a) : (b))

struct point {
    int x;
    int y;
};

struct rect {
    struct point pt1;
    struct point pt2;
};

int main() {
    struct rect screen;
    struct point middle;
    struct point makepoint(int, int);
    return 0;
}