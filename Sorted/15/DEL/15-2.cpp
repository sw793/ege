//https://inf-ege.sdamgia.ru/problem?id=33760

//Для какого наибольшего натурального числа А формула
//ДЕЛ(A, 45) ∧ (ДЕЛ(750, x) → (¬ДЕЛ(A, x) → ¬ДЕЛ(120, x)))
//тождественно истинна (то есть принимает значение 1 при любом натуральном значении переменной x)?


#include <bits/stdc++.h>
using namespace std;
int main(){
	for (int a = 1; a <= 1000; a++){
		int flag = 1;
		for (int x = 1; x <= 1000; x++){
			if ( ( (a % 45 == 0) && ( (750 % x == 0) <= ( (a % x != 0) <= (120 % x != 0)))) == 0){
				flag = 0;
				break;
			}
		}
		if (flag == 1)
			cout << a << endl;
	}
}
