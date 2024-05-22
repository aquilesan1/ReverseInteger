#include <iostream>
#include <string>

using namespace std;

int main(){
	
	int num = -123;
	string result = "";
	
	string s  = to_string(num);
	
	for (int i = s.size(); i >= 0; i--){
		
		result += s[i];
	}
	
	cout << result;
	
	return 0;
}