/*На числовой прямой даны два отрезка: В = [4; 18] и С = [12; 40]. 
Укажите наименьшую возможную длину такого отрезка А, для которого логическоей выражение
¬(x ∈ A) <= ((x ∈ В) ≡ (x ∈ С))
истино (те принимает занечение 1) при любом значении переменной x.*/

#include <iostream>
using namespace std;
int main(){
	for (double x = 3; x < 131; x+=0.1)
		if ( (!(0) <= (((4 <= x) && (x <= 18)) == ((12 <= x) && (x <= 40)))) == 0)
			cout << x << endl;
}

// 4, 4.1, ... 39.9 => 40 - 4 = 36  Ответ: 36. 
