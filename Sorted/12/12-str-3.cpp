//НАЧАЛО
  //ПОКА нашлось (7777) ИЛИ нашлось (68)
    //заменить (68, 7)
    //заменить (7777, 7)
  //КОНЕЦ ПОКА
//КОНЕЦ

//Какая строка получится в результате применения приведённой ниже программы к строке, 
//состоящей из 143 строки 687 (687687687…687)?

#include <iostream>
using namespace std;
int main(){
	string s = "";
	for (int i = 0; i < 143; i++)
		s = s + "687";
	while ( (s.find("7777") != -1) || (s.find("68") != -1)){
		if (s.find("68") != -1)
			s.replace(s.find("68"), 2, "7");
		if (s.find("7777") != -1)
			s.replace(s.find("7777"), 4, "7");
	}
	cout << s;
}
