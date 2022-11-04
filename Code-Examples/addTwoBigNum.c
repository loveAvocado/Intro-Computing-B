#include<stdio.h>
#include<string.h>
int main()
{
    char str1[1006],str2[1006],t,i;
    int num1[1006],num2[1006];
    scanf("%d",t);
    int big_int(char str1[],char str2[],int num1[],int num2[]);
    for(i=1;i<=t;i++)
    {
        memset(num1,0,sizeof(num1));
        memset(num2,0,sizeof(num2));
        printf("Case %d:\n",i);
        scanf("%s %s",str1,str2);
        big_int(str1,str2,num1,num2);
        if(i-t)//C语言中只有0代表假，负数和正数均为真
        {
            putchar(10);//打印换行
            putchar(10);
        }
    }
    return 0;
}
int big_int(char str1[],char str2[],int num1[],int num2[])
{
    printf("%s + %s = ",str1,str2);
    int i,j,len1=strlen(str1),len2=strlen(str2),lenmax;
    lenmax=len1>=len2?len1:len2;
    for(i=len1-1,j=0;i>=0;i--,j++)
    {
        num1[j]=str1[i]-'0';
    }
    for(i=len2-1,j=0;i>=0;i--,j++)
    {
        num2[j]=str2[i]-'0';
    }
    for(i=0;i<lenmax;i++)
    {
        num1[i]+=num2[i];
        if(num1[i]>=10)
        {
            num1[i]-=10;
            num1[i+1]+=1;
        }
    }
    if(num1[lenmax])
    {
        printf("%d",num1[lenmax]);
    }
    for(i=lenmax-1;i>=0;i--)
    {
        printf("%d",num1[i]);
    }
}
