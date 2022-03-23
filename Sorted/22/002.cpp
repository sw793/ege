#include <iostream>
using namespace std;
int main(){
	int x, l, m;
	for (int i = 100; i < 1000; i++){
		x = i;
		l = x;
		m = 81;
		if (l % 2 == 1)
			m = 30;
		while (l != m){
			if (l > m)
				l = l - m;
			else
				m = m - l;
		}
		if (m == 15) cout << i << endl;
	} 
}
