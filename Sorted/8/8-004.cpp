/*Иван составляет таблицу кодовых слов для передачи сообщений, каждому сообщению соответствует своё кодовое слово. 
В качестве кодовых слов Иван использует 5-буквенные слова, в которых есть только буквы В, А, Н, Я, 
причём буква Я может появиться на последнем месте или не появиться вовсе. 
Сколько различных кодовых слов может использовать Иван? */

#include <bits/stdc++.h>
using namespace std;
int main(){
	// В А Н Я
	// 0 1 2 3
	int count = 0;
	for (int i0 = 0; i0 < 4; i0++)
	for (int i1 = 0; i1 < 4; i1++)
	for (int i2 = 0; i2 < 4; i2++)
	for (int i3 = 0; i3 < 4; i3++)
	for (int i4 = 0; i4 < 4; i4++){
		int ltr[4] = {0, 0, 0, 0};
		 if(( (i0 != 3) && (i1 != 3) && (i2 != 3) && (i3 != 3) && (i4 == 3)) || ( (i1 != 3) && (i2 != 3) && (i3 != 3) && (i4 != 3) && (i0 != 3) ))
			count++;
	}
	cout << count;
}
//Ответ: 324
