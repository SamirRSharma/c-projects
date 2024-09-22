#include <stdio.h>
#include <cs50.h>

int main(void)
{
    string name = get_string("Whats your name? ");
    // stores a string with the users name
    printf("hello, %s\n", name);
    // prints "Hello, users name"
}