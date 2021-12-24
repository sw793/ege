/*https://inf-ege.sdamgia.ru/problem?id=37350
Определите и запишите в ответе сначала количество пар элементов последовательности, 
у которых сумма нечётна, а произведение делится на 3, затем максимальную из сумм элементов таких пар. 
В данной задаче под парой подразумевается два различных элемента последовательности. 
Порядок элементов в паре не важен.*/

#include <bits/stdc++.h>
using namespace std;
int main(){
    int n = 10000;
    int arr[n];
    int count = 0;
    int maxsum = -1;
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    for (int i = 0; i < n - 1; i++){
        for (int j = i + 1; j < n; j++){
            if ( ((arr[i] + arr[j]) % 2 != 0) && ((arr[i] * arr[j]) % 3 == 0)){
                count++;
                if (maxsum < arr[i] + arr[j])
                    maxsum = arr[i] + arr[j];
            }
        }
    }
    cout << count << " " << maxsum;
}
