//Текстовый файл состоит не более чем из 10^6 заглавных латинских букв (A..Z). 
//Текст разбит на строки различной длины. Определите количество строк, в которых буква C встречается чаще, чем буква O.

#include <iostream>
#include <string>
using namespace std;
int main(){
	freopen("s1.txt", "r", stdin);
	string s;
	int count = 0;
	while (cin >> s){
		int cc = 0;
		int co = 0;
		for (int i = 0; i < s.size(); i++){
			if (s[i] == 'C') cc++;
			if (s[i] == 'O') co++;
		}
		if (cc > co) count++;
	}
	cout << count;
}

//436
