#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>

/* Function to print */
int _putchar(char c);

/* Checks for uppercase */
int _isupper(int c);

/* Checks for digit 0-9 */
int _isdigit(int c);


/* Multiplies two integers */
int mul(int a, int b)

/* Prints numbers from 0-9 followed by a new line */
void print_numbers(void);

/* Prints numbers from 0-9 (except 2 and 4) followed by a new line */
void print_most_numbers(void);

/* Prints 10 times the numbers, from 0 to 14, followed by a new line */
void more_numbers(void);

/*  Draws a straight line in the terminal */
void print_line(int n);

/*  Draws a diagonal line on the terminal */
void print_diagonal(int n);

/* Prints a square, followed by a new line */
void print_square(int size);

/* Prints a triangle, followed by a new line */
void print_triangle(int size);

#endif /* MAIN_H */
