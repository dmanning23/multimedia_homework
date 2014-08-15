#pragma once
#include "basewidget.h"

class PictureWidget :
	public Widget
{
private:
	string m_file;
public:
	PictureWidget(string file, int x, int y, int w, int h) : Widget("PictureWidget", x,y,w,h), m_file(file) {}

	virtual ~PictureWidget(void);

	//write any widget specific data out to console
	virtual void WriteTypeSpecificData() const;
};

