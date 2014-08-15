#pragma once
#include "basewidget.h"
class PanelWidget :
	public Widget
{
public:
	PanelWidget(int x, int y, int w, int h) : Widget("PanelWidget", x,y,w,h) {}
	virtual ~PanelWidget(void);
};

