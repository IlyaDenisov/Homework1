#include <stdio.h>

int main()
{
    char a;
    while ((a = getchar())
        && a != '\n'
        && a != '\0')
    {
        switch (a)
        {
        case '.':
            printf(" | ");
            break;
        case '0':
        case '1':
        case '2':
        case '3':
        case '4':
        case '5':
        case '6':
        case '7':
        case '8':
        case '9':
            printf("%c", a);
        case '-':
        case ' ':
            printf("");
            break;
        default:
            printf("ERROR\n\n");
        }
    }
    printf("\n");
}