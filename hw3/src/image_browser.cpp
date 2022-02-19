
#include "image_browser.hpp"
#include "html_writer.hpp"
#include <iostream>
using std::cout;


void AddFullRow(const image_browser::ImageRow& row, bool first_row = false){
	for(auto image : row){
		auto [img_path, score] = image;
		html_writer::AddImage(img_path, score, first_row);
	}
}

void CreateImageBrowser(const std::string& title, const std::string& stylesheet,
                        const std::vector<image_browser::ImageRow>& rows){
	html_writer::OpenDocument();
	html_writer::AddCSSStyle(stylesheet);
	html_writer::AddTitle(title);
	bool first = 1;
	for(auto row : rows){
		bool highlight = first;
		AddFullRow(row, highlight);
		first = 0;
	}
}
