#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    int meaning_of_life = 42;

    unsigned int always_positive = -15;

    printf("%u\n", always_positive);

    // Usually 64 bit (accurate to around 10-12 decimal places)
    double pi = 3.141595456;

    // Usually 32 bit (accurate around 5-6 decimal places)
    float e = 2.718;

    char a = 'a';

    char b[100] = "Hello world!";

    printf("%s\n", b);

    // Not a primitive
    bool am_i_happy = false; 
}