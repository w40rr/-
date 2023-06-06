#ifndef DRAW_H
#define DRAW_H
#include <GL/glut.h>
#include <cmath>
#include <array>
#include <ctime>

struct Position{
    GLfloat x,y;
};

struct Figure{
    Position pos;
};
void SecondBackground(Figure& f2);
void ThirdBackground(Figure& f3);
void FourthBackground(Figure& f4);
void FifthBackground(Figure& f5);
void drawBackground(Figure& fb);
void drawRocket(Figure& f);
float randFloat();
void stars();
void phoneSpace();
void drawRocket2(Figure& f);
void drawPhone();
void renderScene();
void drawMoon();
void drawEarth();
void FirstBackground();
void drawCircle(float radius, float x, float y,GLfloat q,GLfloat w,GLfloat e);
void drawAnima();
#endif // DRAW_H
