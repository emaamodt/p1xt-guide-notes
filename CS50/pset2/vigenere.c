#include <stdio.h>
#include <cs50.h>
#include <string.h>


int main(int argc, string argv[]) {
    //get a message from the user
    printf("plaintext:\n");
    string p = get_string();

    //get the length of the key variable and set up a variable to iterate across the length
    int k = 0;
    int key_len = strlen(argv[1]);

    //If the user does not include a key, display and error message and quit
    if (argc != 2) {
        printf("Please enter a key.\n");
        return 1;
    }

    //Loop through each character in the message
    for (int i = 0, n = strlen(p); i < n; i++) {

        //If the character is a letter then add k to that letter's ASCII code value and print the result
        if (p[i] >= 'A' && p[i] <= 'z') {
            printf("%c",(char) p[i] + k);

            //Continuously loop through the numbers represented by the key
            if (k < key_len - 1) {
                k++;
            }
            else {
                k = 0;
            }
        }

        //If the character is not a letter, just print it out as is
        else {
            printf("%c",p[i]);
        }
    }
}