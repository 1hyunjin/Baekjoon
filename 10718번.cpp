#include <iostream>


using namespace std;



int main() {
	
	int a;
	int b;
	int c;
	int arr[10] = {0};
	
	cin >> a>> b >> c;
	
	int sum = a*b*c;
	
	while(sum != 0){
		arr[sum%10] += 1;
		sum /= 10;
	}
	for(int i = 0; i < 10; i++){
		cout << arr[i] << endl;
	}
	return 0;
}


