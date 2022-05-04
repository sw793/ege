//Текстовый файл состоит не более чем из 10^6 символов F, A, I, L. 
//Определите максимальное количество подряд идущих различных букв.

#include <iostream>
#include <string>
using namespace std;
int main(){
	freopen("files/j2.txt", "r", stdin);
	string s;
	cin >> s;
	int count = 0;
	int max = -1;
	for (int i = 0; i < s.size() - 1; i++){
		if (s[i] != s[i + 1]){
			count++;
			if (count > max) max = count;
		} 
		else count = 0;
	}	
	cout << max + 1;
}

//43
