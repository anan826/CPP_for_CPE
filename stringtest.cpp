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
//�Q�ΰʺA�����N��J���r��ӧO�H�r�����覡�x�s�ܰ}�C0,1,2,3,,4,5,6.... 
