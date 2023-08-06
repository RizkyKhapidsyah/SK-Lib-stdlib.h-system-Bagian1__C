#pragma warning(disable:4996)

#include <stdio.h>      
#include <stdlib.h>     
#include <conio.h>

/*
    Source by CPlusPlus (https://www.cplusplus.com)
    Modified For Learn by RK
    I.D.E : VS2022
*/

int main() {
    int i;

    printf("Checking if processor is available...");
    
    if (system(NULL)) {
        puts("Ok");
    } else {
        exit(EXIT_FAILURE);
    }

    printf("Executing command DIR...\n");
    
    i = system("dir");
    
    printf("The value returned was: %d.\n", i);
    
    getch();
    return 0;
}