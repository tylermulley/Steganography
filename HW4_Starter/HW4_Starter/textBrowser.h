#pragma once

#include <QTextBrowser>

class textBrowser :	public QTextBrowser
{
	Q_OBJECT
public:
	textBrowser(QWidget* parent = 0);
	~textBrowser(void);

};

