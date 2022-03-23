#include <iostream>
using namespace std;
int main(){
    int x, l, m;
    for (int i = 0; i < 1000; i++){
        x = i;
        l = 0;
        m = 0;
        while (x > 0){
            m = m + 1;
            if (x % 2 != 0){
                l = l + 1;
            }
            x = x / 2;
        }
        if ((m == 7) && (l == 4)) cout << i << endl;
    } 
    return 0;  
}
