//Decode the Mad man
#include <iostream>
#include <cstring>
using namespace std;
int main (){
	char c, s[]=
	"`1234567890-="
	"qwertyuiop[]\\"
	"asdfghjkl;'"
	"zxcvbnm,./";
	while (cin.get(c)){
	//�ϥ�cin.get(c)����]�O�]��cin.get()���禡�|Ū�� *�r��* �ӫD�r��Acin�h�OŪ�� *�r��* �P *�ƭ�*,
	//�p�G�nŪ���@���A�N�ϥ�getline()��� 
		c=tolower(c);
		char *p = strchr(s,c);
		//���strchr�d��s���Ĥ@���X�{c�r������m,�ê�^�Ӧ�m�����w, �p�G�S���h��^NULL���w
		//�N��N�O�b�r��s���M��c�r���Ĥ@���X�{����m,�M��N�Ӧ�m�����w��ȵ�`p`�ܼ�,�p�G�S�����h��^NULL���w 
		//*p �O���w p �ҫ��V�����s�a�}�W�s�x���ȡA�� p �O���V���s�a�}�����w�ܼƥ����C
		//²��ӻ��A*p ����X�� p ���V���O�����m�W����(value)�A�� p �h�O���V�o�ӰO�����m�����w�C
		if(p){
//			cout << (p)<<"\n";
			//cout<< *p;
			cout << *(p-2);
		}else{
			cout <<c;
		}
	}
	return 0;
}
