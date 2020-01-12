#include<stdio.h>

int main()
{
    char x='A';

    if(x=='a' || x=='e' || x=='i' || x=='o' || x=='u' || x=='A' || x=='E' || x=='I' || x=='O' || x=='U')
    {
        printf("%c is vowel\n",x);
    }
    else
    {
        printf("%c is consonant\n",x);
    }
    return 0;
}
