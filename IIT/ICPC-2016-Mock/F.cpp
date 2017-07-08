#include <cstdio>
#include <unordered_map>

using namespace std;

int main()
{
	int T, Q, type;	
	unsigned long long  pid, rid;
	
	scanf("%d", &T);
	
	while(T--){
		
		unordered_map<unsigned long long, unsigned long long> mp;
		
		scanf("%d", &Q);
		while(Q--){
			scanf("%d", &type);
			if(type == 1){
				scanf("%lld %lld", &pid, &rid);
				if(mp[rid] == 0){
					printf("Y\n");
					mp[rid] = pid;					
				}
				else {
					printf("N\n");
				}
			}
			else if (type == 2) {
				scanf("%lld", &rid);
				if(mp[rid] == 0){
					printf("F\n");
				}
				else {
					printf("%llu\n", mp[rid]);
					mp[rid] = 0;
				}
			}
		}
	}

	return 0;
}
