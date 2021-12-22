/*НАЧАЛО
ПОКА нашлось(XXX) или нашлось(ZXX) или нашлось(ZYX)
  заменить(XXX, ZZ)
  заменить(ZYX, X)
  заменить(ZXX, Y)
КОНЕЦ ПОКА
КОНЕЦ

На вход приведённой ниже программе поступает строка, состоящая из 107 букв Х. Какая строка получится после выполнения программы?*/

#include <bits/stdc++.h>
using namespace std;
int main(){
	string s = "";
	for (int i = 0; i < 107; i++)
		s = s + "X";
	while ((s.find("XXX") != - 1) || (s.find("ZXX") != -1) || (s.find("ZYX") != -1)){
		if (s.find("XXX") != -1)
			s.replace(s.find("XXX"), 3, "ZZ");
		if (s.find("ZYX") != -1)
			s.replace(s.find("ZYX"), 3, "X");
		if (s.find("ZXX") != -1)
			s.replace(s.find("ZXX"), 3, "Y");
	}
	cout << s;
}
//XX
