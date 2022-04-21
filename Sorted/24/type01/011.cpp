//Текстовый файл содержит последовательность из символов «(» и «)», всего не более 10^6 символов. 
//Определите, с какого по счёту символа от начала файла начинается 10000-я пара скобок «()» (нумерация символов начинается с 1).

#include <iostream>
#include <string>
using namespace std;
int main(){
	freopen("j51.txt", "r", stdin);
	string s;
	cin >> s;
	int count = 0;
	for (int i = 0; i < s.size() - 1; i++){
		if (s[i] == '(' && s[i + 1] == ')') count++;
		if (count == 10000){
			cout << i + 1;
			break;
		}
	}
}

//39621
