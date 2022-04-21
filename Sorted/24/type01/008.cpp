//(Е. Джобс) Текстовый файл состоит не более чем из 10^6 символов английского алфавита. 
//Определите количество палиндромов (последовательностей, которые читаются в обе стороны одинаково) длиной 5 символов.

#include <iostream>
#include <string>
using namespace std;
int main(){
	freopen("files/j9.txt", "r", stdin);
	string s;
	cin >> s;
	int count = 0;
	for(int i = 0; i < s.size() - 4; i++)
		if (s[i] == s[i + 4] && s[i + 1] == s[i + 3]) count++;
	cout << count;
}

//1521
