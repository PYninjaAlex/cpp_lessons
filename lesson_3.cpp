#include <iostream>
#include <vector>


int even_num(int x) {
	if (x % 2 == 0) {
		return 1;
	}
	else { return 0; }
}



void filter(std::vector<int> numbers) {
	std::vector<int> output;
	for (int n : numbers) {
		if (even_num(n)) {
			output.push_back(n);
		}
	}
	for (int i = 0; i < output.size(); i++) {
		if (i != 0) {
			std::cout << ", ";
		}
		std::cout << output[i];
	}
}