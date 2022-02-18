//https://inf-ege.sdamgia.ru/problem?id=16389

#include <bits/stdc++.h>
using namespace std;
int main(){
	string s="";
	for (int i = 0; i < 84; i++)
		s=s+"1";
	while (s.find("11111") != -1){
		if (s.find("222") != -1)
			s.replace(s.find("222"), 3, "1");
		if (s.find("111") != -1)
			s.replace(s.find("111"), 3, "2");
	}
	cout << s;
}
