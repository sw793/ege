//№ 4568 Полякова

//На числовой прямой даны два отрезка: P = [10, 30] и Q = [12, 24]. Найдите наименьшую возможную длину отрезка A, при котором формула
//((x ∈ P) ∧ (x ∈ Q)) → (x ∈ A)
//тождественно истинна, то есть принимает значение 1 при любых x. 


#include <bits/stdc++.h>
using namespace std;
int main (){
	for (double x = 11; x < 24; x+=0.1){
		if ((((10 <= x && x <= 30) && (12 <= x && x <=24)) <= (0) ) == 0)
			cout << x << endl;
	}
}
