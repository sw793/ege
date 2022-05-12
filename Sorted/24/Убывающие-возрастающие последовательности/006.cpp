/* (А. Кабанов) Текстовый файл содержит строку из заглавных букв A, B, C, D, E, F, 
всего не более чем из 10^6 символов. 
D-подстроками назовём последовательности идущих подряд символов D, 
ограниченные иными символами. Определите минимальную длину D-подстроки.*/

#include <iostream>
#include <string>
using namespace std;
int main(){
	freopen("files/153.txt", "r", stdin);
	string s;
	cin >> s;
	int min = 10000;
	int count = 1;
	for (int i = 0; i < s.size() - 1; i++){
		if (s[i] == 'D' && s[i + 1] == 'D')
			count++;
		else{
			if ((count < min) && count != 1 && min != 1) min = count;
			count = 1;
		} 
	}
	cout << min;
}

// 5
