#pragma once

#include <list>
using namespace std;

class Widget
{
private:
	
	//child widgets
	list<Widget*> m_widgets;

	//x pos
	int m_x;

	//y pos
	int m_y;

	//width
	int m_w;

	//height
	int m_h;

	//the type of widget
	string m_Type;

protected:

	//construct the widget
	Widget(string type, int x, int y, int w, int h);

	//write all the widget data out to console
	void WriteWidgetDebugInfo(int indents) const;

	//write any widget specific data out to console
	virtual void WriteTypeSpecificData() const;

public:
	
	//destructor
	virtual ~Widget(void);

	//add a widget as a child of this one
	void AddWidget(Widget *widget);

	//remove a child widget from this dude
	void RemoveWidget(Widget *widget);

	//write all the debug info out to console
	void DebugInfo() const;
};

