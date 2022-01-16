#include<bits/stdc++.h>
using namespace std;
int main(){
	int iteration = 0; //счетчик находок подходящего числа
	
	//перебор чисел
	for (int num = 550000; num < 555000; num++){
		if (iteration == 5) //если нашлось пять подходящих чисел, то дальше не работаем
			break;
		int sum = 0;
		//поиск делителей
		for (int del = 2; del < num; del++){
			if (num % del == 0){
				int flag = 0; 
				//проверка на простое число
				for (int i = 2; i < del; i++){
    				if (del % i == 0)
						flag = 1;
					if (flag == 1)
						break;
  				}
				if (flag == 0) // еслт простое, то добавляем в сумму
					sum+=del;
			}
		}
		if (sum % 10 == 1){ //если сумма заканчтивается на 1, то выводим само число и сумму простых делителей
			cout << num << " " << sum << endl;
			iteration++;
		}
		
	}
}
