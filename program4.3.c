/*Declare variables within different code blocks (enclosed by curly braces) and test 
their accessibility within and outside those blocks. */

#include <stdio.h>

int globalVar = 100;// A global variable 

int main() 
{
    int mainVar = 10; // variable declared in main()

    printf("Global variable (accessible everywhere): %d\n", globalVar);
    printf("Main variable (inside main): %d\n", mainVar);

    {   // First block
        int block1Var = 20;
        printf("\nInside first block:\n");
        printf("Global variable: %d\n", globalVar);
        printf("Main variable: %d\n", mainVar);
        printf("Block1 variable: %d\n", block1Var);
    }

    // Uncommenting below line will give error as block1var is not accessible outside the first block 
    // printf("Block1 variable outside block: %d\n", block1Var);

    {   // Second block
        int block2Var = 30;
        printf("\nInside second block:\n");
        printf("Global variable: %d\n", globalVar);
        printf("Main variable: %d\n", mainVar);
        printf("Block2 variable: %d\n", block2Var);
    }

    // Uncommenting below line will give error as block2Var is not accessible outside the second block 
    // printf("Block2 variable outside block: %d\n", block2Var);

    printf("\nBack in main():\n");
    printf("Global variable: %d\n", globalVar);
    printf("Main variable: %d\n", mainVar);

    return 0;
}
