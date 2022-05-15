/*(А. Кабанов) Текстовый файл содержит строку из заглавных букв A, B, C, D, E, F, 
всего не более чем из 106 символов. DD-подстроками назовём последовательности символов A, B, C, E, F, 
ограниченные символами D (граничные символы входят в подстроку). 
Определите минимальную длину DD-подстроки. 
Подстроки, состоящие из двух символов, не учитывать.*/

#include <iostream>
#include <string>
using namespace std;
int main(){
	freopen("files/153.txt", "r", stdin);
	string s;
	cin >> s;
	int MinLen = 1000, PrevMin = -1000;
	for (int i = 0; i < s.size(); i++){
		if (s[i] == 'D'){
			if ((i - PrevMin + 1 < MinLen) && (i - PrevMin + 1 > 2)) MinLen = i - PrevMin + 1;
			PrevMin = i;
		}
	}
	cout << MinLen;
}

//139
