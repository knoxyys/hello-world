#include <stdio.h>
#include <cs50.h>

int main(void)
{
    string answer = get_string("what's your name? "); // var name is answer
    printf("hello, %s\n", answer);
}

// cc hello.c -o hello cs50.c
// make hello.c
//./hello