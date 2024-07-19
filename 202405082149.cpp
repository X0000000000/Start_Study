//统计天数
#include<iostream>
int main()
{
    int N,sum=1,i,j;
    scanf("%d",&N);
    int a=0,a1,b;
    for(i=0;i<N;i++)
    {
        a1=a;
        scanf("%d",&a);
        b=0;
        for(j=i;a1<a;j--)
        {
            a1=a;
            scanf("%d",&a);
            b++;
        }
        if(b>sum)
        sum=b;
    }
    printf("%d",sum+1);
    return 0;
}
