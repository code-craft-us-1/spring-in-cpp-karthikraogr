#include <vector>
#include <iostream>
#include <numeric>

namespace Statistics {
    // define the Stats structure here. See the tests to infer its properties
    struct Stats{
	float average;
	float max;
	float min; 
    };

    Stats ComputeStatistics(const std::vector<float>& );
}
