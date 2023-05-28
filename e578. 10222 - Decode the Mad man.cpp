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
	//使用cin.get(c)的原因是因為cin.get()的函式會讀取 *字元* 而非字串，cin則是讀取 *字串* 與 *數值*,
	//如果要讀取一整行，就使用getline()函數 
		c=tolower(c);
		char *p = strchr(s,c);
		//函數strchr查找s中第一次出現c字元的位置,並返回該位置的指針, 如果沒找到則返回NULL指針
		//意思就是在字串s中尋找c字元第一次出現的位置,然後將該位置的指針賦值給`p`變數,如果沒有找到則返回NULL指針 
		//*p 是指針 p 所指向的內存地址上存儲的值，而 p 是指向內存地址的指針變數本身。
		//簡單來說，*p 能夠訪問 p 指向的記憶體位置上的值(value)，而 p 則是指向這個記憶體位置的指針。
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
