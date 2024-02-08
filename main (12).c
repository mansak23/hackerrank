#include <stdio.h>

int main()
{
    int flag[10],n,m,j=0,i,res;
    char s[10];
    printf("enter the number of test cases and length of th string\n");
    scanf("%d%d",&n,&m);
    printf("enter the string\n");
    scanf("%s",s);
    for(i=0;i<m;i++)
    {
        if(s[i]=='B')
        {
            flag[j]=i;
            printf("%d",flag[j]);
            j++;
            
        }
    }
    res=(flag[j-1]-flag[0])+1;
    printf("\n%d",res);
    return 0;
}
