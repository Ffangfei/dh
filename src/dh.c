#include"dh.h"


int GET_Y(int a,int q,int X)
{
    int Y=1;
    while(X!=0)
    {
        Y=Y*a;
        Y=Y%q;
        X--;
    }
    return Y;
}

int GET_K(int Y,int X,int q)
{
    int K=1;
    while(X!=0)
    {
        K=K*Y;
        K=K%q;
        X--;
    }
    return K;
}