#pragma once
#include "basewidget.h"
class ButtonWidget :
	public Widget
{
private:
	string m_text;
	bool m_enabled;

public:
	ButtonWidget(string msg, int x, int y, int w, int h) : Widget("ButtonWidget", x,y,w,h), m_text(msg), m_enabled(true) {}
	virtual ~ButtonWidget(void);

	virtual void WriteTypeSpecificData() const;

	void SetEnabled(bool enable)
	{
		m_enabled = enable;
	}
};

