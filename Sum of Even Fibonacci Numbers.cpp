#include<iostream>

using namespace std;

int main(){
	int value = 4000000;
	int a = 2;
	int b = 8;
	int sum = 0;
	while(b < value){
		sum += a;
		int temp = b*4 + a;
		a = b;
		b = temp;
	}
	sum += a;
	cout << "Sum is:" << sum;
}