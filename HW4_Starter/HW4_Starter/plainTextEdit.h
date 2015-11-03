#pragma once

#include <QPlainTextEdit>

class plainTextEdit :	public QPlainTextEdit
{
	Q_OBJECT
public:
	plainTextEdit(QWidget* parent = 0);
	~plainTextEdit(void);

public slots:
	void writeText();
};

