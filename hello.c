//C program to print "Hello World!"
#include <stdio.h>

int main() {
    char *name;
    printf("Hello World!\n");
    
    printf("What is your first name: ");
    scanf("%s", name);

    printf("Happy Coding %s!\n", name);

    return 0;
}