//Текстовый файл содержит последовательность из символов «(» и «)», всего не более 10^6 символов. 
//Определите, каким по счёту символом от начала файла окажется 1000-я закрывающая скобка «)» (нумерация символов начинается с 1).

#include <iostream>
#include <string>
using namespace std;
int main(){
	freopen("files/j51.txt", "r", stdin);
	string s;
	cin >> s;
	int count = 0;
	for (int i = 0; i < s.size(); i++){
		if (s[i] == ')') count++;
		if (count == 1000){
			cout << i + 1;
			break;
		}
	}
}

//1998
