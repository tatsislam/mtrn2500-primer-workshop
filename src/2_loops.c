#include <stdio.h>

int main(void)
{
    int counter = 0;

    // This expression is checked at the start of every loop
    while(counter < 10)
    {
        // This section runs repeatedly until the expression is false
        printf("This while loop has run %d times\n", counter);
        counter++;
    }

    for (int i = 0; i < 10; i++)
    {
        printf("This for loop has run %d times\n", i);
    }

}