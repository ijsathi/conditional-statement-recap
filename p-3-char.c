#include <stdio.h>
int main()
{
    char lower;
    scanf("%c", &lower);
    if(lower>='a' && lower<='z')
    {
        int chr = lower - 32;
        printf("%c", chr);
    }
    else {
        int chr2 = lower + 32;
        printf("%c", chr2);
    }
    return 0;
}