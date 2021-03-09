#include<stdio.h>
#include<stdlib.h>
#define N 1000+5
int v[N];
int main()
{
    int n,m;
    scanf("%d%d",&n,&m);
    for (int i=1;i<=n;i++)
        scanf("%d",&v[i]);
    int soma=0;
    for (int i=1;i<n;i++)
    {
        soma+=abs(v[i]-m);
        v[i+1]+=m-v[i];
        v[i]=m;
    }
    printf("%d\n",soma);
    return 0;
}