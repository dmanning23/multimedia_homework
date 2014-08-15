#pragma once
#include "basewidget.h"
class DialogWidget :
	public Widget
{
private:
	string m_msg;
public:
	DialogWidget(string msg, int x, int y, int w, int h) : Widget("DialogWidget", x,y,w,h), m_msg(msg) {}

	virtual ~DialogWidget(void);

	//write any widget specific data out to console
	virtual void WriteTypeSpecificData() const;
};

