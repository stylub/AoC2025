#include<iostream>
#include<string>
#include<cmath>
#include<algorithm>

using namespace std;

typedef unsigned long long ull;

bool checkForPattern(ull number){
	string num_str = to_string(number);
	string double_str = num_str + num_str;
	
	string search_area = double_str.substr(1,double_str.length()-2);

	return search_area.find(num_str) != string::npos; 
}

ull findInRange(ull start, ull end){
	ull sum = 0ull;
	for(ull i = start; i <= end; i++)
		if(checkForPattern(i))
			sum+=i;	

      	return sum;
}

int main(){
	ull start, end;
	char dash;
	ull solution = 0ull;
	while(std::cin>>start>>dash>>end){
			cout<<start<<dash<<end<<"\n";
			solution += findInRange(start,end);
	cin.ignore();
	}

	cout<<solution<<"\n";

	return 0;
}
