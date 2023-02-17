#include <stdio.h>
int main()
{
    short a, s, i, j;

    printf("Enter 1 for triangular pattern:\n  2 for downword pyramind pattern:\n 3 for downward Triangle:\n 4 for pyramid pattern:\n 5 for dimond patter:\n 6 for x pattern:\n 7 for heart:\n 8 for plus Sign:\n 9 for print star in 8 pattern:\n 10 for triangle:\n");
    scanf("%d", &a);
    if (a == 1)
    {
        for (i = 1; i <= 5; i++)
        {
            for (j = 1; j <= i; j++)
            {
                // if(j>=i)
                //  {
                printf(" *");
                //  }
                // else{
                //  printf(" ");
                //  }
            }
            printf("\n");
        }
    }
    else if (a == 2)
    {
        for (i = 1; i <= 5; i++)
        {
            for (j = 1; j <= 5; j++)
            {
                if (j >= i)
                {
                    printf(" *");
                }
                else
                {
                    printf(" ");
                }
            }
            printf("\n");
        }
    }
    else if (a == 3)
    {
        for (i = 1; i <= 5; i++)
        {
            for (j = 1; j <= 5; j++)
            {
                if (j >= i)
                {
                    printf(" *");
                }
                else
                {
                    printf(" ");
                }
            }
            printf("\n");
        }
    }
    else if (a == 4)
    {
        for (i = 1; i <= 5; i++)
        {

            for (s = i; s < 5; s++)
            {
                printf(" ");
            }

            for (j = 1; j <= (2 * i - 1); j++)
            {
                printf(" *");
            }
            printf("\n");
        }
    }
    else if (a == 5)
    {
        for (i = 0; i <= 5; i++)
        {
            for (s = 5; s > i; s--)
            {
                printf(" ");
            }
            for (j = 0; j < i; j++)
            {
                printf("* ");
            }
            printf("\n");
        }
        for (i = 1; i < 5; i++)
        {
            for (s = 0; s < i; s++)
            {
                printf(" ");
            }
            for (j = 5; j > i; j--)
            {
                printf("* ");
            }
            printf("\n");
        }
    }
    else if (a == 6)
    {
        short n = 5, m;
        m = n * 2 - 1;
        for (i = 1; i <= m; i++)
        {
            for (j = 1; j <= m; j++)
            {
                if (j == i || j == (m - i + 1))
                {
                    printf(" *");
                }
                else
                {
                    printf(" ");
                }
            }
            printf("\n");
        }
    }
    else if (a == 7)
    {
        short x = 10;
        for (i = x / 2; i <= x; i += 2)
        {
            for (j = 1; j < x - i; j += 2)
            {
                printf(" ");
            }

            for (j = 1; j <= i; j++)
            {
                printf(" *");
            }

            for (j = 1; j <= x - i; j++)
            {
                printf(" ");
            }

            for (j = 1; j <= i; j++)
            {
                printf(" *");
            }

            printf("\n");
        }

        for (i = x; i >= 1; i--)
        {
            for (j = i; j < x; j++)
            {
                printf(" ");
            }

            for (j = 1; j <= (i * 2) - 1; j++)
            {
                printf(" *");
            }

            printf("\n");
        }
    }
    else if (a == 8)
    {
        short N = 5;
        for (i = 1; i <= (N * 2 - 1); i++)
        {

            if (i == N)
            {
                for (j = 1; j <= (N * 2 - 1); j++)
                {
                    printf("* ");
                }
            }
            else
            {

                for (j = 1; j <= N - 1; j++)
                {
                    printf(" ");
                }
                printf("* ");
            }

            printf("\n");
        }
    }
    else if (a == 9)
    {
        short size = 10;
        for (i = 1; i < size * 2; i++)
        {
            for (j = 1; j <= size; j++)
            {

                if ((i == 1 && (j == 1 || j == size)) ||
                    (i == size && (j == 1 || j == size)) ||
                    (i == size * 2 - 1 && (j == 1 || j == size)))
                {
                    printf(" ");
                }
                else if (i == 1 || i == size || i == (size * 2) - 1 || j == 1 || j == size)
                {
                    printf(" *");
                }
                else
                {
                    printf(" ");
                }
            }

            printf("\n");
        }
    }
    else if (a == 10)
    {
        short r=10;
        for (i = 1; i <= r; i++)
        {

            for (s = i; s < r; s++)
                printf(" ");

            for (j = 1; j <= (2 * r - 1); j++)
            {
                if (i == r || j == 1 || j == 2 * i - 1)
                    printf(" *");
                else
                    printf(" ");
            }

            printf("\n");
        }
    }
    return 0;
}