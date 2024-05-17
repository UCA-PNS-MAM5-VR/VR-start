#ifndef VRWIDGET_H
#define VRWIDGET_H

#include <QOpenGLWidget>
#include <QOpenGLFunctions_3_3_Core>
#include <QMatrix4x4>
#include <QMessageBox>

class VRWidget : public QOpenGLWidget, protected QOpenGLFunctions_3_3_Core
{
    Q_OBJECT

public:
    VRWidget(QWidget *parent = nullptr);
    ~VRWidget();

protected:
    void initializeGL();
    void resizeGL(int width, int height);
    void paintGL();
    void initializeVAO();
    void initializeShader();

private:
    GLuint m_programme;         //identifiant du shader program
    GLuint m_vbo;               //identifiant du Vertex Buffer Object
    GLuint m_ibo;               //identifiant de l'index buffer
    GLuint m_vao;               //identifiant du Vertex Array Object
};
#endif // VRWIDGET_H
