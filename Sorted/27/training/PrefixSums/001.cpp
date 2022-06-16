/*Дана последовательность из N натуральных чисел. 
Рассматриваются все её непрерывные подпоследовательности, такие что сумма элементов каждой из них кратна k = 9. 
Найдите среди них подпоследовательность с максимальной суммой.
Входные данные. Даны два входных файла (файл A и файл B), 
каждый из которых содержит в первой строке количество чисел N (2 ≤ N ≤ 108).
Каждая из следующих N строк содержит натуральное число, не превышающее 10000.
Пример входного файла:

7 
21 
13 
9 
19 
17 
26 
95 

Ответ: 45. (9, 19, 17 )
В оте укажите два числа: сначала максимальную сумму для файла А, затем для файла B.

При написании кода на С++, рекомендуем использовать long long int.

https://www.kpolyakov.spb.ru/cms/files/ege-stream/75/27-75a.txt
https://www.kpolyakov.spb.ru/cms/files/ege-stream/75/27-75b.txt
*/


#include <iostream>
#include <vector>
using namespace std;
int main(){
	freopen("27-75a.txt", "r", stdin);
	long long n, t;
	cin >> n;
	vector <long long int> pr(n + 1);
	for (int i = 1; i < n + 1; i++){
		cin >> t;
		pr[i] = pr[i - 1] + t;
	}
	vector <long long int> min_pr(9, 2e9);
	long long int max_razn = 0;
	for (int r = 0; r < n + 1; r++){
		if (pr[r] - min_pr[pr[r] % 9] > max_razn)
			max_razn = pr[r] - min_pr[pr[r] % 9];		
		min_pr[pr[r] % 9] = min(min_pr[pr[r] % 9], pr[r]);
	}
	cout << max_razn;
}
// 5518107 1096594407
