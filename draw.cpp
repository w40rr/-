#include "draw.h"


float randFloat() {//для звезд
    return (float)rand() / RAND_MAX;
}

void drawMoon(){
      glLoadIdentity();
      glScalef(0.5, 0.5, 1);
      glTranslatef(1.35, 1.5, 0);
       glBegin(GL_QUADS);
       glColor3ub(218, 230, 254);
       glVertex2f(-0.5, -0.5);
       glVertex2f(0.5, -0.5);
       glVertex2f(0.5, 0.5);
       glVertex2f(-0.5, 0.5);

       glColor3ub(177, 185, 206);
       glVertex2f(0.12,0.38);
       glVertex2f(0.38,0.38);
       glVertex2f(0.38,0);
       glVertex2f(0.12,0);

       glVertex2f(0.38,-0.12);
       glVertex2f(0.38,-0.25);
       glVertex2f(-0.12,-0.25);
       glVertex2f(-0.12,-0.12);

       glVertex2f(-0.12,0.24);
       glVertex2f(-0.12,-0.12);
       glVertex2f(0,-0.12);
       glVertex2f(0,0.24);

       glVertex2f(-0.12,0);
       glVertex2f(-0.25,0);
       glVertex2f(-0.25,-0.12);
       glVertex2f(-0.12,-0.12);


       glColor3ub(95, 103, 122);
       glVertex2f(-0.5,0.5);
       glVertex2f(-0.5,-0.5);
       glVertex2f(-0.25,-0.5);
       glVertex2f(-0.25,0.5);

       glVertex2f(-0.25,-0.5);
       glVertex2f(0.5,-0.5);
       glVertex2f(0.5,-0.25);
       glVertex2f(-0.25,-0.25);

       glColor3ub(83, 86, 101);

       glVertex2f(0.38,-0.25);
       glVertex2f(0.25,-0.25);
       glVertex2f(0.25,-0.37);
       glVertex2f(0.38,-0.37);

       glVertex2f(0,0.5);
       glVertex2f(-0.12,0.5);
       glVertex2f(-0.12,0.38);
       glVertex2f(0,0.38);

       glVertex2f(-0.25,0.5);
       glVertex2f(-0.37,0.5);
       glVertex2f(-0.37,0.38);
       glVertex2f(-0.25,0.38);

       glVertex2f(-0.25,-0.25);
       glVertex2f(-0.37,-0.25);
       glVertex2f(-0.37,-0.37);
       glVertex2f(-0.25,-0.37);

       glVertex2f(0.38,0);
       glVertex2f(0.5,0);
       glVertex2f(0.5,-0.12);
       glVertex2f(0.38,-0.12);

       glVertex2f(0,-0.5);
       glVertex2f(0,-0.38);
       glVertex2f(0.12,-0.38);
       glVertex2f(0.12,-0.5);

       glVertex2f(0.12,0.12);
       glVertex2f(0.12,-0.12);
       glVertex2f(0,-0.12);
       glVertex2f(0,0.12);

       glVertex2f(-0.5,0.12);
       glVertex2f(-0.25,0.12);
       glVertex2f(-0.25,0);
       glVertex2f(-0.5,0);

       glVertex2f(0.26,0.12);
       glVertex2f(0.26,0.38);
       glVertex2f(0.38,0.38);
       glVertex2f(0.38,0.12);

       glColor3ub(118,126,149);

       glVertex2f(-0.25,0.24);
       glVertex2f(-0.25,0.12);
       glVertex2f(-0.37,0.12);
       glVertex2f(-0.37,0.24);

       glVertex2f(-0.25,-0.25);
       glVertex2f(-0.25,-0.12);
       glVertex2f(-0.37,-0.12);
       glVertex2f(-0.37,-0.25);

       glVertex2f(-0.25,-0.25);
       glVertex2f(-0.25,-0.37);
       glVertex2f(-0.12,-0.37);
       glVertex2f(-0.12,-0.25);

       glVertex2f(0.5,-0.25);
       glVertex2f(0.5,-0.37);
       glVertex2f(0.38,-0.37);
       glVertex2f(0.38,-0.25);

       glEnd();
       glFlush();
}

void drawEarth(){
    glLoadIdentity();
    glScalef(1, 1, 1);
    glTranslatef(0, 0, 0);
    glBegin(GL_QUADS);
    glColor3ub(0,80,190);
    glVertex2f(-1,1);
    glVertex2f(-1,-1);
    glVertex2f(1,-1);
    glVertex2f(1,1);
    glColor3ub(211, 198, 156);
    glVertex2f(-1,-0.75);
    glVertex2f(1,-0.75);
    glVertex2f(1,-1);
    glVertex2f(-1,-1);

    glColor3ub(130,130,130);
    glVertex2f(0.15,-0.85);
    glVertex2f(0.15,-0.9);
    glVertex2f(-0.15,-0.9);
    glVertex2f(-0.15,-0.85);

    glColor3ub(90,90,90);
    glVertex2f(-0.15,-0.85);
    glVertex2f(-0.21,-0.78);
    glVertex2f(-0.21,-0.825);
    glVertex2f(-0.15,-0.9);

    glColor3ub(170,170,170);
    glVertex2f(-0.21,-0.78);
    glVertex2f(-0.15,-0.85);
    glVertex2f(0.15,-0.85);
    glVertex2f(0.07,-0.78);

    glColor3ub(55,55,55);
    glVertex2f(0.24, -0.87);
    glVertex2f(0.24,0);
    glVertex2f(0.34,0);
    glVertex2f(0.34,-0.87);

    glColor3ub(12,12,12);
    glVertex2f(0.24,0);
    glVertex2f(0.24,-0.87);
    glVertex2f(0.2,-0.82);
    glVertex2f(0.2,0.05);

    glColor3ub(40,40,40);
    glVertex2f(0.34,0);
    glVertex2f(0.24,0);
    glVertex2f(0.2,0.05);
    glVertex2f(0.3,0.05);

    glColor3ub(55,55,55);
    glVertex2f(0.24,-0.3);
    glVertex2f(0.07,-0.3);//серые держатели
    glVertex2f(0.07,-0.28);
    glVertex2f(0.24,-0.28);

    glVertex2f(0.24,-0.15);
    glVertex2f(0.07,-0.15);
    glVertex2f(0.07,-0.13);
    glVertex2f(0.24,-0.13);

    glColor3ub(12,12,12);//черные держатели
    glVertex2f(0.2,-0.2);
    glVertex2f(0.2,-0.22);
    glVertex2f(0.03,-0.22);
    glVertex2f(0.03,-0.2);

    glVertex2f(0.2,-0.07);
    glVertex2f(0.2,-0.05);
    glVertex2f(0.03,-0.05);
    glVertex2f(0.03,-0.07);
    glEnd();

}

void drawRocket(Figure& f){
    glPushMatrix();
    glLoadIdentity();
    glScalef(0.2,0.6,1);
    glTranslatef(-0.2, -1, 1);
    glTranslatef(f.pos.x, f.pos.y, 0);
    glBegin(GL_TRIANGLES);//треугольник сверху
    glColor3ub(255,0,0);
    glVertex2f(0,0.9);
    glVertex2f(0.3,0.7);
    glVertex2f(-0.3,0.7);
    glEnd();
    glBegin(GL_TRIANGLES);//тень треугольника
    glColor3ub(139, 0, 0);
    glVertex2f(0,0.9);
    glVertex2f(-0.3,0.7);
    glVertex2f(-0.2,0.7);
    glEnd();
    glBegin(GL_QUADS);//левая ножка
    glColor3ub(255,255,255);
    glVertex2f(-0.2,-0.3);
    glVertex2f(-0.5,-0.5);
    glVertex2f(-0.5,-0.2);
    glVertex2f(-0.3,0);

    glColor3ub(255,255,255);//тело ракеты
    glVertex2f(0.3,-0.3);
    glVertex2f(0.3,0.7);
    glVertex2f(-0.3,0.7);
    glVertex2f(-0.3,-0.3);

    glVertex2f(0.3,0);
    glVertex2f(0.5,-0.2);
    glVertex2f(0.5,-0.5);
    glVertex2f(0.2,-0.3);

    glColor3ub(220, 220, 220);//тень тела
    glVertex2f(-0.3,0.7);
    glVertex2f(-0.3,0);
    glVertex2f(-0.2,0);
    glVertex2f(-0.2,0.7);

    glVertex2f(-0.3,0.7);
    glVertex2f(-0.2,0.7);
    glVertex2f(0.2,0.7);
    glVertex2f(-0.3,0.7);

    glVertex2f(-0.5,-0.2);
    glVertex2f(-0.5,-0.5);
    glVertex2f(-0.2,0);
    glVertex2f(-0.3,0);

    glEnd();
    glPopMatrix();
}

void drawRocket2(Figure& f){
    glPushMatrix();
    glLoadIdentity();
    glRotatef(-60,1,1,1);
    glTranslatef(-1, 1.2, 1);
     glScalef(0.2,0.6,1);
    glTranslatef(f.pos.x, f.pos.y, 0);
    glBegin(GL_TRIANGLES);//треугольник сверху
    glColor3ub(255,0,0);
    glVertex2f(0,0.9);
    glVertex2f(0.3,0.7);
    glVertex2f(-0.3,0.7);
    glEnd();
    glBegin(GL_TRIANGLES);//тень треугольника
    glColor3ub(139, 0, 0);
    glVertex2f(0,0.9);
    glVertex2f(-0.3,0.7);
    glVertex2f(-0.2,0.7);
    glEnd();
    glBegin(GL_QUADS);//левая ножка
    glColor3ub(255,255,255);
    glVertex2f(-0.2,-0.3);
    glVertex2f(-0.5,-0.5);
    glVertex2f(-0.5,-0.2);
    glVertex2f(-0.3,0);

    glColor3ub(255,255,255);//тело ракеты
    glVertex2f(0.3,-0.3);
    glVertex2f(0.3,0.7);
    glVertex2f(-0.3,0.7);
    glVertex2f(-0.3,-0.3);

    glVertex2f(0.3,0);
    glVertex2f(0.5,-0.2);
    glVertex2f(0.5,-0.5);
    glVertex2f(0.2,-0.3);

    glColor3ub(220, 220, 220);//тень тела
    glVertex2f(-0.3,0.7);
    glVertex2f(-0.3,0);
    glVertex2f(-0.2,0);
    glVertex2f(-0.2,0.7);

    glVertex2f(-0.3,0.7);
    glVertex2f(-0.2,0.7);
    glVertex2f(0.2,0.7);
    glVertex2f(-0.3,0.7);

    glVertex2f(-0.5,-0.2);
    glVertex2f(-0.5,-0.5);
    glVertex2f(-0.2,0);
    glVertex2f(-0.3,0);
    glBegin(GL_TRIANGLES);
    glColor3ub(255,140,0);//ogon'
    glVertex2f(0.3,-0.3);
    glColor3ub(255,140,0);
    glVertex2f(-0.3,-0.3);
    glColor3ub(0,0,0);
    glVertex2f(0,-0.5);

    glEnd();
    glPopMatrix();
}

void phoneSpace(){
    glClearColor(0.0f, 0.0f, 0.2f, 1.0f);
    glClear(GL_COLOR_BUFFER_BIT);
    glBegin(GL_POINTS);
    glEnd();
}

void stars(){
    glLoadIdentity();
    glClear(GL_COLOR_BUFFER_BIT);
        glColor3ub(255, 255, 255);

        glBegin(GL_POINTS);

        int numPoints = 100;
        for (int i = 0; i < numPoints; i++) {
            float x = randFloat() * 2 - 1;
            float y = randFloat() * 2 - 1;

            glVertex2f(x, y);
        }

        glEnd();
        glFlush();
    }


void SecondBackground(Figure& f2) {

    glPushMatrix();
    glLoadIdentity();
    glBegin(GL_QUADS);
    glColor3ub(18, 143, 196);//фон голубой
    glVertex2f(-1, 1);
    glVertex2f(1, 1);
    glVertex2f(1, -1);
    glVertex2f(-1, -1);

    glColor3ub(255,255,255);//тело облака1
    glVertex2f(0.9,0.5);
    glVertex2f(0.9,0.62);
    glVertex2f(0.1,0.62);
    glVertex2f(0.1,0.5);

    glVertex2f(0.73,0.5);
    glVertex2f(0.43,0.5);
    glVertex2f(0.43,0.38);
    glVertex2f(0.73,0.38);

    glVertex2f(-0.9,0.3);//тело облака2
    glVertex2f(-0.9,0.18);
    glVertex2f(-0.2,0.18);
    glVertex2f(-0.2,0.3);

    glVertex2f(-0.3,0.3);
    glVertex2f(-0.75,0.3);
    glVertex2f(-0.75,0.42);
    glVertex2f(-0.3,0.42);

    glColor3ub(229,238,255);//тень облака1
    glVertex2f(0.9,0.62);
    glVertex2f(0.73,0.62);
    glVertex2f(0.73,0.5);
    glVertex2f(0.9,0.5);

    glVertex2f(0.73,0.5);
    glVertex2f(0.43,0.5);
    glVertex2f(0.43,0.44);
    glVertex2f(0.73,0.44);

    glVertex2f(0.73,0.44);
    glVertex2f(0.73,0.38);
    glVertex2f(0.49,0.38);
    glVertex2f(0.49,0.44);

    glVertex2f(0.73,0.50);
    glVertex2f(0.73,0.56);
    glVertex2f(0.14,0.56);
    glVertex2f(0.14,0.50);

    glVertex2f(-0.2,0.3);//тень облака2
    glVertex2f(-0.75,0.3);
    glVertex2f(-0.75,0.18);
    glVertex2f(-0.2,0.18);

    glVertex2f(-0.3,0.36);
    glVertex2f(-0.65,0.36);
    glVertex2f(-0.65,0.3);
    glVertex2f(-0.3,0.3);

    glVertex2f(-0.3,0.42);
    glVertex2f(-0.3,0.36);
    glVertex2f(-0.36,0.36);
    glVertex2f(-0.36,0.42);

    glVertex2f(-0.82,0.18);
    glVertex2f(-0.82,0.24);
    glVertex2f(-0.75,0.24);
    glVertex2f(-0.75,0.18);
    glEnd();
    glPopMatrix();

}

void ThirdBackground(Figure& f3) {

    glPushMatrix();
    glLoadIdentity();
    glBegin(GL_QUADS);
    glColor3ub(29, 55, 66);
    glVertex2f(-1, 1);
    glColor3ub(29, 55, 66);
    glVertex2f(1, 1);
    glColor3ub(18, 143, 196);
    glVertex2f(1, -1);
    glColor3ub(18, 143, 196);
    glVertex2f(-1, -1);
    glEnd();
    glPopMatrix();
}

void FourthBackground(Figure& f4) {
    glPushMatrix();
    glLoadIdentity();
    glBegin(GL_QUADS);
    glColor3ub(29, 55, 66);
    glVertex2f(-1, 1);
    glColor3ub(0, 0, 0);
    glVertex2f(1, 1);
    glColor3ub(29, 55, 66);
    glVertex2f(1, -1);
    glColor3ub(29, 55, 66);
    glVertex2f(-1, -1);

    glEnd();
    glFlush();
    glPopMatrix();

}

void drawCircle(float radius, float x, float y,GLfloat q,GLfloat w,GLfloat e){
    const float PI = 3.14159265358979323846;
       glBegin(GL_TRIANGLE_FAN);
       glColor3ub(q,w,e);
       glVertex2f(x, y);
       for (int i = 0; i <= 360; i++) {
           glVertex2f(x + (radius * cos(i * PI / 180.0)), y + (radius * sin(i * PI / 180.0)));
       }
       glEnd();
   }

void FifthBackground(Figure& f5) {
    glLoadIdentity();
    phoneSpace();
    //glColor3ub(0, 0, 0);
//    glBegin(GL_QUADS);
//    glColor3ub(10,41,101);
//    glVertex2f(-1, 1);
//    glVertex2f(1, 1);
//    glVertex2f(1, -1);
//    glVertex2f(-1, -1);

    glBegin(GL_QUADS);
    glColor3ub(211, 211, 211);
    glVertex2f(-1, -1);
    glVertex2f(-1, -0.5);
    glVertex2f(1, -0.5);
    glVertex2f(1, -1);
    glEnd();
}

void drawBackground(Figure& fb){
    glPushMatrix();
    glLoadIdentity();
    glBegin(GL_QUADS);
    glColor3ub(20, 62, 141);
    glVertex2f(-1, 1);
    glVertex2f(1, 1);
    glColor3ub(240, 240, 240);
    glVertex2f(1, -1);
    glColor3ub(240, 240, 240);
    glVertex2f(-1, -1);

    glEnd();
    glFlush();
    glPopMatrix();
}
