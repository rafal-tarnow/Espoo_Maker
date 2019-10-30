#pragma once

#include <QOpenGLWidget>

class CanvasGL : public QOpenGLWidget
{
    Q_OBJECT
public:
    explicit CanvasGL(QWidget *parent = nullptr);

protected:
    virtual void initializeGL() override;
    virtual void resizeGL(int w, int h) override;
    virtual void paintGL() override;
signals:

public slots:
};
