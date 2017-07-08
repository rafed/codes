#include <cstdio>

using namespace std;

int main()
{
    int T;
    int l, b, h;
    int maxVol, maxHeight;

    while(scanf("%d", &T)==1 && T)
    {
    	maxVol = -999;
    	maxHeight = -999;
        
        for(int i=0;i<T;i++)
        {
            scanf("%d %d %d", &l, &b, &h);
            if(h>maxHeight)
            {
            	maxHeight = h;
            	maxVol = l*b*h;
            }
            else if(h == maxHeight)
            {
            	int temp = l*b*h;
            	if(temp > maxVol) maxVol = temp;
            }
        }
        
        printf("%d\n",maxVol);
    }

    return 0;
}
