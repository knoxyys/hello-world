#include <stdio.h>
#include <cs50.h>

int main(void)
{
    string answer = get_string("what's your name? "); // var name is answer
    printf("hello, %s\n", answer);

    int x = get_int("x int: ");
    int y = get_int("y int: ");
    if (x < y)
    {
        printf("second bigger");
    } else if { //this broken
        if (x > y)
        printf("first bigger");
    } else if {
        printf(x, " and ", y)
    }
}

// cc hello.c -o hello cs50.c
// make hello.c
//./hello