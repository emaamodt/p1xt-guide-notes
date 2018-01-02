#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>

int main(void) {
    printf("What is your name?\n");
    string name = get_string();


    if (name != NULL) {
        for (int i = 0, n = strlen(name); i < n; i++) {
            if ((i == 0 && name[i] != ' ') || (name[i-1] == ' ' && name[i] != ' ')) {

                printf("%c",toupper(name[i]));
            }
        }
    }
}