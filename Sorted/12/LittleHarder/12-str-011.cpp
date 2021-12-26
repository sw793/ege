/*ПОКА нашлось(43)  ИЛИ  нашлось(53)
  ЕСЛИ нашлось(43)
    ТО заменить(43, 33)
    ИНАЧЕ заменить(53, 433)
КОНЕЦ ПОКА

Определите максимально возможное  количество цифр 3, которое может получиться 
в результате применения этой программы к строке, 
состоящей из 6  цифр 3, 8 цифр 4 и 5 цифр 5, идущих в произвольном порядке*/

#include <bits/stdc++.h>
using namespace std;
int main(){
	string s = "";
	int max = -1;
	for (int i = 0; i < 6; i++)
		s+="3";
	for (int i = 0; i < 8; i++)
		s+="4";
	for (int i = 0; i < 5; i++)
		s+="5";
	do{
		string stmp = s;
		while ((s.find("43") != -1) || (s.find("53") != -1)){
			if (s.find("43") != -1)
				s.replace(s.find("43"), 2, "33");
			else
				s.replace(s.find("53"), 2, "433");
		}
		int count3 = 0;
		for (int i = 0; i < s.size(); i++){
			if (stmp[i] == '3')
				count3++;
		}
		if (max < count3)
			max = count3;
	}
	while (next_permutation(s.begin(), s.end());
	cout << max;
}
