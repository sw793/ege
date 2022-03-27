/*Обозначим через ДЕЛ(n, m) утверждение «натуральное число п делится без остатка на натуральное число n».
Для какого наибольшего натурального числа А формула
-ДЕЛ(х, А) -> (ДЕЛ(х, 26) -> -ДЕЛ(х, 169))
тождественно истинна (то есть принимает значение 1 при любом натуральном
значении переменной х)?*/

#include <iostream>
using namespace std;
int main(){
	for (int a = 1; a < 1000; a++){
		int flag = 1;
		for (int x = 1; x < 1000; x++){
			if ( (!((x % a) == 0) <= (((x % 26) == 0) <= !((x % 169) == 0))) == 0){
				flag = 0;
				break;
			}
		}
		if (flag == 1)
			cout << a << endl;
	}
}

//338
