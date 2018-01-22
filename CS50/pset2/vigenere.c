#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>


int main(int argc, string argv[])
{

    //If the user does not include a key, display an error message and quit
    if (argc != 2)
    {
        printf("Please enter a key.\n");
        return 1;
    }
    else
    {
        for (int j = 0, x = strlen(argv[1]); j < x; j++)
        {
            if ( !isalpha(argv[1][j]))
            {
                printf("Key must only contain alphabetical characters.\n");
                return 1;
            }
        }
    }

    //get the length of the key variable and set up a variable to iterate across the length
    string key = argv[1];
    int key_len = strlen(argv[1]) - 1;
    int k = 0;
    int keyletter;

    //get a message from the user
    string p;

    do
    {
        printf("plaintext: ");
        p = get_string();
    }
    while (strlen(p) == 0);

    printf("ciphertext: ");
    //Loop through each character in the message
    for (int i = 0, n = strlen(p); i < n; i++)
    {

        //If the character is a letter then add k's modulo26 value to the plaintext letter's value value and print the result
        if (isalpha(p[i]))
        {

            keyletter = toupper(key[k]) - 'A';

            //Keep the character's original case
            if isupper(p[i])
            {
                printf("%c", (char) 'A' + ((toupper(p[i] - 'A') + keyletter) % 26));
            }
            else
            {
                printf("%c", (char) 'a' + ((tolower(p[i] - 'a') + keyletter) % 26));
            }

            //Continuously loop through the numbers represented by the key
            if (k < key_len)
            {
                k++;
            }
            else
            {
                k = 0;
            }
        }

        //If the character is not a letter, just print it out as is
        else
        {
            printf("%c", p[i]);
        }
    }
    printf("\n");
}
