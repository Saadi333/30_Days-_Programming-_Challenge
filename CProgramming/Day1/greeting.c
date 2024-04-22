#include <stdio.h>

int main() {
    char name[50];  // Assuming the name will not exceed 49 characters

    // Prompt the user to enter their name
    printf("Saad Abdullah: ");
    
    // Read the name entered by the user
    scanf("%s", name);  

    // Print a personalized greeting
    printf("Hello, %s! Welcome to the world of C programming!\n", name);

    return 0;
}
