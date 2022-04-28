/*Текстовый файл состоит не более чем из 106 заглавных латинских букв. 
Определите символ, который чаще всего встречается в файле сразу после буквы A. 
В ответе запишите сначала этот символ, а потом сразу (без разделителя) сколько раз 
он встретился после буквы A. Если таких символов несколько, нужно вывести тот, который стоит раньше в алфавите.*/

#include <iostream>
#include <string>
using namespace std;
int main(){
	freopen("s2.txt", "r", stdin);
	string s;
	cin >> s;
	int arr[100];
	for (int i = 0; i < 100; i++) arr[i] = 0;
	char otvet;
	int max = -1;
	
	for (int i = 0; i < s.size(); i++){
		if (s[i] == 'A'){
			arr[int(s[i + 1])]++;
			if (arr[int(s[i + 1])] > max){
				max = arr[int(s[i + 1])];
				otvet = int(s[i + 1]);
			}  
		}
	}
	cout << otvet << max;
}

//P1342
