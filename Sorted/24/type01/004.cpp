//Текстовый файл состоит не более чем из 10^6 символов S, T, O, C, K. Сколько раз встречается комбинация «OSK», 
//не являющаяся при этом частью комбинации «STOCK».

#include <iostream>
#include <string>
using namespace std;
int main(){
	int count = 0;
	freopen("j5.txt", "r", stdin);
	string s;
	cin >> s;
	s = "!!" + s;
	for (int i = 4; i < s.size(); i++){
		if ( (s[i - 4] != 'S' || s[i - 3] != 'T') && s[i - 2] == 'O' && s[i - 2] == 'K' && s[i + 4] == 'C' && s[i + 5] == 'O' && s[i + 6] == 'S') count++;
	}
	cout << count;
}

//7626
