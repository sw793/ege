#include <iostream>
using namespace std;
int f(int n){
	if (n <= 1) return 1;
	if ( (n > 1) && (n % 2 != 0)) return (5 * n + f(n - 1) + f(2));
	else return (3 * f(n - 1));  
}
int main(){
	cout << f(23);
}
