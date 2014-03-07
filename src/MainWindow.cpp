#include "MainWindow.h"

#include <QtGui>
#include "ui_MainWindow.h"

#include "SceneWindow.h"

MainWindow::MainWindow()
{
	Ui::MainWindow uiMainWindow;
	uiMainWindow.setupUi(this);

	_sceneWindow = new SceneWindow();
	this->setCentralWidget(_sceneWindow);
}

MainWindow::~MainWindow()
{

}