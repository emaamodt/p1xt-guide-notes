#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main(void) {

    int digits_by_two = 0;
    int other_digits = 0;

    //Ask the user for a credit card number
    printf("Credit card number:\n");
    long long card_number = get_long_long();

    //Get every other digit, starting with the last digit, and add them together
    for (long long i = card_number; i > 0 ; i /= 100) {

        other_digits += i % 10;
    }

    //Get every other digit, starting with the second to last digit
    for (long long j = card_number/10; j > 0; j /= 100) {
        //Multiply each digit by 2. Take the product and add the digits together
        for (int k = 2 * (j % 10); k > 0; k /= 10) {
            digits_by_two += k % 10;
        }
    }

    //Add the two sums together and see if the sum is divisible by 10
    int sum = (digits_by_two + other_digits) % 10;

    //If the sum ends in a zero, return "INVALID"
    if (sum != 0 ) {
        printf("INVALID\n");
    }

    //If the card ends in zero, it is valid
    else {
        //Get the first two digits of the card
        while (card_number >= 100) {
            card_number = card_number / 10;
        }
        //If the first digit is 4, return "VISA"
        if (card_number / 10 == 4) {
            printf("VISA\n");
        }
        //Based on the first two numbers, return "AMEX," "MasterCard," or "VALID"
        else {
            switch (card_number) {
                case 34:
                case 37:
                    printf("AMEX\n");
                    break;
                case 51:
                case 52:
                case 53:
                case 54:
                case 55:
                    printf("MasterCard\n");
                    break;
                default:
                    printf("VALID\n");
                    break;
            }
        }

    }
}