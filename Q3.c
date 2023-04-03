#include<stdio.h>
#include<string.h>
int main()
{
    char s[20];
    int i,j=0;
    printf("Enter the string \n");

scanf("%s",s);
fflush;
    for(i=0;s[i]!='\0';i++)
    {
        if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U')
        j++;
    }
    printf("the vowels are %d",j);
}
