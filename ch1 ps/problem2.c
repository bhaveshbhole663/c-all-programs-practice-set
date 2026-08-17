#include <stdio.h>

int main() {
    int r = 5;
    int h = 40;
    float area,volume;
    area = 3.14*r*r;
    printf("Area of the circle is %f\n", area);
    volume = area*h;
    printf("Volume of the cylinder is %f\n", volume);
    return 0;
}