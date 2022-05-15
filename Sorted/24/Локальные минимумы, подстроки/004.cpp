/*(А. Кабанов) Текстовый файл 24-153.txt содержит строку из заглавных букв A, B, C, D, E, F, 
всего не более чем из 10^6 символов. 
AF-подстроками назовём непустые последовательности идущих подряд символов A, B, C, D, E, F, 
ограниченные в начале символом A, а в конце символом F (граничные символы входят в подстроку). 
Определите количество AF-подстрок длиной от 7 до 10 символов.*/

#include <iostream>
#include <string>
using namespace std;
int main(){
	freopen("files/24-153.txt", "r", stdin);
	string s;
	cin >> s;
	string swork = "----";
	int count = 0;
	int ans = 0;
	for (int i = 6; i < s.size(); i++){
		if (swork[0] == 'A') count--;
		swork = swork.substr(1);
		swork = swork + s[i - 6];
		if (s[i - 6] == 'A') count++;
		if (s[i] == 'F') ans+=count;
	}
	cout << ans;
}

// 3703
