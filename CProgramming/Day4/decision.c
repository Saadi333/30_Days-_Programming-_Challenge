#include <stdio.h>

int main() {
    char choice;

    printf("Are you feeling hungry (h) or tired (t)? ");
    scanf(" %c", &choice);

    if (choice == 'h') {
        printf("Go grab a snack!\n");
    } else if (choice == 't') {
        printf("Take a nap or rest for a bit.\n");
    } else {
        printf("That's not a valid choice. Try 'h' or 't'.\n");
    }

    return 0;
}
