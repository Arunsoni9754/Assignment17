#include<stdio.h>
int main()
{
    int i;
    char s[100];
    printf("Enter any string");
    gets(s);
    while(s[i]!='\0')
    {
        if(s[i]>='A' && s[i]<='Z')
        {
            s[i]=s[i]+32;
        }
        i++;
    }
    printf("THE STRING IS %s",s);

    return 0;
}
