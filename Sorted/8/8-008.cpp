/*Сергей составляет 5-буквенные коды перестановкой букв слова ГОВОР. 
При этом нельзя ставить рядом две гласные. Сколько различных кодов может составить Сергей?*/

#include <bits/stdc++.h>
using namespace std;
int main(){
	//Г О В Р
	//0 1 2 3
	int count = 0;
	for (int i1 = 0; i1 < 4; i1++)
	for (int i2 = 0; i2 < 4; i2++)
	for (int i3 = 0; i3 < 4; i3++)
	for (int i4 = 0; i4 < 4; i4++)
	for (int i5 = 0; i5 < 4; i5++){
		int arr[4] = {0, 0, 0, 0};
		arr[i1]++;
		arr[i2]++;
		arr[i3]++;
		arr[i4]++;
		arr[i5]++;
		if (arr[0] == 1 && arr[1] == 2 && arr[2] == 1 && arr[3] == 1)
			if ((i1 != 1 || i2 != 1) && (i2 != 1 || i3 != 1) && (i3 != 1 || i4 != 1) && (i4 != 1 || i5 != 1))
				count++;
	}
	cout << count;
}
//ответ 36