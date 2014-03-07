#ifndef SCENEWINDOW_H
#define SCENEWINDOW_H

#include <QGLWidget>

class SceneWindow : public QGLWidget
{
	Q_OBJECT
public:
	SceneWindow(QWidget *parent = 0);
	~SceneWindow();

protected:
	void initializeGL();
	void resizeGL(int w, int h);
	void paintGL();
	void mousePressEvent(QMouseEvent *event);
	void mouseMoveEvent(QMouseEvent *event);

private:
	GLfloat rotationX;
	GLfloat rotationY;
	GLfloat rotationZ;
	QPoint lastPos;


};

#endif SCENEWINDOW_H