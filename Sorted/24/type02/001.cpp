/*В текстовом файле находится цепочка из символов латинского алфавита A, B, C длиной не более 10^6 символов. 
Найдите длину самой длинной подцепочки, состоящей из символов B.*/

#include <iostream>
#include <string>
using namespace std;
int main(){
	freopen("files/k7.txt", "r", stdin);
	string s;
	cin >> s;
	int max = -1;
	int count = 0;
	for (int i = 0; i < s.size(); i++){
		if (s[i] == 'B'){
			count++;
			if (count > max) max = count;
		} 
		else count = 0;
	}
	cout << max;
}
