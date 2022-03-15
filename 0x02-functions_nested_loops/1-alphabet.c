#include <stdio.h>

/**
 *main - check the code
 *Return: Always 0
*/
int main(){
    print_alphabet(0);
    return (0);
}

void print_alphabet(void)
{
    int x = 'a';
    while (x <= 'z')
    {
        putchar(x);
        x++;
    }
    putchar('\n');
}
