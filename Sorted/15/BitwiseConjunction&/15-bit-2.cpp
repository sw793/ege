//https://inf-ege.sdamgia.ru/problem?id=36870

//Для какого наименьшего неотрицательного целого числа А формула
//x & 49 = 0 → (x & 28 ≠ 0 → x & А ≠ 0)
//тождественно истинна (т. е. принимает значение 1 при любом неотрицательном целом значении переменной x)?

#include <bits/stdc++.h>
using namespace std;
int main(){
	for (int a = 0; a < 100; a++){
		int flag = 1;
		for (int x = 0; x < 100; x++){
			if ( ( ((x & 49) == 0) <= (((x & 28) != 0) <= ((x & a) != 0))) == 0)
				flag = 0;
		}
		if (flag){
			cout << a << endl;
			break;
		}
	}
}
