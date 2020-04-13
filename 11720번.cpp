#include<iostream>
using namespace std;

int main(){
	
	int n;
	char arr;
	int sum = 0;
	cin >> n;
	
	for(int i = 0; i < n; i++){
		
		cin >> arr;
		//char은 아스키코드를 합친 값으로 48을 뺀다.
		sum += arr-48;
	}
	cout << sum << endl;
}
