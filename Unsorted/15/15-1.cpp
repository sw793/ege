//наименьшее натуральное А
//ДЕЛ(A, 40) ∧ (ДЕЛ(780, x) → (¬ДЕЛ(A, x) → ¬ДЕЛ(180, x)))



#include <bits/stdc++.h>
using namespace std;
int main (){
	for (int a = 1; a <= 1000; a++){
		int flag = 1;
		for (int x = 1; x <= 1000; x++){
			if (( ((a % 40) == 0) && ( ((780 % x) == 0) <= ( ((a % x) != 0) <= ((180 % x) != 0))) ) == 0){
				flag = 0;
				break;
			}
		}
		if (flag == 1)
			cout << a << endl;
	}
	return 0;
}
