#include<iostream>
#include<vector>

struct Rotation{
	char dir;
	int dist;
};

int main(){
	char dir;
	int val;
	
	int zero_hits = 0;
	int value = 50;
	while(std::cin>>dir>>val){
		if(dir == 'L')
			value -= val;
		else
			value += val;

		value = (value % 100 + 100) % 100;

		if(value == 0)
			zero_hits++;
	}

	std::cout<<zero_hits<<"\n";

	return 0;
}
