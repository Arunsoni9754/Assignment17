#include<stdio.h>
#include<string.h>
int main()
{
    char s[20];
    char k;
    printf("Enter the string ");
scanf("%s",s);
fflush;
    int i,n,j;

    n=strlen(s);
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(s[i]>s[j])
            {
                k=s[i];
                s[i]=s[j];
                s[j]=k;
            }
        }
    }
    printf("The array after sorting is:");
            printf("%s",s);
}
