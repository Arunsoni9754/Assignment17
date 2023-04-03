#include<stdio.h>
#include<string.h>
int main()
{
    char s[100];
    int i,j=0;
    printf("Enter the string \n");

scanf("%s",s);
fflush;
    for(i=0;s[i]!='\0';i++)
    {
        if(s[i]==" ")
        s[i]='\n';
        j++;
    }
    printf("%s",s);
    printf("the length of the string is %d",j);
}
