#include<iostream>
using namespace std;

int main(){
	
	int n;
	char arr;
	int sum = 0;
	cin >> n;
	
	for(int i = 0; i < n; i++){
		
		cin >> arr;
		//char�� �ƽ�Ű�ڵ带 ��ģ ������ 48�� ����.
		sum += arr-48;
	}
	cout << sum << endl;
}
