#include <stdio.h>

int main()
{
    int marks[2][4] = {{2, 3, 5, 7},{2, 4, 7, 9}};

    // for(int i = 0; i < 4; i++)
    // {
    //     printf("Ente the value of marks %d of students \n", i);
    //     scanf("%d", &marks[i]);
    // }

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 4; j++)
        {

            // printf("The value of marks %d,%d of students is %d \n", i, j,  marks[i][j]);
            printf("%d", marks[i][j]);
        }
        printf("\n");
    }

    // marks[0] = 91;
    // marks[1] = 77;
    // marks[2] = 82;
    // marks[3] = 47;
    // printf("the marks of th student-1 is %d ", marks[0]);

    return 0;
}