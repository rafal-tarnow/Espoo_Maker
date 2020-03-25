#include "canvas_gl.h"
#include "frame.hpp"
#include <iostream>

using namespace std;

CanvasGL::CanvasGL(QWidget *parent) : QOpenGLWidget(parent)
{

}

CanvasGL::~CanvasGL()
{
    frame_uninit();
}

void CanvasGL::initializeGL()
{
    frame_init();
}

void CanvasGL::resizeGL(int /*width*/, int /*height*/)
{

}

void CanvasGL::paintGL()
{
    frame_render(width(), height());
    update();
}

void CanvasGL::wheelEvent(QWheelEvent *event)
{

    if((event->angleDelta().y()) > 0)
        frame_scroll(1);
    else
        frame_scroll(-1);

    event->accept();
}
