//	Tyler Mulley
//	11/3/15
//	hw4_starter.cpp
//	this file provides the implementation for the QT class 
//	and its many members.

#include "hw4_starter.h"

#include <QString>
#include <QFileDialog>
#include <QPlainTextEdit>
#include <string>
#include <iostream>
 using std::string;


HW4_Starter::HW4_Starter(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	dialSetting = 1;
}

HW4_Starter::~HW4_Starter()
{

}

void HW4_Starter::loadFile() {
	QString filename = QFileDialog::getOpenFileName(this, tr("Open File"), QString(), tr("Images (*.bmp)"));
	QByteArray ba = filename.toLatin1();
	const char *fname = ba.data();

	steg.load(fname);

	if(filename != QString()) {
		emit sendPixmap(QPixmap(filename));
	}
}

void HW4_Starter::saveFile() {
	QString filename = QFileDialog::getSaveFileName(this, tr("Save File"), QString(), tr("Images (*.bmp)"));
	QByteArray ba = filename.toLatin1();
	const char *fname = ba.data();

	steg.save(fname);
	
	if(filename != QString()) {
		emit sendPixmap(QPixmap(filename));
	}
}

void HW4_Starter::writeText() {

	QString text = ui.plainTextEdit->toPlainText();
	std::string textString = text.toStdString();

	int size = textString.length();

	// starting char
	QByteArray ba = "#";
	// messgae
	ba.append(text.toLatin1());
	// null character
	ba.append('\0');

	const char *fname = ba.data();

	steg.writeOut(fname, (size + 2), dialSetting);
	
}

void HW4_Starter::readText() {

	string textRead = steg.readOut(dialSetting);

	QString text = QString::fromStdString(textRead);
	ui.plainTextEdit->setPlainText(text);
}

void HW4_Starter::dialUpdate(int dialValue){
	
	dialSetting = dialValue;
	int charactersInImage = ((dialSetting * steg.getWidth() * steg.getHeight())/8 - 2);
	QString text = QString::number(charactersInImage) + " characters can be embedded.";
	emit(sendQString(text));

}
