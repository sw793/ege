/*Дана последовательность из N натуральных чисел. 
Рассматриваются все её непрерывные подпоследовательности. 
Найдите среди них количество таких последовательностей с суммой элементов кратной 3.*/

#include <iostream>
#include <vector>
using namespace std;
int main(){
	int n, t;
	cin >> n;
	vector <long long int> pr(n + 1);
	for (int i = 1; i < n + 1; i++){
		cin >> t;
		pr[i] = pr[i - 1] + t;
	}
	long long int count = 0;
	vector <int> k(3, 0);
	
	for (int r = 0; r < n + 1; r++){
		count += k[pr[r] % 3];
		k[pr[r] % 3]++;
	}
	cout << count;
	return 0;
}
