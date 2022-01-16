//Задание из Демоверсии. 
//https://4ege.ru/informatika/62626-demoversija-ege-2022-po-informatike.html

//Пусть M – сумма минимального и максимального натуральных делителей
//целого числа, не считая единицы и самого числа. Если таких делителей
//у числа нет, то значение M считается равным нулю.
//Напишите программу, которая перебирает целые числа, бо́льшие 700 000,
//в порядке возрастания и ищет среди них такие, для которых значение M
//оканчивается на 8. Выведите первые пять найденных чисел
//и соответствующие им значения M.
//Формат вывода: для каждого из пяти таких найденных чисел в отдельной
//строке сначала выводится само число, затем – значение М.
//Строки выводятся в порядке возрастания найденных чисел.

#include <bits/stdc++.h>
using namespace std;
int main(){
	int count = 0;
	int mind = 0;
	int maxd = -1;
	for (int i = 700000; i < 1000000; i++){ //само число
		if (count == 5)
			break;
		int ctmp = 0;
			for (int z = 2; z < i; z++){ //делители числа
				if (i % z == 0){
					ctmp++;
					if (ctmp == 1)
						mind = z;
					maxd = z;
				}
			}
			if (((mind + maxd) % 10) == 8){
				cout << i << " " << mind + maxd << endl;
				count++;
			}
	}

}
