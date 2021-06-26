#include<stdio.h>
#include<string.h>
int main()
{
    char S[1000];
    int i,t,len;
    scanf("%d\n",&t);
    for(i=0;i<t;i++)
    {
        gets(S);
        len = strlen(S);
        if(len<=10)
            printf("%s\n",S);
        else
            printf("%c%d%c\n",S[0],len-2,S[len-1]);
    }
    return 0;
}
