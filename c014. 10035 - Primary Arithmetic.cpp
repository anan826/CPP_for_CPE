//Primary Arithmetic
#include <iostream> 
using namespace std;
int divide(int n, int num[], int &cnt){
	for(cnt=0;n!=0;cnt++){
		num[cnt]=n%10;
		n/=10;
	}
}
int main (){
	unsigned long long int x, y;
	while(cin >> x >> y){
		if(x==0 && y==0){
			break;
		}
		int lenA, lenB;
		int num1[11]={};
		int num2[11]={};
		int sum[12]={};
		
		divide(x, num1, lenA);
		divide(y, num2, lenB);
		int lenM =max(lenA, lenB);
		int ans=0;
		for(int i=0;i<lenM;++i){
			sum[i] += num1[i]+num2[i];
			if(sum[i]>=10){
				sum[i]-=10;
				sum[i+1]++;
				ans++;
			}
		}
		if(ans==0){
			cout << "No carry operation.\n";
		}else if(ans==1){
			cout << "1 carry operation.\n";
		}else{
			cout << ans << " carry operations.\n";
		}
	}
	return 0;
}
