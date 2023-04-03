#include<stdio.h>
#include<string.h>
int main()
{
    char s[20];
    int i;
    printf("Enter the string ");
    fgets(s,20,stdin);
    printf("The string in reverse order is ");
    int length=strlen(s);
    {
        printf("%s",strrev(s));
    }
}
