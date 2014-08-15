#include "PictureWidget.h"
#include <iostream>
#include <string>

//write any widget specific data out to console
void PictureWidget::WriteTypeSpecificData() const
{
	cout << "img=\"" << m_file << "\", ";
}

PictureWidget::~PictureWidget(void)
{
}
