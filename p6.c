#include<stdio.h>
int main()
{
    char s1[45],s2[37];
    int i,j,c=0;
    printf("enter the two string:");
    scanf("%s%s",&s1,&s2);
    for(i=0;s1[i]!='\0';i++)
    {
        for(j=0;s2[j]!='\0';j++)
        {
            if(s1[i]==s2[j])
            {
                c=c+1;
            }
        }
    }
    if(c>=2)
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }
    
}
