/*Имеется набор данных, состоящий из положительных целых чисел. 
Необходимо определить количество пар элементов (ai, aj) этого набора, в которых 1 ≤ i + 4 ≤ j ≤ N и произведение элементов кратно 5.
Входные данные. Даны два входных файла (файл A и файл B), каждый из которых содержит в первой строке количество чисел N (1 ≤ N ≤ 100000). 
Каждая из следующих N строк содержит одно натуральное число, не превышающее 10 000.
Пример входного файла:

9 
7 
5 
6 
12 
5 
11 
8 
16 
14 

Для указанных входных данных количество подходящих пар должно быть равно 6. 
В ответе укажите два числа: сначала количество подходящих пар для файла А, затем для файла B.

https://www.kpolyakov.spb.ru/cms/files/ege-stream/13/27-13a.txt
https://www.kpolyakov.spb.ru/cms/files/ege-stream/13/27-13b.txt
*/

#include <iostream>
#include <vector>
#include <deque>
using namespace std;
int main(){
	freopen("27-13b.txt", "r", stdin);
	int n;
	cin >> n;
	int aj, r = 4, ans = 0, all = 0, kr5 = 0;
	vector <int> buf(r, 0);
	
	for (int i = 0; i < r; i++) cin >> buf[i];
	for (int i = r; i < n; i++){
		if (buf[0] % 5 == 0) kr5++;
		all++;
		cin >> aj;
		
		if (aj % 5 == 0) ans += all;
		else ans += kr5;
		
		buf.erase(buf.begin());
		buf.push_back(aj);
	}
	cout << ans;
}

// 61 651573914
