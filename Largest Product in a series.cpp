#include<iostream>
#include<fstream>

using namespace std;

long long int multiply(char numbers[13])
{
	long long int no = 1;
	for(int i = 0; i < 13; i++){
		no *= ((long long int)numbers[i] - 48);
	}
	return no;
}

int main(int argc, char *argv[]){
	fstream fin("Largest Product in a series.txt", ios::in);
	char numbers[13];
	int i = 0;
	int count = 0;
	long long int largest = 0;
	int j = 0;
	while(fin){
		fin >> numbers[i];
		if(numbers[i] != '\n'){
			j++;
			if(numbers[i] == '0'){
				i = -1;
				count = -1;
			}
			count++;
			i++;
			if(i == 13){
				i = 0;
			}
			if(count >= 13){
				long long int product = multiply(numbers);
				if(product > largest){
					largest = product;
				}
			}
		}
	}
	cout << largest;
}