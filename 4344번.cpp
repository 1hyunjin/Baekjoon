#include<iostream>
#include<math.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	
	for(int i = 0; i <n; i++){
		
		int num = 0;
		int sum = 0;
		int cnt = 0;
		double avg;
		
		cin >> num;
		int arr[num];
		for(int j = 0; j < num; j++){
			cin >> arr[j];
			sum+= arr[j];
		}
		avg = sum/num;
		
		for(int k =0; k < num; k++){
			if(arr[k] > avg){
				cnt++;
			}
		}
		cout << fixed;
		cout.precision(3);
		cout << 100*cnt/(double)num << "%" << endl;
	}
	return 0;
}
