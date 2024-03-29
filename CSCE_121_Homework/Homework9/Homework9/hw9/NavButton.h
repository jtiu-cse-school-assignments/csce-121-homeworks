#pragma once
#include <string>
#include <vector>
#include <FL/Fl.H>
#include <FL/Fl_JPEG_Image.H>
#include <FL/Fl_Button.H>

class NavButton : public Fl_Button {
	std::string label;
	Fl_JPEG_Image* imageLabel;
	int clickCount;
	static int totalClicks;
	
	int thumbnailsize;
	

public:
	NavButton(std::string imageFilename, std::string label, 
		int x, int y, int thumbnailsize, int imageIndex = 0, 
		const char *L = 0);

	std::string getLabel() const;
	void setImage(std::string);

	int handle(int event);

};