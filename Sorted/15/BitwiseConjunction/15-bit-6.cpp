/*https://inf-ege.sdamgia.ru/problem?id=34519

Для какого наименьшего неотрицательного целого числа А формула
x&9 = 0 → (x&19 ≠ 0 → x&А ≠ 0)
тождественно истинна (т. е. принимает значение 1 при любом неотрицательном целом значении переменной х)?*/

#include <bits/stdc++.h>
using namespace std;
int main(){
	for (int a = 0; a < 1000; a++){
		int flag = 1;
		for (int x = 0; x < 1000; x++)
			if ( (((x & 9) == 0) <= ( ((x & 19) != 0) <= ((x & a) != 0))) == 0)
				flag = 0;
		if (flag == 1)
			cout << a << endl;
	}
}
