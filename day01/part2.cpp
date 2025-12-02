#include<iostream>
#include<vector>
#include<cmath>

int main(){
	char dir;
	int val;
	
	int zero_hits = 0;
	int value = 50;

	while(std::cin>>dir>>val){
		int dist_to_zero;
		if(dir == 'L')
			dist_to_zero = (value ==0) ? 100 : value;
		else
			dist_to_zero = 100 -value;
		
		if(val >= dist_to_zero){
			zero_hits++;

			int rem = val - dist_to_zero;

			zero_hits += rem / 100;
		}

		if(dir == 'L')
			value -= val;
		else
			value += val;
		

		value = (value % 100 + 100) % 100;	
	}

	std::cout<<zero_hits<<"\n";

	return 0;
}
