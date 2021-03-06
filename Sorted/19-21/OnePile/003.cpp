/*https://inf-ege.sdamgia.ru/problem?id=28080

Первый ход делает Петя. За один ход игрок может добавить в кучу один или два 
камня или увеличить количество камней в куче в два раза.

Игра завершается в тот момент, когда количество камней в куче становится не менее 36. 
Победителем считается игрок, сделавший последний ход, 
то есть первым получивший кучу, в которой будет 36 или больше камней. 
В начальный момент в куче было S камней, 1 ≤ S ≤ 35.


№19
Известно, что Ваня выиграл своим первым ходом после неудачного первого хода Пети. 
Укажите минимальное значение S, когда такая ситуация возможна.*/

#include <bits/stdc++.h>
using namespace std;
int f(int x, int p){
	if ( (x >= 36) || (p > 3)) return p == 3;
	return f(x + 1, p + 1) || f(x + 2, p + 1) || f(x * 2, p + 1);
}
int main(){
	for (int s = 1; s < 36; s++)
		if (f(s, 1)){
			cout << s;
			break;
		}
}
