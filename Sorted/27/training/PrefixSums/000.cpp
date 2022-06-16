/*Дана последовательность из N целых чисел. 
Рассматриваются все её непрерывные подпоследовательности. 
Найдите среди них подпоследовательность с максимальной суммой.
Входные данные.

В первой строке дано количество чисел N (2 ≤ N ≤ 106). 
Каждая из следующих N строк содержит целое число, 
по абсолютной величине не превышающее 10000. */

#include <iostream>
#include <vector>
using namespace std;
int main(){
	int n, t;
	cin >> n;
	vector <long long int> pr(n + 1);
	for (int i = 1; i <= n; i++) {
		cin >> t;
		pr[i] = pr[i - 1] + t;
	}
	
	long long int min_pr = 0;
	long long int max_rez = -2e9;
	
	for (int r = 1; r < n + 1; r++){
		if (pr[r] - min_pr > max_rez) max_rex = pr[r] - min_pr;
		if (pr[r] < min_pr) min_pr = pr[r];
	}
	cout << max_rez; 
}
