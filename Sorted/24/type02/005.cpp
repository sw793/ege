//(А.М. Кабанов) В текстовом файле находится цепочка из символов латинского алфавита A, B, C, D, E, F. 
//Найдите длину самой длинной подцепочки, не содержащей гласных букв.

#include <iostream>
#include <string>
using namespace std;
int main(){
	freopen("files/k7a-6.txt", "r", stdin);
	string s;
	cin >> s;
	int count = 0;
	int max = -1;
	for (int i = 0; i < s.size(); i++){
		if (s[i] != 'A' && s[i] != 'E'){
			count++;
			if (count > max) max = count;
		}
		else count = 0;
	}
	cout << max;
}

//20
