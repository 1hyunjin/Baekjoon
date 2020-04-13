#include<iostream>
#include<string>
using namespace std;

int main(){
	
	string s;
	

	
	cin >> s;
	
	int idx;
	//find함수를 사용하면 찾는 문자가 있는 첫 인덱스를 return하며, 존재하지 않을 때에는 -1을 return한다.
	for(char a = 'a'; a <='z'; a++){
		idx = s.find(a);
		cout << idx << " ";
	}
	cout << endl;
}
