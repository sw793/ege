//https://inf-ege.sdamgia.ru/problem?id=33094

//Для какого наибольшего натурального числа А формула
//(A < 50) ∧ (¬ДЕЛ(x, А) → (ДЕЛ(x, 10) → ¬ДЕЛ(x, 18)))
//тождественно истинна (то есть принимает значение 1 при люб натур знач x)?

#include <bits/stdc++.h>
using namespace std;
int main(){
    for (int a = 1; a <= 1000; a++){
        int flag = 1;
        for (int x = 1; x <= 1000; x++){
            if ( ((a < 50) && ((x % a != 0) <= ((x % 10 == 0) <= (x % 18 != 0)) )) == 0){
                flag = 0;
                break;
            }
        }
        if (flag == 1)
            cout << a << endl;
    }
}
