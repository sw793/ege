/*(А. Кабанов) Текстовый файл 24-153.txt содержит строку из заглавных букв A, B, C, D, E, F, 
всего не более чем из 10^6 символов.
AF-подстроками назовём последовательности символов A, B, C, D, E, F, 
ограниченные в начале символом A, а в конце символом F (граничные символы входят в подстроку). 
Определите минимальную длину AF-подстроки. Подстроки, состоящие из двух символов, не учитывать.*/

#include <iostream>
#include <string>
using namespace std;
int main(){
	freopen("files/24-153.txt", "r", stdin);
	string s;
	cin >> s;
	int PosA1 = -100000, PosA2;
	int MinLen = 100000;
	for (int i = 0; i < s.size(); i++){		
		if (s[i] == 'A'){
			PosA2 = PosA1;
			PosA1 = i;
		}			
		if (s[i] == 'F'){
			if ((i - PosA1 + 1 < MinLen) && (i - PosA1 + 1 > 2)) MinLen = i - PosA1 + 1;
			if ((i - PosA2 + 1 < MinLen) && (i - PosA2 + 1 > 2)) MinLen = i - PosA2 + 1;
		}		
	}
	cout << MinLen;	
}

// 7
