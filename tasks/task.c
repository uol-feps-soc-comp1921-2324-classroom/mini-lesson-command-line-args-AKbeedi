#include <stdio.h>
#include <stdlib.h>
#include <ctype.h> 
/**
int main() {
    int num1, num2;

    // Prompt the user for input
    printf("Enter the first number: ");
    scanf("%d", &num1);

    printf("Enter the second number: ");
    scanf("%d", &num2);

    // Calculate and print the sum
    int sum = num1 + num2;
    printf("Sum: %d\n", sum);

    return 0; // Exit successfully
}
*/
int main(int argc, char *argv[]) {
    
    if (argc != 3)
    {
        printf("Usage: ./task <num1> <num2>\n");
        return 0; //return error message if the number of arguements is too many 
    }

    // Prompt the user for input
    

    // Calculate and print the sum
    int sum = (atoi(argv[1])) + (atoi(argv[2]));
    printf("Sum: %d\n", sum);

    return 0; // Exit successfully
}
