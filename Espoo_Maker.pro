#-------------------------------------------------
#
# Project created by QtCreator 2019-10-18T11:50:05
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Espoo_Maker
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

CONFIG += c++11

INCLUDEPATH += . ./libs

SOURCES += \
        main.cpp \
        mainwindow.cpp \
    canvas_gl.cpp \
    frame.cpp \
    mesh.cpp \
    Renderer/camera.cpp

HEADERS += \
        mainwindow.h \
    canvas_gl.h \
    glm_includes.hpp \
    frame.hpp \
    opengl_includes.hpp \
    mesh.hpp \
    Renderer/material.hpp \
    Renderer/scene.hpp \
    Renderer/Renderer_API/OpenGl_ES_2_0/texture.hpp \
    Renderer/Renderer_API/OpenGl_ES_2_0/framebuffer.hpp \
    Renderer/Renderer_API/OpenGl_ES_2_0/shader.hpp \
    Renderer/camera.hpp

FORMS += \
        mainwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    application.qrc
