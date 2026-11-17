#include <stdio.h>

int main()
{
    int roll;
    char name[50];
    float marks;

    FILE *fptr;

    fptr = fopen("marks.txt", "r");

    if (fptr == NULL)
    {
        printf("Error: File Not Found!");
    }
    else
    {
        printf("Roll No\tName\tMarks\n");
        printf("-------------------------\n");

        while (fscanf(fptr, "%d %49s %f", &roll, name, &marks) == 3)
        {
            printf("%d\t%s\t%.2f\n", roll, name, marks);
        }

        fclose(fptr);
    }

    return 0;
}
