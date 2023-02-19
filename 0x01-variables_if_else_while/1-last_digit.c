#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Determine if the last digit of a random number is
 * greater than or less than 5, or is zero..
(*
 * Return: 0 on success
 */
int main(void)
{
0-positive_or_negative.c int n;
0-positive_or_negative.c char last[] = "Last digit of";

0-positive_or_negative.c srand(time(0));
0-positive_or_negative.c n = rand() - RAND_MAX / 2;
0-positive_or_negative.c printf("%s %d is %d and is ", last, n, n % 10);
0-positive_or_negative.c if (n % 10 > 5)
0-positive_or_negative.c {
0-positive_or_negative.c 0-positive_or_negative.c printf("greater than 5\n");
0-positive_or_negative.c }
0-positive_or_negative.c else if (n % 10 == 0)
0-positive_or_negative.c {
0-positive_or_negative.c 0-positive_or_negative.c printf("0\n");
0-positive_or_negative.c }
0-positive_or_negative.c else
0-positive_or_negative.c {
0-positive_or_negative.c 0-positive_or_negative.c printf("less than 6 and not 0\n");
0-positive_or_negative.c }
0-positive_or_negative.c return (0);

}
