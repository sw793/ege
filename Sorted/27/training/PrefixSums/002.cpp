/*(А. Кабанов) Набор данных представляет собой последовательность натуральных чисел.
Необходимо выбрать такую подпоследовательность подряд идущих чисел, чтобы их сумма была максимальной, 
делилась на 93 и была нечётной. Гарантируется, что такая подпоследовательность существует. 
В качестве ответа укажите сумму чисел данной подпоследовательности.

Входные данные. Даны два входных файла (файл A и файл B), каждый из которых содержит в первой 
строке количество чисел N (2 ≤ N ≤ 108). Каждая из следующих N строк содержит натуральное число, не превышающее 10000.
Пример входного файла:

6 
31 
44 
18 
11 
186 
93 

В этом наборе можно выбрать последовательности 31+44+18 (сумма 93), 186+93 (сумма 279) и 93. Ответ: 279.
В ответе укажите два числа: сначала искомое значение для файла А, затем для файла B.

https://www.kpolyakov.spb.ru/cms/files/ege-stream/73/27-73a.txt
https://www.kpolyakov.spb.ru/cms/files/ege-stream/73/27-73b.txt
*/

#include <iostream>
#include <vector>
using namespace std;
int main(){
	freopen("27-73b.txt", "r", stdin);
	int n,t;
	cin >> n;
	vector <long long int> pr(n + 1);
	for (int i = 1; i < n + 1; i++){
		cin >> t;
		pr[i] = pr[i - 1] + t;
	}
	vector <long long int> min_pr0(93, 2e9);
	vector <long long int> min_pr1(93, 2e9);
	long long int max_razn = -1;
	long long x;
	for (int r = 0; r < n + 1; r++){
		if (pr[r] % 2 == 0) x = min_pr1[pr[r] % 93];
		else x = min_pr0[pr[r] % 93];
		
		if (x != 2e9 && pr[r] - x > max_razn)
				max_razn = pr[r] - x; 	
		
		if (pr[r] % 2 == 0) min_pr0[pr[r] % 93] = min(min_pr0[pr[r] % 93], pr[r]);
		else min_pr1[pr[r] % 93] = min(min_pr1[pr[r] % 93], pr[r]); 
	}
	cout << max_razn;
}
// 19437 50211537
