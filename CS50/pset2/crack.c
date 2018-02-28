#define _XOPEN_SOURCE
#include <unistd.h>
#include <string.h>
#include <crypt.h>
#include <cs50.h>
#include <stdio.h>

int main (int argc, string argv[])
{
    if (argc != 2)
    {
        printf("Please enter a hashed password.\n");
        return 1;
    }

    string hash = argv[1];
    char* salt = "50";
    char password[6] = {};

    printf("Hacking in progress...");

    //One character passwords
    for (int i = 65; i < 123; i++)
    {
        if (i > 90 && i < 97) continue;
        password[0] = i;
        password[1] = '\0';
        if (strcmp(hash,crypt(password,salt)) == 0)
        {
            printf("Password: %s\n",password);
            return 0;
        }
    }

    //Two character passwords
    for (int i = 65; i < 123; i++)
    {
        if (i > 90 && i < 97) continue;
        for (int j = 65; j < 123; j++)
        {
            if (j > 90 && j < 97) continue;
            password[0] = i;
            password[1] = j;
            password[2] = '\0';
            if (strcmp(hash,crypt(password,salt)) == 0)
            {
                printf("Password: %s\n",password);
                return 0;
            }
        }
    }

    //Three character passwords
    for (int i = 65; i < 123; i++)
    {
        if (i > 90 && i < 97) continue;
        for (int j = 65; j < 123; j++)
        {
            if (j > 90 && j < 97) continue;
            for (int k = 65; k < 123; k++)
            {
                if (k > 90 && k < 97) continue;
                password[0] = i;
                password[1] = j;
                password[2] = k;
                password[3] = '\0';
                if (strcmp(hash,crypt(password,salt)) == 0)
                {
                    printf("Password: %s\n",password);
                    return 0;
                }
            }
        }
    }

    //Four character passwords
    for (int i = 65; i < 123; i++)
    {
        if (i > 90 && i < 97) continue;
        for (int j = 65; j < 123; j++)
        {
            if (j > 90 && j < 97) continue;
            for (int k = 65; k < 123; k++)
            {
                if (k > 90 && k < 97) continue;
                for (int l = 65; l < 123; l++)
                {
                    if (l > 90 && l < 97) continue;
                    password[0] = i;
                    password[1] = j;
                    password[2] = k;
                    password[3] = l;
                    password[4] = '\0';
                    if (strcmp(hash,crypt(password,salt)) == 0)
                    {
                        printf("Password: %s\n",password);
                        return 0;
                    }
                }
            }
        }
    }

    //Five character passwords
    for (int i = 65; i < 123; i++)
    {
        if (i > 90 && i < 97) continue;
        for (int j = 65; j < 123; j++)
        {
            if (j > 90 && j < 97) continue;
            for (int k = 65; k < 123; k++)
            {
                if (k > 90 && k < 97) continue;
                for (int l = 65; l < 123; l++)
                {
                    if (l > 90 && l < 97) continue;
                    for(int m = 65; m < 123; m ++)
                    {
                        if (m > 90 && m < 97) continue;
                        password[0] = i;
                        password[1] = j;
                        password[2] = k;
                        password[3] = l;
                        password[4] = m;
                        password[5] = '\0';
                        if (strcmp(hash,crypt(password,salt)) == 0)
                        {
                            printf("Password: %s\n",password);
                            return 0;
                        }
                    }

                }
            }
        }
    }
}
