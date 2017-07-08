#include<stdio.h>

int main()
{
    long long int a, b;
    while(scanf("%lld %lld", &a, &b)==2)
    {
        if(a<0||b<0) break;
        if(a>b) printf("%lld\n", a-b);
        else printf("%lld\n", b-a);
    }
    return 0;
}
