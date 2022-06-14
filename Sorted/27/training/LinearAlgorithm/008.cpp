/*Имеется набор данных, состоящий из положительных целых чисел, каждое из которых не превышает 1000. 
Они представляют собой результаты измерений, выполняемых прибором с интервалом 1 минута. 
Требуется найти для этой последовательности контрольное значение – наименьшую сумму квадратов двух результатов измерений, 
выполненных с интервалом не менее, чем в 5 минут.

Входные данные. Даны два входных файла (файл A и файл B), 
каждый из которых содержит в первой строке количество чисел N (1 ≤ N ≤ 100000). 
Каждая из следующих N строк содержит одно натуральное число, не превышающее 10 000.
Пример входного файла:

9 
12 
45 
5 
4 
21 
20 
10 
12 
26 

Для указанных входных данных искомое контрольное значение равно 169.
В ответе укажите два числа: сначала контрольное значение для файла А, затем для файла B.

https://www.kpolyakov.spb.ru/cms/files/ege-stream/8/27-8a.txt
https://www.kpolyakov.spb.ru/cms/files/ege-stream/8/27-8b.txt
*/

#include <iostream>
#include <vector>
//#include <deque>
using namespace std;
int main(){
	freopen("27-8b.txt", "r", stdin);
	int n;
	cin >> n;
	int min = 2e9, ans = 2e9, aj;
	vector <int> buf(5, 0);
	
	for (int i = 0; i < 5; i++) cin >> buf[i];

	for (int i = 5; i < n; i++){
		if (buf[0] < min) min = buf[0];
		cin >> aj;
		if (min * min + aj * aj < ans) ans = min * min + aj * aj;
		buf.erase(buf.begin());	//удаляем первый элемент
		buf.push_back(aj);	//добавляем aj в конец
	}
	
	cout << ans;
}

// 11009 200
