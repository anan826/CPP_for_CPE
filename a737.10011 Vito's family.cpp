//Vito's family
#include <iostream>
#include <vector> 
#include <algorithm>

using namespace std;
vector<int> num;
//�ŧinum���@�ӰʺA�e�� 
int main(){
	int n, r, s;
	//n�X�Ӵ���, r�X�ӿ˱�, s�X�ӵ�D 
	cin >> n;
	for(int i=1;i<=n;i++){
		cin >> r;
		num.clear();
		//�M��num������� 
		for(int j=0;j<r;j++){
			cin >> s;
			num.push_back(s);
			//���J��s���num�̫᭱	
		}
		sort(num.begin(), num.end());
		//�ƦC 
		int mid = num[r/2];
		//����� 
		int all = 0;
		
		for(int k=0;k<r;k++){
			all+=abs(num[k]-mid);
		}
		//����� 
		cout << all <<"\n";
	}
	
	return 0;
} 
