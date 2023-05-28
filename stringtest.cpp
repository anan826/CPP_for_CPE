#include <iostream>
#include <vector>
using namespace std;
vector<char> str;
int main(){
	char c;
	while(cin.get(c) && c!='\n'){
		str.push_back(c);
	}
	for(int i=0;i<str.size();i++){
		cout << str[i] << " ";
	}
	return 0;
}
//利用動態分布將輸入的字串個別以字元的方式儲存至陣列0,1,2,3,,4,5,6.... 
