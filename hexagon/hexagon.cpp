#include<stdio.h>

void hexagon(int hexagonSize)
{
    for (int r = 0; r < hexagonSize; r++)
    {
        for (int s = 0; s <= hexagonSize - r; s++)
        {
            printf(" ");
        }

        for (int i = 0; i < hexagonSize; i++)
        {
            if (r == 0) {
                printf("* ");
            }
            else if (r > 0 && hexagonSize == 2)
            {
                printf("*");
                for (int s = 0; s < (hexagonSize * 2 - 3) + r * 2; s++)
                {
                    printf(" ");
                }
            }
            else if (r > 0)
            {
                if (i == 0 || i == hexagonSize - 1)
                {
                    printf("*");
                }
                else
                {
                    for (int s = 0; s < (hexagonSize * 2 - 3) + r * 2; s++)
                    {
                        printf(" ");
                    }
                    i = hexagonSize - 2;
                }
            }
        }
        printf("\n");
    }

    for (int r = 0; r <= hexagonSize; r++)
    {
        for (int s = 0; s <= r; s++)
        {
            printf(" ");
        }

        for (int i = 0; i < hexagonSize; i++)
        {
            if (r == hexagonSize)
            {
                printf("* ");
            }
            else if (r == 0 && hexagonSize == 1)
            {
                printf("* *");
            }
            else if (r >= 0 && hexagonSize == 2)
            {
                printf("*");
                for (int s = 0; s < (hexagonSize * 4 - 3) - r * 2; s++)
                {
                    printf(" ");
                }
            }
            else if (r >= 0)
            {
                if (i == 0 || i == hexagonSize - 1)
                {
                    printf("*");
                }
                else
                {
                    for (int s = 0; s < (hexagonSize * 4 - 3) - r * 2; s++)
                    {
                        printf(" ");
                    }

                    i = hexagonSize - 2;
                }
            }
        }
        printf("\n");
    }
}

int main()
{
    int hexagonSize;
    printf(" Enter number for Hexagon size : ");
    scanf_s("%d", &hexagonSize);
    hexagon(hexagonSize);
    return 0;
}