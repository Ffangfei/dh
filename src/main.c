#include<stdio.h>
#include"dh.h"

int main()
{
    int a,q,X,Y,K;
    a=2;
    q=17;
    printf("本地选择的X是：");
    scanf("%d",&X);
    Y=GET_Y(a,q,X);
    printf("本次产生的公钥Y是：%d\n",Y);
    printf("输入对方的公钥：");
    scanf("%d",&Y);
    K=GET_K(Y,X,q);
    printf("本次产生的公共秘钥K是：%d\n",K);
    return 0;
}