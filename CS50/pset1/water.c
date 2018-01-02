#include <stdio.h>
#include <cs50.h>

int main(void) {
    printf("How many minutes did you shower for? \n");
    float h = get_float();

    printf("Minutes: %0.0f\nBottles: %0.0f\n", h,(h * 1.5 * 129) / 16);
}
