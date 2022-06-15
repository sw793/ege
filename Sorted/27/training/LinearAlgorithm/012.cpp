/*На вход программы поступает последовательность из N целых положительных чисел, 
все числа в последовательности различны. Рассматриваются все пары различных элементов последовательности, 
находящихся на расстоянии не менее, чем 4 (разница в индексах элементов пары должна быть 4 или более). 
Необходимо определить максимальную сумму пары чисел кратную 112, при этом первый элемент пары должен быть больше второго (a[i] > a[j], i < j).

Входные данные.
Даны два входных файла (файл A и файл B), каждый из которых содержит в первой строке количество чисел N (1 ≤ N ≤ 100000). 
Каждая из следующих N строк содержит одно натуральное число, не превышающее 10 000.

Входные данные.

Программа должна вывести три числа для каждого файла: первое число -  максимальная сумму пары элементов, 
находящихся в последовательности на расстоянии не менее чем 4, в которых сумма элементов кратна 112, 
два других числа - числа образующие пару. Если ни одной подходящей пары нет, нужно вывести одно число – 1.

Входные данные:
7
119
62
343
50
48
105
274

Выходные данные:
224 119 105

В ответе запишите все числа через один пробел в одну строку

https://www.kpolyakov.spb.ru/cms/files/ege-stream/15/27-15a.txt
https://www.kpolyakov.spb.ru/cms/files/ege-stream/15/27-15b.txt
*/
#include <iostream>
#include <vector>
#include <deque>
using namespace std;
int main(){
	int n;
	cin >> n;
	int ai, aj, r = 4, smax = 0, num1, num2;
	vector <int> buf(r, 0);
	vector <int> max(112, 0);
	for (int i = 0; i < r; i++) cin >> buf[i];
	
	for (int i = r; i < n; i++){ 
		if (buf[0] > max[buf[0] % 112]) max[buf[0] % 112] = buf[0];
		
		cin >> aj;
		ai = max[(112 - aj % 112) % 112];
		
		if (ai != 0 && ai > aj && ai + aj > smax){
			smax = ai + aj;
			num1 = ai;
			num2 = aj;
		}
		buf.erase(buf.begin());
		buf.push_back(aj);
	}
	if (smax == 0) cout << -1;
	else cout << smax << " " << num1 << " " << num2;
}
