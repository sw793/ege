/*НАЧАЛО
ПОКА нашлось (1111)
  заменить (1111, 7)
  заменить (77, 1)
КОНЕЦ ПОКА
КОНЕЦ

Какая строка получится в результате применения приведённой программы к строке вида 1…17…7 (70 единиц и 25 семёрка)?*/

#include <bits/stdc++.h>
using namespace std;
int main(){
	string s = "";
	for (int i = 0; i < 70; i++)
		s = s + "1";
	for (int i = 0; i < 25; i++)
		s = s + "7";
	while (s.find("1111") != -1){
		if (s.find("1111") != - 1)
			s.replace(s.find("1111"), 4, "7");
		if (s.find("77") != - 1)
			s.replace(s.find("77"), 2, "1");
	}
	cout << s;
}
//Ответ: 177
