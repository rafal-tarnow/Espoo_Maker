#pragma once

#include <QOpenGLWidget>
#include <QOpenGLFunctions>

class Canvas : public QOpenGLWidget
{
public:
    Canvas(QWidget *parent) : QOpenGLWidget(parent) { }

protected:
    void initializeGL() override
    {
        // Set up the rendering context, load shaders and other resources, etc.:
        QOpenGLFunctions *f = QOpenGLContext::currentContext()->functions();
        f->glClearColor(1.0f, 1.0f, 1.0f, 1.0f);

    }

    void resizeGL(int w, int h) override
    {
        // Update projection matrix and other size related settings:

    }

    void paintGL() override
    {
        // Draw the scene:
        QOpenGLFunctions *f = QOpenGLContext::currentContext()->functions();
        f->glClear(GL_COLOR_BUFFER_BIT);

    }

};
