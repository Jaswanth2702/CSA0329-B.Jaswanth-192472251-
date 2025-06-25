#include <stdio.h>
int main() {
    char open, close;
    printf("Enter an opening bracket: ");
    scanf(" %c", &open); 
    printf("Enter a closing bracket: ");
    scanf(" %c", &close);
    if ((open == '(' && close == ')') ||
        (open == '{' && close == '}') ||
        (open == '[' && close == ']')) {
        printf("It is a Valid pair!\n");
    } else {
        printf("It is an Invalid pair!\n");
    }
	return 0;
}
