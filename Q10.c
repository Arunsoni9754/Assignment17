#include<stdio.h>
#include<string.h>
int main()
{
    int i,c,n,j;
    char s[20];
    printf("Enter any string ");
    fgets(s,20,stdin);
    fflush;
    n=strlen(s);
    for(i=0;i<n-1;i++)
    { c=1;
        for(j=i+1;j<n;j++)
        {
            if(s[i]==s[j]||s[j]==' ')
            {
                c++;
                s[j]='\0';
            }
        }
      if(s[i]!='\0')
        printf("The occurence of %c is %d \n",s[i],c);    }
}
