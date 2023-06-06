#include <GL/glut.h>
#include <iostream>
#include <cmath>
#include <array>
#include <ctime>
#include "draw.h"

Figure f = { .0, .0 };
Figure f2 = { .0, -0.5 };
Figure f3 = { 1.5, -6.6 };
Figure f4 = { 1.5, -6.6 };
Figure f5 = { .0, 3.5 };
Figure fb = { .0, -1 };

Figure o = { .0, .0 };

Figure B = { .0, .0 };

float SpeedY = 0.0095;
float SpeedX = 0.0095;

void animate(int value){
 glutPostRedisplay();
 glutTimerFunc(1000/60,animate,1);
}

void drawAnima() {
    phoneSpace();
    drawEarth();
    f.pos.y += SpeedY;
    B.pos.y += SpeedY;

    drawRocket(f);
    if (f.pos.y > 3.5) {
        glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
        SecondBackground(f2);
        f2.pos.y += SpeedY;
        drawRocket(f2);
        if (f2.pos.y > 3.5){
            glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
            drawBackground(fb);
            fb.pos.y += SpeedY;
            drawRocket(fb);
            if (fb.pos.y > 3.5) {
                glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
                ThirdBackground(f3);
                stars();             
                glRotatef(55, 1, 1, 1);
                glTranslatef(-1, 0.4, 0);
                f3.pos.y += SpeedY;
                f3.pos.x += SpeedX;
                drawRocket2(f3);
                if (f3.pos.y > 3.5) {
                 FourthBackground(f4);
                    stars();
                    drawMoon();
                    glTranslatef(-1, 0.8, 0);
                    glRotatef(55, 1, 1, 1);
                    f4.pos.y += SpeedY;
                    f4.pos.x += SpeedX;
                 drawRocket2(f4);
                    if (f4.pos.y > 3.5) {
                        FifthBackground(f5);
                        drawCircle(0.6, -1, 0.75,255,255,0);//sun
                        drawCircle(0.4,0,0,70,130,180);//earth
                        glPushMatrix();
                     if(f5.pos.y > 0)
                        f5.pos.y -= SpeedY;
                        glPopMatrix();
                        drawRocket(f5);

                    }
                }
            }
        }
    }
}

int main(int argc, char* argv[]) {
    srand(0);
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DEPTH | GLUT_DOUBLE | GLUT_RGBA);
//    glutInitWindowPosition(100, 100);
    glutInitWindowSize(800, 600);
    glutCreateWindow("Space");
    glutDisplayFunc(renderScene);
    glutTimerFunc(1000 / 60, animate, 1);

    glutMainLoop();

    return 0;

}
void renderScene(void) {
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

    //drawEarth();
    //Burn(B);
    //SecondBackground(f2);
    //Burn(B);
    //ThirdBackground(f3);
//    FourthBackground(f4);
//    FifthBackground(f5);
//    stars();

    //FirstScene(d);
    //drawRocket(f);
     //standOne(s);
     //standTwo();

    drawAnima();

    //DrawStars(s);
    // StarSpace(s);




    glutSwapBuffers();

}
