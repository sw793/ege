//(Е. Джобс) Текстовый файл состоит не более чем из 10^6 символов I, K, O, T. Сколько раз встречаются комбинации «TIK» и «TOK»?

#include <iostream>
#include <string>
using namespace std;
int main(){
	freopen("j3.txt", "r", stdin);
	string s;
	cin >> s;
	int count = 0;
	for (int i = 0; i < s.size() - 2; i++)
		if ((s[i] == 'T' && s[i + 1] == 'I' && s[i + 2] == 'K') || (s[i] == 'T' && s[i + 1] == 'O' && s[i + 2] == 'K')) count++;
	cout << count;
}

//31348
