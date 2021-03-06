//https://inf-ege.sdamgia.ru/problem?id=34534

//На числовой прямой даны два отрезка: P = [2, 10] и Q = [6, 14]. Какова наибольшая возможная длина интервала A, что формула
//( (x ∈ А) → (x ∈ P) ) ∨ (x ∈ Q)
//тождественно истинна, то есть принимает значение 1 при любом значении переменной х.

#include <bits/stdc++.h>
using namespace std;
int main(){
	for (double x = -10; x < 100; x+=0.1){
		if (( ((1) <= (2 <= x && x <= 10)) || (6 <= x && x <= 14)  ) == 1){
			cout << x << endl;
		}
	}
}

// 2.1, 2.2 .... 13.9, 14 => (2; 14] => Ответ: 14 - 2 = 12
