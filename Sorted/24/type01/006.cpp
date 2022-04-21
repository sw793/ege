//Текстовый файл состоит не более чем из 10^6 символов S, T, O, C, K. 
//Сколько раз встречается комбинация «KCC», не являющаяся при этом частью комбинации «KCCTT».

#include <iostream>
#include <string>
using namespace std;
int main(){
	int count = 0;
	freopen("j5.txt", "r", stdin);
	string s;
	cin >> s;
	s = s + "!!";
	for (int i = 0; i < s.size() - 2; i++)
		if (s[i] == 'K' && s[i + 1] == 'C' && s[i + 2] == 'C' && (s[i + 3] != 'T' || s[i + 4] != 'T')) count++;
	cout << count;
}

//7684
