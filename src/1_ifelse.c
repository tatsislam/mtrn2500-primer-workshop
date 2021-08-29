#include <stdio.h>

int main(int argc, char *argv[])
{
    int my_wam = 63;

    // This statement is either true or false
    if (my_wam == 63)
    {
        // This statement is only executed if the statement is true
        printf("My WAM is %d\n", my_wam);
    }


    /* Else if example */
    if (my_wam < 65)
    {
        printf("Pass\n");
    }
    else if (my_wam < 75)
    {
        printf("Credit\n");
    }
    else // This is executed if all the above statements are false
    {
        printf("Overachiever\n");
    }

    return 0;
}