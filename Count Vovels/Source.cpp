#include <iostream>
#include <string>

using namespace std;

bool vowelCheck(char);

void main(){
	string input;
	int result = 0;
	
	cout<<"Enter string:";
	getline(cin,input);

	for(int i = 0; i < input.length(); i++){
		if(vowelCheck(input[i])){
			result += 1;
		}
	}

	cout<<"Amount of vowels: "<<result<<endl;
}

bool vowelCheck(char letter){
	char arr[] = {'a','e','i','o','u','A','E','I','O','U'};

	for(int i = 0; i < sizeof(arr); i++)
		if(letter == arr[i])
			return true;
	return false;
}