#include <iostream>
#include <cstdlib>
#include <sstream>
#include <set>
int main(int argc, char* argv[]){
	if(argc != 3){
		std::cerr << "Not Accurate Input Arguments, Aborting";
		return EXIT_FAILURE;
	}
	std::stringstream ss1{argv[1]}, ss2{argv[2]};
	int val1 = -1, val2 = -1;
	std::string s1, s2;
	ss1 >> val1 >> s1;
	ss2 >> val2 >> s2;
	if(s1 == std::string(".txt") and s2 == std::string(".txt")){
		int mean_rounded_down = (val1 + val2) / 2;
		std::cout << "Mean: " << mean_rounded_down << "\n";
	}
	else if(s1 == std::string(".png") and s2 == std::string(".png")){
		int sum = val1 + val2;
		std::cout << "Sum: " << sum << "\n";
	}
	else if(s1 == std::string(".txt") and s2 == std::string(".png")){
		if(val2 == 0){
			std::cerr << "Divide by 0, Aborting\n";
			return EXIT_FAILURE;
		}
		int remainder = val1 % val2;
		std::cout << "Remainder: " << remainder << "\n";
	}
	else{
		std::cerr << "Wrong Input, Aborting\n";
		return EXIT_FAILURE;
	}
	return EXIT_SUCCESS;
}