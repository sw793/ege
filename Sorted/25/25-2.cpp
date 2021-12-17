//https://inf-ege.sdamgia.ru/problem?id=27853

//Напишите программу, которая ищет среди целых чисел, принадлежащих числовому отрезку [312614; 312651], 
//числа, имеющие ровно шесть различных натуральных делителей. Для каждого найденного числа запишите эти шесть 
//делителей в шесть соседних столбцов на экране с новой строки. Делители в строке должны следовать в порядке возрастания.

#include <bits/stdc++.h>
using namespace std;
int main(){
	for (int i = 312614; i < 312651 + 1; i++){
		int count = 0;
		int arr[7];
		for (int j = 1; j < i + 1; j++){
			if (i % j == 0){
				if (count > 6)	//если делителей больше шести идти дальше смысла нет
					break;
				arr[count] = j;
				count++;	
			}
		}
		if (count == 6){
			cout << endl;
			for (int i = 0; i < 6; i++)
				cout << arr[i] << " ";
		}
	}
}
