//(А.М. Кабанов) В текстовом файле находится цепочка из символов латинского алфавита A, B, C, D, E, F. 
//Найдите длину самой длинной подцепочки, не содержащей символа D.

#include <iostream>
#include <string>
using namespace std;
int main(){
	freopen("files/k7a-4.txt", "r", stdin);
	string s;
	cin >> s;
	int max = -1;
	int count = 0;
	for (int i = 0; i < s.size(); i++){
		if (s[i] != 'D'){
			count++;
			if (count > max) max = count;
		}
		else count = 0;
	}
	cout << max;
}

// 44
