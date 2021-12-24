/*https://inf-ege.sdamgia.ru/problem?id=27858

[120115; 120200], число, имеющее максимальное количество различных натуральных делителей, 
если таких чисел несколько — найдите максимальное из них. 
Выведите на экран количество делителей такого числа и само число*/

#include <bits/stdc++.h>
using namespace std;
int main(){
	int maxcount = -1;
	int maxj;
	for (int i = 120115; i < 120200 + 1; i++){
		int count = 0;
		for (int j = 1; j < i + 1; j++){
			if (i % j == 0){
				count++;
				if (maxcount <= count){
					maxcount = count;
					maxj = j;
				}
			}
		}
	}
	cout << maxcount << " " << maxj;
}
