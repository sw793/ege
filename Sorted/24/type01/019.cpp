/*Текстовый файл состоит не более чем из 10^6 символов  и содержит 
только заглавные буквы латинского алфавита (ABC…Z). 
Текст разбит на строки различной длины. Необходимо найти строку, 
содержащую наименьшее количество букв T (если таких строк несколько, 
надо взять ту, которая в  файле встретилась раньше). 
Определите, какая буква встречается в этой строке чаще всего. 
Если  таких букв несколько, надо взять ту, которая стоит последней в алфавите. 
Запишите в  ответе эту букву, а затем – сколько раз она встречается во всем файле.*/

#include <iostream>
#include <string>
using namespace std;
int main(){
	freopen("s1-2.txt", "r", stdin);
	string s;
	int all[100];
	for (int i = 0; i < 100; i++) all[i] = 0;
	int mint = 1000000;
	char otvet;
	while (cin >> s){
		int ct = 0;
		for (int i = 0; i < s.size(); i++){
			if (s[i] == 'T') ct++;
			all[int(s[i])]++;
		}
		if (ct < mint){
			mint = ct;
			
			int maxbukva = -1;
			int small[100];
			for (int i = 0; i < 100; i++) small[i] = 0;
			
			
			for (int i = 0; i < s.size(); i++) small[int(s[i])]++;
			for (char i = 'A'; i <= 'Z'; i++)
				if(small[i] >= maxbukva){
					maxbukva = small[i];
					otvet = i;
				}
		}
	}
	cout << otvet << all[otvet];
	return 0;
}

//I38119
