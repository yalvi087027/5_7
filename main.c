#include <stdio.h>
#include <stdlib.h>
#include <math.h>

const int N = 5;

int equal(int x, int y)
{
    if(x < 10)
    {
        if(x == y)
        {
            return 1;
        }else{
            return 0;
        }
    }
    int m = x%10;
    y = y - m;
    return equal(x/10,y);
}

int main()
{
    int n,m;
    scanf("%d %d",&n,&m);
    int k = equal(n,m);
    if(k == 1)
    {
        printf("da");
    }
    else
    {
        printf("net");
    }
}
