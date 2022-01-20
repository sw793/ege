/*Из букв слова К А П К А Н составляются 6-буквенные последовательности. 
Сколько можно составить различных последовательностей, если известно, что в каждой из них содержится не менее 3 согласных?*/

#include <bits/stdc++.h>
using namespace std;
int main(){
	// К А П Н
	// 0 1 2 3
	int count = 0;
	for (int i0 = 0; i0 < 4; i0++)
	for (int i1 = 0; i1 < 4; i1++)
	for (int i2 = 0; i2 < 4; i2++)
	for (int i3 = 0; i3 < 4; i3++)
	for (int i4 = 0; i4 < 4; i4++)
	for (int i5 = 0; i5 < 4; i5++){
		int arr[4] = {0, 0, 0, 0};
		arr[i0]++;
		arr[i1]++;
        arr[i2]++;
        arr[i3]++;
        arr[i4]++;
        arr[i5]++;
		if (3 <= arr[0] + arr[2] + arr[3]) count++;
	}
	cout << count;
}

//ответ 3942
