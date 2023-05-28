//Summing Digits
#include <iostream>
#include <cstring>
#include <cstdio>
using namespace std;
int main (){
	char n[11];
	while(scanf("%s", n) && n[0]!=48){
		while(strlen(n)!=1){
			int i=0, F=0;
			for(i=0;i<strlen(n);i++){
				F+=(n[i]-48);
			}
			memset(n, '\0', 11);
			sprintf(n, "%d", F);
		}
		printf("%s\n", n);
	}
	
	return 0;
}
