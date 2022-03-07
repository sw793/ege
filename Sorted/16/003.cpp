#include <iostream>
using namespace std;
int f(int n){
	if (n == 1) return 1;
	if (n == 2) return 2;
	if ((n > 2) && (n % 2 == 0)) return ((8 * n + f(n - 3)) / 9);
	else return ((4 * n + f(n - 1) + f(n - 2)) / 7);
}
int main(){
	cout << f(52);
}
