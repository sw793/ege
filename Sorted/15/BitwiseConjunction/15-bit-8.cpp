/*https://inf-ege.sdamgia.ru/problem?id=38949

Для какого наименьшего неотрицательного целого числа А формула
x & 85 = 0 → (x & 54 ≠ 0 → x & А ≠ 0)
тождественно истинна*/


#include <bits/stdc++.h>
using namespace std;
int main(){
	for (int a = 0; a < 1000; a++){
		int flag = 1;
		for (int x = 0; x < 1000; x++)
			if ( ( ((x & 85) == 0) <= (((x & 54) != 0) <= ((x & a) != 0))) == 0) 
				flag = 0;
		if (flag)
			cout << a << endl;
	}
}
