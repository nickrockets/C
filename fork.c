#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>


int main (int argc, char* argv[])
{
    int id = fork();
    printf("Hello world from id: %d\n", id);
    return 0;
}