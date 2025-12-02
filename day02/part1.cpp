#include<iostream>
#include<string>
#include<cmath>

using namespace std;

typedef unsigned long long ull;

ull findInRange(ull start, ull end){
	string s_str = to_string(start);
	ull sum = 0ull;
        
		
	ull begin = stoull(s_str.substr(0,(s_str.length()/2 > 0) ? s_str.length()/2 : 1));
	while(true){
		s_str = to_string(begin) + to_string(begin);
			
		ull cand = stoull(s_str);
		if(cand <= end && cand >= start)
			sum += cand;
		else if(cand > end)
			break;

		begin++;
	}
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
