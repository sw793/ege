/*НАЧАЛО
ПОКА нашлось (36) ИЛИ нашлось (466) ИЛИ нашлось (5666)
  ЕСЛИ нашлось (36) ТО заменить (36, 5) КОНЕЦ ЕСЛИ
  ЕСЛИ нашлось (466) ТО заменить (466, 3) КОНЕЦ ЕСЛИ
  ЕСЛИ нашлось (5666) ТО заменить (5666, 4) КОНЕЦ ЕСЛИ
КОНЕЦ ПОКА
КОНЕЦ

Какая строка получится в результате применения приведённой выше программы к строке, 
в которой первая и последняя цифры – 4, а между ними стоит 100 цифр 6? В ответе запишите полученную строку.*/

#include <bits/stdc++.h>
using namespace std;
int main(){
	string s = "4";
	for (int i = 0; i < 100; i++)
		s+="6";
	s+="4";
	
	while ((s.find("36") != -1) || (s.find("466") != -1) || (s.find("5666") != -1)){
		if (s. find("36") != -1)
			s.replace(s.find("36"), 2, "5");
		if (s.find("466") != -1)
			s.replace(s.find("466"), 3, "3");
		if (s.find("5666") != -1)
			s.replace(s.find("5666"), 4, "4");
	}
	cout << s;
}
//Ответ: 564
