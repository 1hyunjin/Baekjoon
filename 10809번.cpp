#include<iostream>
#include<string>
using namespace std;

int main(){
	
	string s;
	

	
	cin >> s;
	
	int idx;
	//find�Լ��� ����ϸ� ã�� ���ڰ� �ִ� ù �ε����� return�ϸ�, �������� ���� ������ -1�� return�Ѵ�.
	for(char a = 'a'; a <='z'; a++){
		idx = s.find(a);
		cout << idx << " ";
	}
	cout << endl;
}
