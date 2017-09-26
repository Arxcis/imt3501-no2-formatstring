#include <stdio.h>
#include <stdlib.h>

#define SECRET1 0x44
#define SECRET2 0x55

int main(int argc, char *argv[]) 
{
    char user_input[100];
    int *secret;  // Stack pointer 
    int int_input;
    int a,b,c,d;

    secret = (int *) malloc(2 * sizeof(int));  // Heap pointers

    secret[0] = SECRET1; 
    secret[1] = SECRET2;

    // Print all secret variable addresses
    printf("The variable secret's address is 0x%8x (on stack )\n", (unsigned int)&secret);
    printf("The variable secret's address is 0x%8x (on heap )\n",  (unsigned int)secret);
    printf("Var0 address is 0x%8x (on heap )\n",                   (unsigned int)&secret[0]);
    printf("Var1 address is 0x%8x (on heap )\n",                   (unsigned int)&secret[1]);


    printf("Please enter a decimal integer\n");
    scanf("%d", &int_input);
    printf("Please enter a string\n");
    scanf("%s", user_input);

    // Vurnerable place
    printf(user_input, "junk");  // junk is to circumvent -Wformat-security
    printf("\n");

    // The verdict
    printf("The original secrets: 0x%x -- 0x%x\n", SECRET1, SECRET2);
    printf("The new secrets: 0x%x -- 0x%x\n", secret[0], secret[1]);
}



