/*Текстовый файл состоит не более чем из 106 символов и содержит 
только заглавные буквы латинского алфавита (ABC…Z). 
Текст разбит на строки различной длины. Необходимо найти строку, 
содержащую наибольшее количество букв N (если таких строк несколько, 
надо взять ту, которая в файле встретилась позже). 
Определите, какая буква встречается в этой строке реже всего (но присутствует!). 
Если таких букв несколько, надо взять ту, которая стоит раньше в алфавите. 
Запишите в ответе эту букву, а затем – сколько раз она встречается во всем файле.*/

#include <iostream>
#include <string>
using namespace std;
int main(){
	freopen("s1-2.txt", "r", stdin);
	string s;
	int all[100]; 
  for (int i = 0; i < 100; i++) all[i] = 0;
	int cn;
	int maxn = -1;
	char otvet;
	while (cin >> s){
		cn = 0;
		for (int i = 0; i < s.size(); i++){
			if (s[i] == 'N') cn++;
			all[int(s[i])]++;
		}
		if (cn >= maxn){
			maxn = cn;
			int minbukva = 1000000;
			int small[100];
			for (int i = 0; i < 100; i++) small[i] = 0;
			for (int i = 0; i < s.size(); i++) small[int(s[i])]++;
			for (char i = 'A'; i <= 'Z'; i++){
				if (small[i] < minbukva){
					minbukva = small[i];
					otvet = i;
				}
			}
		}
	}
	cout << otvet << all[otvet];
	return 0;
}
