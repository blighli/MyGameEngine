#include <QApplication>
#include <QDialog>

#include "ui_DisplayWidget.h"

int main(int argc, char* argv[])
{
	QApplication app(argc, argv);
	Ui::Form form;
	QDialog* dialog = new QDialog();
	form.setupUi(dialog);
	dialog->show();
	return app.exec();
}