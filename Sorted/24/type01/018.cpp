/*Текстовый файл состоит не более чем из 10^6 символов и содержит только заглавные буквы латинского алфавита (ABC…Z). 
Текст разбит на строки различной длины. Необходимо найти строку, содержащую наименьшее количество букв A 
(если таких строк несколько, надо взять ту, которая в  файле встретилась раньше). 
Определите, какая буква встречается в этой строке чаще всего. Если  таких букв несколько, 
надо взять ту, которая стоит последней в алфавите. Запишите в  ответе эту букву, 
а затем – сколько раз она встречается во всем файле.*/

#include <iostream>
#include <string>
using namespace std;
int main(){
	freopen("s1-2.txt", "r", stdin);
	string s;
	int vsego[100];
	for (int i = 0; i < 100; i++) vsego[i] = 0;
	int mina = 100000000;
	char otvet;
	
	while (cin >> s){
		int ca = 0;
		for (int i = 0; i < s.size(); i++){
			if (s[i] == 'A') ca++;
			vsego[int(s[i])]++;
		}	
		if (ca < mina){
			mina = ca;
			int maxbukva = -1;
			int temp[100];
			for (int i = 0; i < 100; i++) temp[i] = 0;
			for (int i = 0; i < s.size(); i++) temp[int(s[i])]++;
			for (char i = 'A'; i <= 'Z'; i++){
				if(temp[i] >= maxbukva){
					maxbukva = temp[i];
					otvet = i;
				}
			}

			
		} 
	}
	cout << otvet << vsego[otvet];	
	return 0;
}

//V38429
