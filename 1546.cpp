#include<iostream>
using namespace std;

int main(){
	
	int num;
	
	float sum = 0;
	int max = 0;
	float avg = 0;
	cin >> num;
	
	int score[num];
	for(int i = 0; i < num; i++){
		cin >> score[i];
	sum+= score[i];
		if(score[i] > max){
			swap(max, score[i]);
		}
		
	}

	avg = (sum/max) * 100;
	cout << avg / num;
	
}
