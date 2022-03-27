/*Для какого наибольшего целого неотрицательного числа А выражение
(x < A) ^ (y < A) ^ (x • y > 601)
тождественно ложно, т. е. принимает значение 0 при любых целых положительных х и у? */

#include <iostream>
using namespace std;
int main(){
	for (int a = 0; a < 1000; a++){
		int flag = 1;
		for (int x = 0; x < 1000; x++){
			for (int y = 0; y < 1000; y++)
				if ((x < a) && (y < a) && (x * y > 601)){
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

// 25
