#pragma comment(lib,"BMP_Handler32d")

#ifndef HW4_STARTER_H
#define HW4_STARTER_H

#include <QtWidgets/QMainWindow>
#include "ui_hw4_starter.h"
#include "Steganography.h"

class HW4_Starter : public QMainWindow
{
	Q_OBJECT

public:
	HW4_Starter(QWidget *parent = 0);
	~HW4_Starter();

private:
	Ui::HW4_StarterClass ui;
	//object for steganography here
	Steganography steg;
	int dialSetting;
public slots:
	void loadFile(void);
	void saveFile(void);
	void writeText(void);
	void readText(void);
	void dialUpdate(int);
signals:
	void sendPixmap(QPixmap);
	void sendQString(QString);
};

#endif // HW4_STARTER_H
