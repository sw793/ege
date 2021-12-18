/*https://inf-ege.sdamgia.ru/problem?id=28120

[201455; 201470], числа, имеющие ровно 4 различных натуральных делителя. 
Выведите эти четыре делителя для каждого найденного числа в порядке возрастания. */

#include <bits/stdc++.h>
using namespace std;
int main(){
	for (int i = 201455; i < 201470 + 1; i++){
		int count = 0;
		int deliteli[5];
		for (int j = 1; j < i + 1; j++){
			if (i % j == 0){
				if (count > 4)
					break;
				deliteli[count] = j;
				count++;
			}
		}
		if (count == 4){
			for (int i = 0; i < 4; i++)
				cout << deliteli[i] << " ";
			cout << endl;
		}
	}
}
