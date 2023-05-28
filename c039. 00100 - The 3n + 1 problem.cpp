//3n+1
#include <iostream>
using namespace std;
int main (){
	int a, b;
	int n;
	while (cin >> a >> b){
		int x, y;
		if(b<a){
			x = b;
			y = a;
		}else{
			x = a;
			y = b;
		}
		int count = 0;
		int maxCount = 0;
		for(int i=x;i<=y;i++){
			count =0;
			n = i;
			while (1) {
				count+=1;
				if(n==1){
					break;
				}else if(n%2!=0){
					n = 3 * n + 1;
				}else{
					n/=2;
				}
			}
			if(maxCount < count){
				maxCount = count;
			}
		}
		cout<< a << " " << b << " " << maxCount << "\n" ;
		}
	return 0;
}
