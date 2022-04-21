//Текстовый файл состоит не более чем из 10^6 символов S, T, O, C, K. Сколько раз встречается в файле комбинация «SOCKCOS»?

#include <iostream>
#include <string>
using namespace std;
int main(){
	int count = 0;
	freopen("j5.txt", "r", stdin);
	string s;
	cin >> s;
	for (int i = 0; i < s.size() - 6; i++){
		if (s[i] == 'S' && s[i + 1] == 'O' && s[i + 2] == 'C' && s[i + 3] == 'K' && s[i + 4] == 'C' && s[i + 5] == 'O' && s[i + 6] == 'S') count++;
	}
	cout << count;
}

//15
