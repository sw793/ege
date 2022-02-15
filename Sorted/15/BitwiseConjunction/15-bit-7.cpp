/*https://inf-ege.sdamgia.ru/problem?id=34521

Для какого наибольшего целого числа А формула
x&51 = 0 ∨ (x&41 = 0 → x&А = 0)
тождественно истинна*/

#include <bits/stdc++.h>
using namespace std;
int main(){
	for (int a = -100; a < 1000; a++){
		int flag = 1;
		for (int x = -100; x < 1000; x++)
			if ( ( ((x & 51) == 0) || (((x & 41) == 0) <= ((x & a) == 0)) ) == 0)
				flag = 0;
		if (flag == 1)
			cout << a << endl;
	}
}
