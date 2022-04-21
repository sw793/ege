//Текстовый файл содержит последовательность из символов «(» и «)», 
//всего не более 10^6 символов. Определите количество пар скобок «()» в этом файле.  

#include <iostream>
#include <string>
using namespace std;
int main(){
	freopen("51.txt", "r", stdin);
	string s;
	cin >> s;
	int count = 0;
	for (int i = 0; i < s.size() - 1; i++)
		if(s[i] == '(' && s[i + 1] == ')') count++;
	cout << count;
}

//226732
