/*Текстовый файл состоит не более чем из 106 символов - заглавных латинских букв и цифр. 
Убывающей подпоследовательностью будем называть последовательность символов, 
расположенных в порядке уменьшения их номера в кодовой таблице символов ASCII. 
Найдите наибольшую убывающую подпоследовательность в этом файле, 
запишите в ответе сначала саму последовательность, а затем – её длину. 
Если таких последовательностей несколько, используйте первую из них.*/

#include <iostream>
#include <string>
using namespace std;
int main(){
	freopen("files/1.txt", "r", stdin);
	string s, stemp, smax;
	cin >> s;
	stemp = s[0];
	int count = 1, max = 0;
	for (int i = 0; i < s.size() - 1; i++){
		if (s[i] > s[i + 1]){
			count++;
			stemp+=s[i + 1];
			if (count > max){
				max = count;
				smax = stemp;
			}
		}
		else { 
			count = 1;
			stemp =s[i + 1];
		}
	}
	cout << smax << " " << max;
}

//  ZYXFEDBA 8
