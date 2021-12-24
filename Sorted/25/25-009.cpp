//https://inf-ege.sdamgia.ru/problem?id=27856
//[95632; 95650], числа, имеющие ровно шесть различных нечётных натуральных делителей 
//(при этом количество четных делителей может быть любым). 
//Для каждого найденного числа запишите эти шесть делителей в шесть соседних столбцов на экране с новой строки.

#include <bits/stdc++.h>
using namespace std;
int main(){	
	for (int i = 95632; i < 95650 + 1; i++){
		int arr[7];
		int count = 0;
		for (int j = 1; j < i + 1; j++){
			if (((i % j) == 0) && ((j % 2) != 0)){
				if (count > 6)
					break;
				arr[count] = j;
				count++; 
			}
		}
		if (count == 6){
			for (int i = 0; i < 6; i++)
				cout << arr[i] << " ";
			cout << endl;
		}
	}
}
