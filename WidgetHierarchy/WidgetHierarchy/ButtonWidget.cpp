#include "ButtonWidget.h"
#include <iostream>
#include <string>

ButtonWidget::~ButtonWidget(void)
{
}

void ButtonWidget::WriteTypeSpecificData() const
{
	cout << "text=\"" << m_text << "\", enabled=" << (m_enabled ? "true" : "false") << ", ";
}
