#include "html_writer.hpp"
#include <iostream>
#include <iomanip>
using std::cout;

void OpenDocument(){
	cout << "Opening Doc\n";
}

void CloseDocument(){
	cout << "Closing Doc\n";
}

void AddCSSStyle(const std::string& stylesheet){
	std::string path = "/home/parth/modernc20";
	cout << "Adding CSS to Path\n" << path << stylesheet;
}

void AddTitle(const std::string& title){
	cout << title << "\n";
}

void OpenBody(){
	cout << "Opening Body\n";
}

void CloseBody(){
	cout << "Closing Body\n";
}

void OpenRow(){
	cout << "Generating New Row\n";
}

void CloseRow(){
	cout << "Closing Row\n";
}

void AddImage(const std::string& img_path, float score, bool highlight = false){
	if(img_path.size() < 4) {
		cout << "Error\n";
		return;
	}
	int location = img_path.size() - 4;
	std::string extension = img_path.substr(location, 4);
	if(extension != std::string(".png") and extension != std::string(".jpg")){
		cout << "Error\n";
		return;
	}
	cout << "Display Image\n";
	cout << std::setprecision(2) << std::fixed << score << "\n";
	if(highlight == true) cout << "Color Border\n";
}