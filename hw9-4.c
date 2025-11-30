#include <stdio.h>

void rgbToHex(int red, int green, int blue, char hexCode[])
{
    if (red < 0) red = 0;
    if (red > 255) red = 255;
    if (green < 0) green = 0;
    if (green > 255) green = 255;
    if (blue < 0) blue = 0;
    if (blue > 255) blue = 255;

    sprintf(hexCode, "#%02X%02X%02X", red, green, blue);
}

int main()
{
    int red, green, blue;
    char hexCode[8];

    scanf("%d", &red);
    scanf("%d", &green);
    scanf("%d", &blue);

    rgbToHex(red, green, blue, hexCode);

    printf("The hex code is %s\n", hexCode);

    return 0;
}
