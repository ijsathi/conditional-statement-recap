#include <stdio.h>
int main()
{
    char upper;
    scanf("%c", &upper);
    if(upper>='A' && upper<='Z')
    {
        int chr = upper + 32;
        printf("%c", chr);
    }
    else {
        int chr2 = upper - 32;
        printf("%c", chr2);
    }
    return 0;
}