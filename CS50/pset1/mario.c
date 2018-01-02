#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main(void) {
    //prompt the user for an integer
    printf("Number: ");
    int n = get_int();

    do {
         printf("Number: ");
        n = get_int();
    } while(n >= 23 || n < 0);




        char src[50], dest[50];
        string s = "#";
        strcpy(src,s);
        strcpy(dest,"#");



        for (int i = 0; i < n; i++) {
            for (int j = n - i; j > 0; j--) {
                printf(" ");
            }
            printf("%s  %s\n",s,s);
            s = strcat(src,dest);
        }


}