//Текстовый файл состоит не более чем из 10^6 заглавных латинских букв (A..Z). 
//Текст разбит на строки различной длины. Определите количество строк, в которых буква O встречается чаще, чем буква C.

#include <iostream>
#include <string>
using namespace std;
int main(){
	freopen("files/s1.txt", "r", stdin);
	string s;
	int count = 0;
	while (cin >> s){
		int co = 0;
		int cc = 0;
		for (int i = 0; i < s.size(); i++){
			if (s[i] == 'O') co++;
			if (s[i] == 'C') cc++;
		}
		if (co > cc) count++;
	}
	cout << count;

}

//368
