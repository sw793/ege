//https://inf-ege.sdamgia.ru/problem?id=27854

//Напишите программу, которая ищет среди целых чисел, принадлежащих числовому отрезку [110203; 110245], 
//числа, имеющие ровно четыре различных чётных натуральных делителя (при этом количество нечётных делителей может быть любым). 
//Для каждого найденного числа запишите эти четыре делителя в четыре соседних 
//столбца на экране с новой строки. Делители в строке должны следовать в порядке возрастания.

#include <bits/stdc++.h>
using namespace std;
int main(){	
	for (int i = 110203; i < 110245 + 1; i++){
		int arr[5];
		int count = 0;
		for (int j = 1; j < i + 1; j++){
			if (((i % j) == 0) && ((j % 2) == 0)){
				if (count > 4)
					break;
				arr[count] = j;
				count++; 
			}
		}
		if (count == 4){
			for (int i = 0; i < 4; i++)
				cout << arr[i] << " ";
			cout << endl;
		}
	}
}
