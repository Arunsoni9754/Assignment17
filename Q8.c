#include<stdio.h>
#include<string.h>
int main()
{
    char s[20],h[20];
    int i;
    printf("Enter the string ");
    fgets(s,20,stdin);
    strcpy(h,s);
    for(i=0;h[i]!='\0';i++)
    {
        printf("%c",h[i]);
    }
}
