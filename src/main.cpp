#include <QApplication>
#include <QMainWindow>

#include "ui_MainWindow.h"

int main(int argc, char* argv[])
{
	QApplication app(argc, argv);
	Ui::MainWindow uiMainWindow;
	QMainWindow* mainWindow = new QMainWindow();
	uiMainWindow.setupUi(mainWindow);
	mainWindow->show();
	return app.exec();
}