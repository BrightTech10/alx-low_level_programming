#ifndef MAIN_H
#define MAIN_H

/* Concatenates two strings */
char *_strcat(char *dest, char *src);

/* Concatenates two strings using n bytes */
char *_strncat(char *dest, char *src, int n);

/* Copies a string */
char *_strncpy(char *dest, char *src, int n);

/* Compares two strings */
int _strcmp(char *s1, char *s2);

/* Reverses the content of an array of integers */
void reverse_array(int *a, int n);

/* Changes all lowercase letters of a string to uppercase */
char *string_toupper(char *);

/* Capitalizes all words of a string */
char *cap_string(char *);

/* Encodes a string */
char *leet(char *);

/* Encodes a string */
char *rot13(char *);

/* Prints an integer */
void print_number(int n);

/* Adds two numbers */
char *infinite_add(char *n1, char *n2, char *r, int size_r);

/* Prints a buffer */
void print_buffer(char *b, int size);



#endif /* MAIN */
