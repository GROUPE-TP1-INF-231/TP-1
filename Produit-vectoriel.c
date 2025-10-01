#include <stdio.h>

int main() {
    float ax, ay, az;
    float bx, by, bz;
    float cx, cy, cz;

    printf("Entrez A (Ax Ay Az) : ");
    scanf("%f %f %f", &ax, &ay, &az);

    printf("Entrez B (Bx By Bz) : ");
    scanf("%f %f %f", &bx, &by, &bz);

    cx = ay*bz - az*by;
    cy = az*bx - ax*bz;
    cz = ax*by - ay*bx;

    printf("A x B = (%.2f, %.2f, %.2f)\n", cx, cy, cz);
    return 0;
}