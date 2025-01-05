
#include <stdio.h>
#include <math.h>

int main() {
    int H, L;
    // Input H and L
    scanf("%d %d", &H, &L);

    // Calculate depth using the derived formula
    double depth = sqrt((double)H * H + (double)L * L) - H;

    // Print the result with high precision
    printf("%.6lf\n", depth);

    return 0;
}