/*Имеется набор данных, состоящий из положительных целых чисел. Необходимо определить количество пар элементов (ai, aj) этого набора, в которых 1 ≤ i < j ≤ N и сумма элементов кратна 3.
Входные данные. Даны два входных файла (файл A и файл B), каждый из которых содержит в первой строке количество чисел N (1 ≤ N ≤ 100000). Каждая из следующих N строк содержит одно натуральное число, не превышающее 10 000.
Пример входного файла:

3 
1 
2 
3 

Для указанных входных данных количество подходящих пар должно быть равно 1. 
В ответе укажите два числа: сначала количество подходящих пар для файла А, затем для файла B. 

https://www.kpolyakov.spb.ru/cms/files/ege-stream/14/27-14a.txt
https://www.kpolyakov.spb.ru/cms/files/ege-stream/14/27-14b.txt
*/

#include <iostream>
using namespace std;
int main(){
	freopen("27-14b.txt", "r", stdin);
	int n;
	cin >> n;
	int ans = 0, k0 = 0, k1 = 0, k2 = 0;
	int a;
	for (int i = 0; i < n; i++){
		cin >> a;
		
		if (a % 3 == 0) ans += k0;
		if (a % 3 == 1) ans += k2;
		if (a % 3 == 2) ans += k1;
		
		if (a % 3 == 0) k0++;
		if (a % 3 == 1) k1++;
		if (a % 3 == 2) k2++;
	}
	cout << ans;
}

// 64 599982860