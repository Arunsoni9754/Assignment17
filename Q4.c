#include<string.h>
#include<stdio.h>
int main()
{
    char s[20];
    int i=0;
    printf("Enter the string ");
fgets(s,20,stdin);
    while(s[i]!='\0')
    {
        if(s[i]>='a'&& s[i]<='z')
        {s[i]=s[i]-32;}
        i++;
    }

    printf("The upper case string is %s",s);
}
