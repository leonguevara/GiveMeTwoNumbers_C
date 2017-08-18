/*
 *   GiveMeTwoNumbers_C
 *   main.c
 *
 *   This program will ask the user for two whole numbers and two real numbers.  It will show
 *   the addition, subtraction, multiplication, division and remainder of division of the two
 *   whole numbers, as well as the division of both numbers treated as real numbers.
 *
 *   It will also show the addition, subtraction, multiplication and division of the two real
 *   numbers.
 *
 *   C Standard: C99
 *
 *   Author: León Felipe Guevara Chávez
 *   email:  leon.guevara@itesm.mx
 *   date:   May 25th, 2017
 */
#include <stdio.h>

int main() {
    int wholeNumber1, wholeNumber2;     // To collect two whole numbers from the user
    double realNumber1, realNumber2;    // To collect two real numbers from the user
                                        // We used double but we could have used single
                                        // or float

    printf("Give me two whole numbers:\n");     // We ask for two whole numbers
    scanf("%i %i", &wholeNumber1, &wholeNumber2); // We collect the two whole numbers using
                                                // one instruction.  How awesome is that?

    printf("Give me two real numbers:\n");      // We ask for two real numbers
    scanf("%lf %lf", &realNumber1, &realNumber2);   // We collect the two real numbers using
                                                // one instruction

    printf("\n=== Whole numbers:\n");           // We added this line just to group and separate our output
    printf("%i + %i = %i\n", wholeNumber1, wholeNumber2, wholeNumber1 + wholeNumber2);      // Addition
    printf("%i - %i = %i\n", wholeNumber1, wholeNumber2, wholeNumber1 - wholeNumber2);      // Subtraction
    printf("%i * %i = %i\n", wholeNumber1, wholeNumber2, wholeNumber1 * wholeNumber2);      // Multiplication
    printf("%i / %i = %i\n", wholeNumber1, wholeNumber2, wholeNumber1 / wholeNumber2);      // Integer division
    printf("%i mod %i = %i\n", wholeNumber1, wholeNumber2, wholeNumber1 % wholeNumber2);    // Division remainder
    printf("%f / %f = %f (cast as real)\n", (double)wholeNumber1, (double)wholeNumber2,
           (double)wholeNumber1 / (double)wholeNumber2);                                    // Real division

    printf("\n=== Real numbers:\n");            // We added this line just tu group and separate our output
    printf("%f + %f = %f\n", realNumber1, realNumber2, realNumber1 + realNumber2);          // Addition
    printf("%f - %f = %f\n", realNumber1, realNumber2, realNumber1 - realNumber2);          // Addition
    printf("%f * %f = %f\n", realNumber1, realNumber2, realNumber1 * realNumber2);          // Addition
    printf("%f / %f = %f\n", realNumber1, realNumber2, realNumber1 / realNumber2);          // Addition

    return 0;  // Exit main with code 0
}