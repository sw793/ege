//Текстовый файл состоит не более чем из 106 символов и содержит только заглавные буквы латинского алфавита (A..Z). 
//Определите максимальное количество идущих подряд  символов, среди которых нет сочетания стоящих рядом букв P и R (в любом порядке).


#include <iostream>
#include <string>
using namespace std;
int main(){
	freopen("files/157.txt", "r", stdin);
	string s;
	cin >> s;
	int max = -1;
	int count = 0;
	for (int i = 0; i < s.size() - 1; i++){
		if ((s[i] != 'P' || s[i + 1] != 'R') && (s[i + 1] != 'P' || s[i] != 'R')){
			count++;
			if (count > max) max = count;
		}
		else count = 1;
	}
	cout << max;
}

//2940
