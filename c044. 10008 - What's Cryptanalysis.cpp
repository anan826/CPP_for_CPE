//What's Cryptanalysis
#include <iostream>
//cctype�i�H���� 
using namespace std;
int count[256], len;
int main(){
	char c;
	while(cin >> c){
		len++;
		count[toupper(c)]++;
	}
	while(--len){
		//�ϥ�len--�|��ܥX0 
		for(c='A';c<='Z';c++){
			if(count[c]==len){
				cout << c << " " <<count[c] << "\n";
			}
		}
	}
	
	
	return 0;
}
