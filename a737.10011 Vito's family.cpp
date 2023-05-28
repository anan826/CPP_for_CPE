//Vito's family
#include <iostream>
#include <vector> 
#include <algorithm>

using namespace std;
vector<int> num;
//宣告num為一個動態容器 
int main(){
	int n, r, s;
	//n幾個測資, r幾個親戚, s幾個街道 
	cin >> n;
	for(int i=1;i<=n;i++){
		cin >> r;
		num.clear();
		//清空num內的資料 
		for(int j=0;j<r;j++){
			cin >> s;
			num.push_back(s);
			//把輸入的s放到num最後面	
		}
		sort(num.begin(), num.end());
		//排列 
		int mid = num[r/2];
		//中位數 
		int all = 0;
		
		for(int k=0;k<r;k++){
			all+=abs(num[k]-mid);
		}
		//絕對值 
		cout << all <<"\n";
	}
	
	return 0;
} 
