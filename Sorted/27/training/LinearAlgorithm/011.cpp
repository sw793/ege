/*Имеется набор данных, состоящий из положительных целых чисел. 
Необходимо определить количество пар элементов (ai, aj) этого набора, 
в которых 1 ≤ i+5 ≤ j ≤ N и сумма элементов кратна 14.
Входные данные. Даны два входных файла (файл A и файл B), 
каждый из которых содержит в первой строке количество чисел N (1 ≤ N ≤ 100000). 
Каждая из следующих N строк содержит одно натуральное число, не превышающее 10 000.
Пример входного файла:

8 
7 
5 
6 
12 
24 
7 
9 
12 

Для указанных входных данных количество подходящих пар должно быть равно 2. 
В приведённом наборе имеются две пары (7, 7) и (5, 9), 
сумма элементов которых кратна 14 и индексы в последовательности отличаются не менее, чем на 5.
В ответе укажите два числа: сначала количество подходящих пар для файла А, затем для файла B.

https://www.kpolyakov.spb.ru/cms/files/ege-stream/15/27-15a.txt
https://www.kpolyakov.spb.ru/cms/files/ege-stream/15/27-15b.txt
*/

#include <iostream>
#include <vector>
#include <deque>
using namespace std;
int main(){
	freopen("27-15b.txt", "r", stdin);
	int n;
	cin >> n;
	int aj, r = 5, count = 0;
	vector <int> buf(r, 0);
	vector <int> ost(14, 0);
	
	for (int i = 0; i < r; i++) cin >> buf[i];
	
	for (int i = r; i < n; i++){
		ost[buf[0] % 14]++;
		cin >> aj;
		count += ost[(14 - aj % 14) % 14];
		buf.erase(buf.begin());
		buf.push_back(aj);
	}
	cout << count;
}

// 8 128567918