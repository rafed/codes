#include <cstdio>

int main(){

    float hr, mins, degHr, degMins, deg;

    while(scanf("%f:%f", &hr, &mins) && (hr!=0 || mins!=0)){
		degHr=(hr*30)+(mins/2);
		degMins=mins*6;
		if(degMins > degHr) deg=degMins-degHr;
		else deg = degHr-degMins;
		if(deg>180) deg=360-deg;
		printf("%.3f\n", deg);
    }

	return 0;

}
