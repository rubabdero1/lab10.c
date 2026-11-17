
#include <stdio.h>
#include <string.h>

int main()
{
    char username[50], password[50];
    char saveduser[50], savedpass[50];

    FILE *fptr;

    printf("Enter Username: ");
    scanf("%49s", username);

    printf("Enter Password: ");
    scanf("%49s", password);

    fptr = fopen("credentials.txt", "r");

    if (fptr == NULL)
    {
        printf("Credentials file not found!");
    }
    else
    {
        fscanf(fptr, "%49s %49s", saveduser, savedpass);

        if (strcmp(password, savedpass) == 0)
        {
            printf("Access Granted!");
        }
        else
        {
            printf("Access Denied!");
        }

        fclose(fptr);
    }

    return 0;
}
