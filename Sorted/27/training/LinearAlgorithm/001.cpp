/*Имеется набор данных, состоящий из положительных целых чисел. 
Необходимо определить сумму  пары элементов (ai, aj) этого набора, 
в которых 1 ≤ i < j ≤ N,  ai > aj и сумма элементов чётна и максимальна.
Входные данные.

Даны два входных файла (файл A (https://www.kpolyakov.spb.ru/cms/files/ege-stream/12/27-12a.txt) 
и файл B(https://www.kpolyakov.spb.ru/cms/files/ege-stream/12/27-12b.txt)), каждый из которых содержит 
в первой строке количество чисел N (1 ≤ N ≤ 100000). 
Каждая из следующих N строк содержит одно натуральное число, не превышающее 10 000.
Пример входного файла:

4
6
7
4
13

Для указанных входных данных ответ 10.
В ответе укажите два числа через один пробел: ответ для файла А, затем для файла B.*/

#include <iostream>
using namespace std;
int main(){
	freopen("27-12b.txt", "r", stdin);
	int max0 = 0, max1 = 0, smax = 0;
	int n;
	cin >> n;
	int aj, ai;
	for (int i = 0; i < n; i++){
		cin >> aj;
		if (aj % 2 == 0) ai = max0;
		else ai = max1;
		if (ai != 0 && ai > aj && ai + aj > smax) smax = ai + aj;
		if (aj % 2 == 0) max0 = max(max0, aj);
		else max1 = max(max1, aj);
	}
	cout << smax;
}

//1890 1996
