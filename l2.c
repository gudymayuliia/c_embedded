#include <stdio.h>
#include <math.h>

#define PI 3.14159265358979323846
//variant 7

int main() {
    double pi = PI;
    
    printf("z1 = cos^2(3π/8 - a/4) - cos^2(11π/8 + a/4)\n");
    printf("z2 = (sqrt(2) / 2) * sin(a/2)\n");

    double alpha = 45.0;
    //dividing z1 into two parts
    double angle1 = (3 * pi / 8) - (alpha / 4);
    double angle2 = (11 * pi / 8) + (alpha / 4); 
    //raising cos to a power of 2
    double z1 = pow(cos(angle1), 2) - pow(cos(angle2), 2);

    printf("z1 = %f\n", z1);

    double z2 = (sqrt(2.0) / 2.0) * sin(alpha/ 2.0); 
    printf("z2 = %f\n", z2);

    return 0;
}

