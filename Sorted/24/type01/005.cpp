//Текстовый файл состоит не более чем из 10^6 символов S, T, O, C, K.
//Сколько раз встречается комбинация «TOK», не являющаяся при этом частью комбинации «TOTOK».

#include <iostream>
#include <string>
using namespace std;
int main(){
	int count = 0;
	freopen("j5.txt", "r", stdin);
	string s;
	cin >> s;
	s = "!!" + s;
	for (int i = 4; i < s.size(); i++)
		if ((s[i - 4] != 'T' || s[i - 3] != 'O') && s[i - 2] == 'T' && s[i - 1] == 'O' && s[i] == 'K') count++;	
	cout << count;
}

//7758
