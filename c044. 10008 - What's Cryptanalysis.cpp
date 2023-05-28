//What's Cryptanalysis
#include <iostream>
//cctype可以不用 
using namespace std;
int count[256], len;
int main(){
	char c;
	while(cin >> c){
		len++;
		count[toupper(c)]++;
	}
	while(--len){
		//使用len--會顯示出0 
		for(c='A';c<='Z';c++){
			if(count[c]==len){
				cout << c << " " <<count[c] << "\n";
			}
		}
	}
	
	
	return 0;
}
