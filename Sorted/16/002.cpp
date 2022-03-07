#include <iostream>
using namespace std;
int f(int n){
	if (n <= 1) return n == 1;
	if ((n > 1) && (n % 2 != 0)) return (3 + f(n - 1) * f(n - 2) - f(n - 1) - f(n - 2));
	else return (2 * f(n - 1));
}

int main(){
	cout << f(12);
}
