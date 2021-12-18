/* Какая строка получится в результате применения этой программы к строке, 
состоящей из цифры 1, за которой следуют 77 идущих подряд цифр 7?

НАЧАЛО
ПОКА нашлось (17) ИЛИ нашлось (277) ИЛИ нашлось (3777)
  ЕСЛИ нашлось (17)
  ТО заменить (17, 2)
  ИНАЧЕ 
    ЕСЛИ нашлось (277)
    ТО заменить (277, 3)
    ИНАЧЕ заменить (3777, 1)
    КОНЕЦ ЕСЛИ
  КОНЕЦ ЕСЛИ
КОНЕЦ ПОКА
КОНЕЦ */

#include <bits/stdc++.h>
using namespace std;
int main(){
	string s = "1";
	for (int i = 0; i < 77; i++)
		s = s + "7";
	while ( (s.find("17") != -1) || (s.find("277") != -1) || (s.find("3777")!= -1)){
		if (s.find("17") != -1)
			s.replace(s.find("17"), 2, "2");
		else{
			if (s.find("277") != -1)
				s.replace(s.find("277"), 3, "3");
			else
				s.replace(s.find("3777"), 4, "1");
		}
	}
	cout << s;
}

//Ответ: 377
