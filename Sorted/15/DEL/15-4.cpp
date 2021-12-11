//https://inf-ege.sdamgia.ru/problem?id=27412

//Для какого наибольшего натурального числа А формула
//¬ДЕЛ(x, А) → (ДЕЛ(x, 6) → ¬ДЕЛ(x, 9))
//тождественно истинна (то есть принимает значение 1 при любом натуральном x)?

#include <bits/stdc++.h>
using namespace std;
int main(){
    for (int a = 1; a <= 1000; a++){
        int flag = 1;
        for (int x = 1; x <= 1000; x++){
            if (( (x % a != 0) <= ( (x % 6 == 0) <= (x % 9 != 0))  ) == 0){
                flag = 0;
                break;
            }
        }
        if (flag == 1)
            cout << a << endl;
    }
}
