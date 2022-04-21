//текстовый файл состоит не более чем из 10^6 символов S, T, O, C, K. Сколько раз встречается в файле комбинация «KTO»?

#include <iostream>
#include <string>
using namespace std;
int main(){
	int count = 0;
	freopen("j5.txt", "r", stdin);
	string s;
	cin >> s;
	for (int i = 0; i < s.size()-2; i++)
		if (s[i] == 'K' && s[i + 1] == 'T' && s[i + 2] == 'O') count++;
	cout << count;
}

//7973
