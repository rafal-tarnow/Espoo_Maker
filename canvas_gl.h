#pragma once

#include <QOpenGLWidget>
#include <QWheelEvent>

class CanvasGL : public QOpenGLWidget
{
    Q_OBJECT
public:
    explicit CanvasGL(QWidget *parent = nullptr);
    ~CanvasGL();

protected:
    virtual void initializeGL() override;
    virtual void resizeGL(int w, int h) override;
    virtual void paintGL() override;



    virtual void wheelEvent(QWheelEvent *event) override;

signals:

public slots:
};
