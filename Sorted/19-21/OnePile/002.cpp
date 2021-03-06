/*https://inf-ege.sdamgia.ru/problem?id=27808

Два игрока, Петя и Ваня, играют в следующую игру. Перед игроками лежит куча камней. 
Игроки ходят по очереди, первый ход делает Петя. За один ход игрок может добавить в кучу 
один или три камня или увеличить количество камней в куче в два раза. 
Например, имея кучу из 15 камней, за один ход можно получить кучу из 16, 18 или 30 камней. 
У каждого игрока, чтобы делать ходы, есть неограниченное количество камней.

Игра завершается в тот момент, когда количество камней в куче становится не менее 42.
Победителем считается игрок, сделавший последний ход, т. е. первым получивший кучу, в которой будет 42 или больше камней.

В начальный момент в куче было S камней; 1 <= S <= 41.

Будем говорить, что игрок имеет выигрышную стратегию, если он может выиграть при любых ходах противника. 
Описать стратегию игрока — значит, описать, какой ход он должен сделать в любой ситуации, 
которая ему может встретиться при различной игре противника. 
В описание выигрышной стратегии не следует включать ходы играющего по этой 
стратегии игрока, не являющиеся для него безусловно выигрышными, 
т. е. не являющиеся выигрышными независимо от игры противника.


№19 
Известно, что Ваня выиграл своим первым ходом после неудачного первого хода Пети. 
Укажите минимальное значение S, когда такая ситуация возможна.*/

#include <bits/stdc++.h>
using namespace std;
int f(int x, int p){
	if ((x >= 42) || (p > 3)) return p == 3;
	return f(x + 1, p + 1) || f(x + 3, p + 1) || f(x * 2, p + 1);
}
int main(){
	for (int s = 1; s < 42; s++)
		if (f(s, 1)){
			cout << s;
			break;
		}
}
