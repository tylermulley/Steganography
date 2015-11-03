#include "plainTextEdit.h"


plainTextEdit::plainTextEdit(QWidget* parent) : QPlainTextEdit(parent) {
}


plainTextEdit::~plainTextEdit(void) {
}

void plainTextEdit::writeText(void) {
	QString text = "BLAHH";
	insertPlainText(text);
}