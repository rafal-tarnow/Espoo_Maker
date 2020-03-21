#include "canvas_gl.h"
#include "frame.hpp"

CanvasGL::CanvasGL(QWidget *parent) : QOpenGLWidget(parent)
{

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
