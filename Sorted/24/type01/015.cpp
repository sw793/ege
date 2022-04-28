//Текстовый файл состоит не более чем из 10^6 заглавных латинских букв (A..Z). 
//Текст разбит на строки различной длины. Определите количество строк, в которых комбинация AB встречается больше двух раз.


#include <iostream>
#include <string>
using namespace std;
int main(){
	freopen("s1.txt", "r", stdin);
	string s;
	int count = 0;
	while (cin >> s){
		int cab = 0;
		for (int i = 0; i < s.size() - 1; i++)
			if (s[i] == 'A' && s[i + 1] == 'B') cab++;
		if (cab > 2) count++;
	}
	cout << count;
}

//163
