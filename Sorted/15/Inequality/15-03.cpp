/*Для какого наибольшего целого неотрицательного числа А выражение
(x >= A) v (y >= A) v (x * y <= 270)
тождественно истинно, т. е. принимает значение 1 при любых целых положительных
х и у?*/

#include <iostream>
using namespace std;
int main(){
	for (int a = 0; a < 1000; a++){
		int flag = 1;
		for (int x = 0; x < 1000; x++){
			for (int y = 0; y < 1000; y++)
				if (not((x >= a) || (y >= a) || ((x * y) <= 270))){
					flag = 0;
					break;
				}
			if (flag == 0)
				break;
		}
		if (flag == 1)
			cout << a << endl;
	}
}

// 17
