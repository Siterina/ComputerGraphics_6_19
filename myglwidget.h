#ifndef MYGLWIDGET_H
#define MYGLWIDGET_H

#include <QWidget>
#include <QGLWidget>

class MyGLWidget : public QGLWidget
{
    Q_OBJECT
public:
    explicit MyGLWidget(QWidget *parent = 0);

protected:
    void initializeGL();
    void paintGL();
    void resizeGL(int width, int height);
    QVector3D figurePoint(double phi, double psi);
    void addToMassive(QVector <QVector3D> tempPoint, QVector3D n);
    void countFigurePoints();
    QVector3D bottomPoint(double phi);
    void genTextures();

private:

    QVector <GLfloat> vertex;
    QVector <GLfloat> normal;
    QVector <GLuint> index;
    QVector <GLfloat> textures;

    float xRot;
    float yRot;
    float zRot;

    float xMove;
    float yMove;
    float zMove;

    float xScale;
    float yScale;
    float zScale;

    float xLightPos;
    float yLightPos;
    float zLightPos;

    float xMaterialColor;
    float yMaterialColor;
    float zMaterialColor;

    float xLightColor;
    float yLightColor;
    float zLightColor;

    float xAmbientColor;
    float yAmbientColor;
    float zAmbientColor;

    double materialShiness;
    double radius;
    double count;

    bool addTexture;
    bool addAnimation;
    QString texture;

signals:

public slots:
    void setXRotation(int angle);
    void setYRotation(int angle);
    void setZRotation(int angle);

    void moveXDirection(int shift);
    void moveYDirection(int shift);
    void moveZDirection(int shift);

    void scaleXDirection(int scale);
    void scaleYDirection(int scale);
    void scaleZDirection(int scale);

    void setXLightPos(int position);
    void setYLightPos(int position);
    void setZLightPos(int position);

    void setXMaterialColor(int color);
    void setYMaterialColor(int color);
    void setZMaterialColor(int color);

    void setXLightColor(int color);
    void setYLightColor(int color);
    void setZLightColor(int color);

    void setXAmbientColor(int color);
    void setYAmbientColor(int color);
    void setZAmbientColor(int color);

    //void setMaterialShiness(int intence);
    void setApproximation(int aCount);

    void addTextureCheck(bool cheked);
    void addAnimationCheck(bool cheked);

    void setTexture(QString type);

};

#endif // MYGLWIDGET_H
