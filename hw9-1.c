#include <stdio.h>

int main()
{
    int a[2][2];
    int i, j;
    double det = 0;

    printf("Enter the elements of a 2x2 matrix:\n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("You entered:\n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    det = a[0][0] * a[1][1] - a[0][1] * a[1][0];

    printf("Determinant is %.6lf\n", det);

    return 0;
}
