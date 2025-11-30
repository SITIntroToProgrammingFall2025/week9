#include <stdio.h>
#include <math.h>
#include <string.h>

typedef struct {
    char name[10];
    int r, g, b;
} Color;

double computeDistance(int r1, int g1, int b1, int r2, int g2, int b2) {
    return sqrt(pow(r1 - r2, 2) + pow(g1 - g2, 2) + pow(b1 - b2, 2));
}

int main() {
    Color basicColors[] = {
        {"Black", 0, 0, 0},
        {"White", 255, 255, 255},
        {"Red", 255, 0, 0},
        {"Green", 0, 255, 0},
        {"Blue", 0, 0, 255}
    };
    int numColors = sizeof(basicColors) / sizeof(basicColors[0]);

    int r, g, b;
    scanf("%d", &r);
    scanf("%d", &g);
    scanf("%d", &b);

    double minDistance = INFINITY;
    char nearestColor[10];

    for (int i = 0; i < numColors; i++) {
        double distance = computeDistance(r, g, b, basicColors[i].r, basicColors[i].g, basicColors[i].b);
        if (distance < minDistance) {
            minDistance = distance;
            strcpy(nearestColor, basicColors[i].name);
        }
    }

    printf("The nearest color is %s\n", nearestColor);

    return 0;
}
