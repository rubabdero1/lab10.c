#include <stdio.h>
#include <string.h>

int main()
{
    char feedback[200];
    char updated[300] = "";

    printf("Enter customer feedback: ");
    fgets(feedback, sizeof(feedback), stdin);

    printf("Total characters: %d\n", strlen(feedback));

    if (strstr(feedback, "good") != NULL)
        printf("Positive sentiment found!\n");

    if (strstr(feedback, "bad") != NULL)
        printf("Negative sentiment found!\n");

    if (strstr(feedback, "bad") != NULL)
    {
        char *ptr = strstr(feedback, "bad");

        strncat(updated, feedback, ptr - feedback);
        strcat(updated, "not good");
        strcat(updated, ptr + 3);

        strcpy(feedback, updated);

        printf("Updated Review: %s", feedback);
    }

    return 0;
}
