#include "stats.h"
#include<algorithm>

Statistics::Stats Statistics::ComputeStatistics(const std::vector<float>& vec) {
    //Implement statistics here
	Statistics::Stats example;
	example.average = std::accumulate(vec.begin(), vec.end(), 0.0)/vec.size();
	example.max = *max_element(vec.begin(), vec.end());
	example .min = *min_element (vec.begin(), vec.end());
	return example;
}

int main(){
	
/*
	//sample test.
	std::vector<float> vect1;
	vect1.push_back(1.5);
    	vect1.push_back(8.9);
    	vect1.push_back(3.2);
	vect1.push_back(4.5);	
	Statistics::Stats ex = Statistics::ComputeStatistics(vect1);
	std::cout<<"average: "<<ex.average<<std::endl;
	std::cout<<"max: "<<ex.max<<std::endl;
	std::cout<<"min: "<<ex.min<<std::endl;
*/	
	return 0;
}
