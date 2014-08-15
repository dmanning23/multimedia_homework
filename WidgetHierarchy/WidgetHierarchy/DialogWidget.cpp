#include "DialogWidget.h"
#include <iostream>
#include <string>

void DialogWidget::WriteTypeSpecificData() const
{
	cout << "header=\"" << m_msg << "\", ";
}

DialogWidget::~DialogWidget(void)
{
}
