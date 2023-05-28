#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main (){
	int arr[500];
	int n,r,s;
	cin >> n;
	for(int i=1;i<=n;i++){
		cin >> r;
		for(int j=0;j<r;j++){
			cin >>arr[j]; 
			s+=1;
		}
		sort(arr, arr+r);
		int mid = s/2;
		int all=0; 
		for(int k=0;k<s;k++){
			all += abs(arr[k]-arr[mid]);	
		}
		cout << all << "\n";
		r = 0;
		s = 0;
		
	}
	return 0;
} 
