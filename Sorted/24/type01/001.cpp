//Текстовый файл состоит не более чем из 10^6 символов S, T, O, C, K. Сколько раз встречается в файле комбинация «KOT»?

#include <iostream>
#include <string>
using namespace std;
int main(){
	freopen("j5.txt", "r", stdin);
	string s;
	cin >> s;
	int count = 0;
	for(int i = 2; i < s.size(); i++){
		if (s[i - 2] == 'K' && s[i - 1] == 'O' && s[i] == 'T') count++;
	}
	cout << count;
	return 0;
}
//8192
