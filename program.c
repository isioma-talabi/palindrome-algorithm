#include <stdio.h>


int main(void) {
    /*Declare variables as integers*/

    int number; /*number entered by the user*/
    int original; /*copy of the number left unchanged*/
    int digit; /*last digit taken off the number*/
    long long reversed = 0; /*digits rebuilt in reverse order*/

    /*Input*/
    printf("Enter a whole number: ");
    scanf("%d", &number);

    /*Negative numbers are not treated as palindromes (the '-' sign would end up at the wrong end when reversed)*/
    if (number < 0) {
        printf("%d is NOT a palindrome. \n", number);
        return 0;
    }

    original = number;
    /*Process: remove the last difit and append it to the 'reversed' variable until no digits are left*/

    while (number > 0) {
        digit = number % 10; /*get the last digit*/
        reversed = reversed * 10 + digit; /*add it to the reverse*/
        number = number / 10; /*drop the last digit*/
    }

    printf("Reversed number: %lld\n", reversed);

    /*Decision: compare the reversed value with the original*/
    if (original == reversed) {
        printf("%d IS a palindrome. \n", original);
    } else {
        printf("%d is NOT a palindrome. \n", original);
    }
    
    return 0;
}