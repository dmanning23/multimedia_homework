#include "BaseWidget.h"
#include <iostream>
#include <string>

Widget::Widget(string type, int x, int y, int w, int h)
{
	m_Type = type;
	m_x = x;
	m_y = y;
	m_w = w;
	m_h = h;
}

Widget::~Widget(void)
{
	for (list<Widget*>::iterator iter = m_widgets.begin();
		iter != m_widgets.end();
		iter++)
	{
		delete (*iter);
	}
	m_widgets.clear();
}

void Widget::AddWidget(Widget *widget)
{
	m_widgets.push_back(widget);
}

void Widget::RemoveWidget(Widget *widget)
{
	m_widgets.remove(widget);
}

void Widget::DebugInfo() const
{
	WriteWidgetDebugInfo(0);
}

void Widget::WriteWidgetDebugInfo(int indents) const
{
	//write out the tabs
	for (int i = 0; i < indents; i++)
	{
		cout << '\t';
	}

	//write out the type name
	cout << m_Type << ": ";

	//write out any type specific data
	WriteTypeSpecificData();

	//write out location data
	cout << "x=" << m_x << ", y=" << m_y << ", w=" << m_w << ", h=" << m_h << endl;

	//write out child widgets
	indents++;
	for (list<Widget*>::const_iterator iter = m_widgets.begin();
		iter != m_widgets.end();
		iter++)
	{
		(*iter)->WriteWidgetDebugInfo(indents);
	}
}

void Widget::WriteTypeSpecificData() const
{
}