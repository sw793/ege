//Текстовый файл состоит не более чем из 10^6 заглавных латинских букв (A..Z). 
//Текст разбит на строки различной длины. Определите количество строк, в которых буква A встречается столько же раз, сколько и буква B.

#include <iostream>
#include <string>
using namespace std;
int main(){
	freopen("s1.txt", "r", stdin);
	string s;
	int count = 0;
	while (cin >> s){
		int ca = 0;
		int cb = 0;
		for (int i = 0; i < s.size(); i++){
			if (s[i] == 'A') ca++;
			if (s[i] == 'B') cb++;
		}
		if (ca == cb) count++;
	}
	cout << count;
}

//42
