#include <iostream>
#include <random>
#include <cstdlib>
int main(){
	std::random_device rd;
	int random_number = std::uniform_int_distribution(0, 99)(rd);
	while(true){
		std::cout << "Enter Guess: ";
		int guess, range_min = 0, range_max = 99;
		std::cin >> guess;
		if(std::cin.fail()){
			std::cerr << "Error encountered, exiting...";
			return EXIT_FAILURE;
		}
		if(guess < range_min or guess > range_max){
			std::cerr << "[WARNING] : Number must be between 0 and 99";
			std::cout << "\n";
			continue;
		}
		auto result = guess <=> random_number;
		if(result < 0){
			std::cout << "You Guessed Smaller\n";
		}
		else if(result > 0){
			std::cout << "You Guessed Larger\n";
		}
		else{
			std::cout << "Correct Guess\n";
			break;
		}
	}
	return EXIT_SUCCESS;
}
