#include<iostream>
#include<cmath>

using namespace std;

int main(int argc, char * argv[]){
	int *array = new int[2000001]{0};
	long long int sum = 0;
	for(int i = 2; i <= sqrt(2000000); i++){
		if(array[i] == 0){
			int j = 2;
			while(i*j <= 2000000){
				array[i*j] = 1;
				j++;
			}
		}
	}
	for(int i = 2; i <= 2000000; i++){
		if(array[i] == 0){
			sum += i;		
		}
	}
	cout << sum;
}