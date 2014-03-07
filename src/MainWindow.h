#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <vector>
#include <string>

class SceneWindow;

class MainWindow : public QMainWindow
{
	Q_OBJECT

public:
	MainWindow();
	~MainWindow();
private:
	SceneWindow* _sceneWindow;

};

#endif //MAINWINDOW_H