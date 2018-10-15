/* Example code for Think OS.
Copyright 2015 Allen Downey
License: Creative Commons Attribution-ShareAlike 3.0
*/

#include <stdio.h>
#include <stdlib.h>

int global;

int times_called()
{
    static int counter = 0;
    counter++;
    return counter;
}

int main ()
{
    int local = 5;
    int local2 = 6;
    void *p = malloc(128);
    void *q = malloc(128);
    char *s = "Hello, World";

    times_called();
    int caller = times_called();

    printf ("Address of main is %p\n", main);
    printf ("Address of global is %p\n", &global);
    printf ("Address of local is %p\n", &local);
    printf ("Address of local2 is %p\n", &local2);
    printf ("Address of times_called is %p\n", &times_called);
    printf ("p points to %p\n", p);
    printf ("q points to %p\n", q);
    printf ("s points to %p\n", s);
    printf ("times_called was called %i times.\n", caller);
    
    return 0;
}