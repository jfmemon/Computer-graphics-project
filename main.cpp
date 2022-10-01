// Header file:


#include<GL/gl.h>
#include<GL/glut.h>
#include<math.h>


void reshape(int,int);
void timer(int);


//user define functions:



void circle(){
    //sun:
    glColor3f(1.0, 1.0, 0.0);
    glBegin(GL_POLYGON);
    float a;
    for(int i=0;i<360;i++){
        a=i*3.142/180;
        glVertex2f(0.40+0.05*cos(a),0.75+0.09*sin(a));
    }
    glEnd();
}

void field(){
    // grass:
    glColor3f(0.0, 1.0, 0.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.00,0.00,0.0);
    glVertex3f(0.67,0.00,0.0);
    glVertex3f(0.66,0.03,0.0);
    glVertex3f(0.65,0.07,0.0);
    glVertex3f(0.62,0.11,0.0);
    glVertex3f(0.58,0.12,0.0);
    glVertex3f(0.55,0.12,0.0);
    glVertex3f(0.52,0.14,0.0);
    glVertex3f(0.50,0.17,0.0);
    glVertex3f(0.45,0.19,0.0);
    glVertex3f(0.43,0.21,0.0);
    glVertex3f(0.40,0.21,0.0);
    glVertex3f(0.35,0.23,0.0);
    glVertex3f(0.20,0.23,0.0);
    glVertex3f(0.15,0.25,0.0);
    glVertex3f(0.00,0.25,0.0);
    glEnd();
}

void home(){
    //first home first wall
    glColor3f(0.5, 0.5, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(0.12,0.10,0.0);
    glVertex3f(0.20,0.10,0.0);
    glVertex3f(0.20,0.15,0.0);
    glVertex3f(0.12,0.15,0.0);
    glEnd();

    //first home triangle
    glColor3f(0.5, 0.0, 0.5);
    glBegin(GL_TRIANGLES);
    glVertex3f(0.12,0.15,0.0);
    glVertex3f(0.20,0.15,0.0);
    glVertex3f(0.16,0.19,0.0);
    glEnd();

    //first home left roof
    glColor3f(0.5, 0.5, 0.2);
    glBegin(GL_POLYGON);
    glVertex3f(0.10,0.15,0.0);
    glVertex3f(0.12,0.15,0.0);
    glVertex3f(0.16,0.19,0.0);
    glVertex3f(0.15,0.20,0.0);
    glEnd();

    //first home right roof
    glColor3f(0.5, 0.7, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(0.20,0.15,0.0);
    glVertex3f(0.25,0.15,0.0);
    glVertex3f(0.20,0.20,0.0);
    glVertex3f(0.15,0.20,0.0);
    glEnd();

    //first home 2nd wall
    glColor3f(0.5, 0.5, 0.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.20,0.10,0.0);
    glVertex3f(0.24,0.10,0.0);
    glVertex3f(0.24,0.15,0.0);
    glVertex3f(0.20,0.15,0.0);
    glEnd();

    //first home left wall left window
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.13,0.12,0.0);
    glVertex3f(0.15,0.12,0.0);
    glVertex3f(0.15,0.14,0.0);
    glVertex3f(0.13,0.14,0.0);
    glEnd();

    //first home left wall door
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.16,0.10,0.0);
    glVertex3f(0.19,0.10,0.0);
    glVertex3f(0.19,0.14,0.0);
    glVertex3f(0.16,0.14,0.0);
    glEnd();

    //first home right wall right window
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.21,0.12,0.0);
    glVertex3f(0.23,0.12,0.0);
    glVertex3f(0.23,0.14,0.0);
    glVertex3f(0.21,0.14,0.0);
    glEnd();

    //first home left under decoration
    glColor3f(0.2, 0.3, 0.4);
    glBegin(GL_POLYGON);
    glVertex3f(0.11,0.09,0.0);
    glVertex3f(0.21,0.09,0.0);
    glVertex3f(0.20,0.10,0.0);
    glVertex3f(0.12,0.10,0.0);
    glEnd();



    //first home right under decoration
    glColor3f(0.2, 0.2, 0.1);
    glBegin(GL_POLYGON);
    glVertex3f(0.21,0.09,0.0);
    glVertex3f(0.25,0.09,0.0);
    glVertex3f(0.24,0.10,0.0);
    glVertex3f(0.20,0.10,0.0);
    glEnd();


    //second home first wall
    glColor3f(0.5, 0.5, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(0.24,0.10,0.0);
    glVertex3f(0.30,0.10,0.0);
    glVertex3f(0.30,0.15,0.0);
    glVertex3f(0.24,0.15,0.0);
    glEnd();



    //second home second wall
    glColor3f(0.5, 0.5, 0.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.30,0.10,0.0);
    glVertex3f(0.34,0.10,0.0);
    glVertex3f(0.34,0.15,0.0);
    glVertex3f(0.30,0.15,0.0);
    glEnd();


    //second home right roof
    glColor3f(0.5, 0.7, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(0.30,0.15,0.0);
    glVertex3f(0.35,0.15,0.0);
    glVertex3f(0.30,0.20,0.0);
    glVertex3f(0.25,0.20,0.0);
    glEnd();


    //second home left roof
    glColor3f(0.5, 0.5, 0.2);
    glBegin(GL_POLYGON);
    glVertex3f(0.24,0.16,0.0);
    glVertex3f(0.26,0.19,0.0);
    glVertex3f(0.25,0.20,0.0);
    glVertex3f(0.23,0.17,0.0);
    glEnd();


    //second home triangle
    glColor3f(0.5, 0.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex3f(0.25,0.15,0.0);
    glVertex3f(0.30,0.15,0.0);
    glVertex3f(0.26,0.19,0.0);
    glVertex3f(0.24,0.16,0.0);
    glEnd();


    //second home left window
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.24,0.12,0.0);
    glVertex3f(0.25,0.12,0.0);
    glVertex3f(0.25,0.14,0.0);
    glVertex3f(0.24,0.14,0.0);
    glEnd();


    //second home door
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.26,0.10,0.0);
    glVertex3f(0.29,0.10,0.0);
    glVertex3f(0.29,0.14,0.0);
    glVertex3f(0.26,0.14,0.0);
    glEnd();


    //second home right window
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.31,0.12,0.0);
    glVertex3f(0.33,0.12,0.0);
    glVertex3f(0.33,0.14,0.0);
    glVertex3f(0.31,0.14,0.0);
    glEnd();


    //second home left under decoration
    glColor3f(0.2, 0.3, 0.4);
    glBegin(GL_POLYGON);
    glVertex3f(0.25,0.09,0.0);
    glVertex3f(0.31,0.09,0.0);
    glVertex3f(0.30,0.10,0.0);
    glVertex3f(0.24,0.10,0.0);
    glEnd();



    //second home right under decoration
    glColor3f(0.2, 0.2, 0.1);
    glBegin(GL_POLYGON);
    glVertex3f(0.31,0.09,0.0);
    glVertex3f(0.35,0.09,0.0);
    glVertex3f(0.34,0.10,0.0);
    glVertex3f(0.30,0.10,0.0);
    glEnd();
}

void river(){
    //river first portion from left
    glColor3f(0.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.00,0.25,0.0);
    glVertex3f(0.15,0.25,0.0);
    glVertex3f(0.15,0.45,0.0);
    glVertex3f(0.00,0.45,0.0);
    glEnd();

    //river second portion from left
    glColor3f(0.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.15,0.25,0.0);
    glVertex3f(0.20,0.23,0.0);
    glVertex3f(0.20,0.45,0.0);
    glVertex3f(0.15,0.45,0.0);
    glEnd();

    //river 3rd portion from left
    glColor3f(0.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.20,0.23,0.0);
    glVertex3f(0.35,0.23,0.0);
    glVertex3f(0.35,0.45,0.0);
    glVertex3f(0.20,0.45,0.0);
    glEnd();


    //river 4th portion from left
    glColor3f(0.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.35,0.23,0.0);
    glVertex3f(0.40,0.21,0.0);
    glVertex3f(0.40,0.45,0.0);
    glVertex3f(0.35,0.45,0.0);
    glEnd();


    //river 5th portion from left
    glColor3f(0.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.40,0.21,0.0);
    glVertex3f(0.43,0.21,0.0);
    glVertex3f(0.43,0.45,0.0);
    glVertex3f(0.40,0.45,0.0);
    glEnd();


    //river 6th portion from left
    glColor3f(0.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.43,0.21,0.0);
    glVertex3f(0.45,0.19,0.0);
    glVertex3f(0.45,0.45,0.0);
    glVertex3f(0.43,0.45,0.0);
    glEnd();


    //river 7th portion from left
    glColor3f(0.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.45,0.19,0.0);
    glVertex3f(0.50,0.17,0.0);
    glVertex3f(0.50,0.45,0.0);
    glVertex3f(0.45,0.45,0.0);
    glEnd();


    //river 8th portion from left
    glColor3f(0.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.50,0.17,0.0);
    glVertex3f(0.52,0.14,0.0);
    glVertex3f(0.52,0.45,0.0);
    glVertex3f(0.50,0.45,0.0);
    glEnd();


    //river 9th portion from left
    glColor3f(0.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.52,0.14,0.0);
    glVertex3f(0.55,0.12,0.0);
    glVertex3f(0.55,0.45,0.0);
    glVertex3f(0.52,0.45,0.0);
    glEnd();


    //river 10th portion from left
    glColor3f(0.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.55,0.12,0.0);
    glVertex3f(0.58,0.12,0.0);
    glVertex3f(0.58,0.45,0.0);
    glVertex3f(0.55,0.45,0.0);
    glEnd();


    //river 11th portion from left
    glColor3f(0.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.58,0.12,0.0);
    glVertex3f(0.62,0.11,0.0);
    glVertex3f(0.62,0.45,0.0);
    glVertex3f(0.58,0.45,0.0);
    glEnd();


    //river 12th portion from left
    glColor3f(0.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.62,0.11,0.0);
    glVertex3f(0.65,0.07,0.0);
    glVertex3f(0.65,0.45,0.0);
    glVertex3f(0.62,0.45,0.0);
    glEnd();


    //river 13th portion from left
    glColor3f(0.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.65,0.07,0.0);
    glVertex3f(0.66,0.03,0.0);
    glVertex3f(0.66,0.45,0.0);
    glVertex3f(0.65,0.45,0.0);
    glEnd();


    //river 14th portion from left
    glColor3f(0.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.66,0.03,0.0);
    glVertex3f(0.67,0.00,0.0);
    glVertex3f(0.67,0.45,0.0);
    glVertex3f(0.66,0.45,0.0);
    glEnd();


    //river 15th portion from left
    glColor3f(0.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.67,0.00,0.0);
    glVertex3f(0.80,0.00,0.0);
    glVertex3f(0.80,0.45,0.0);
    glVertex3f(0.67,0.45,0.0);
    glEnd();



    //river last portion from left
    glColor3f(0.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.80,0.00,0.0);
    glVertex3f(1.00,0.00,0.0);
    glVertex3f(1.00,0.45,0.0);
    glVertex3f(0.67,0.45,0.0);
    glEnd();
}

float a = 0.00, b=0.06, c=0.02, d=0.07 ;

void boat(){


    //boat under decoration
    glColor3f(0.3, 0.1, 0.0);
    glBegin(GL_POLYGON);
    glVertex3f(a,0.33,0.0);
    glVertex3f(a+0.03,0.30,0.0);
    glVertex3f(a+0.10,0.30,0.0);
    glVertex3f(a+0.12,0.33,0.0);
    glEnd();


    //boat stick decoration
    glColor3f(0.3, 0.1, 0.2);
    glBegin(GL_POLYGON);
    glVertex3f(b,0.33,0.0);
    glVertex3f(b+0.01,0.33,0.0);
    glVertex3f(b+0.01,0.42,0.0);
    glVertex3f(b,0.42,0.0);
    glEnd();


    //boat left sail decoration
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_TRIANGLES);
    glVertex3f(c,0.34,0.0);
    glVertex3f(c+0.04,0.34,0.0);
    glVertex3f(c+0.04,0.41,0.0);
    glEnd();


    //boat right sail decoration
    glColor3f(8.0, 0.0, 0.0);
    glBegin(GL_TRIANGLES);
    glVertex3f(d,0.34,0.0);
    glVertex3f(d+0.03,0.34,0.0);
    glVertex3f(d,0.42,0.0);
    glEnd();
}

void hill(){
    //1st hill decoration
    glColor3f(0.3, 0.1, 0.0);
    glBegin(GL_TRIANGLES);
    glVertex3f(0.00,0.45,0.0);
    glVertex3f(0.20,0.45,0.0);
    glVertex3f(0.10,0.60,0.0);
    glEnd();


    //2nd hill decoration
    glColor3f(0.4, 0.2, 0.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.20,0.45,0.0);
    glVertex3f(0.27,0.45,0.0);
    glVertex3f(0.20,0.59,0.0);
    glVertex3f(0.16,0.51,0.0);
    glEnd();


    //3rd hill decoration
    glColor3f(0.3, 0.1, 0.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.27,0.45,0.0);
    glVertex3f(0.35,0.45,0.0);
    glVertex3f(0.28,0.62,0.0);
    glVertex3f(0.23,0.53,0.0);
    glEnd();


    //4th hill decoration
    glColor3f(0.4, 0.2, 0.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.35,0.45,0.0);
    glVertex3f(0.45,0.45,0.0);
    glVertex3f(0.38,0.57,0.0);
    glVertex3f(0.33,0.50,0.0);
    glEnd();


    //5th hill decoration
    glColor3f(0.3, 0.1, 0.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.45,0.45,0.0);
    glVertex3f(0.59,0.45,0.0);
    glVertex3f(0.48,0.60,0.0);
    glVertex3f(0.42,0.50,0.0);
    glEnd();


    //6th hill decoration
    glColor3f(0.4, 0.2, 0.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.59,0.45,0.0);
    glVertex3f(0.74,0.45,0.0);
    glVertex3f(0.60,0.63,0.0);
    glVertex3f(0.53,0.53,0.0);
    glEnd();


    //7th hill decoration
    glColor3f(0.3, 0.1, 0.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.74,0.45,0.0);
    glVertex3f(0.80,0.45,0.0);
    glVertex3f(0.75,0.54,0.0);
    glVertex3f(0.71,0.49,0.0);
    glEnd();
}


void cloud(){
    //Cloud 1st portion
    glColor3f(0.961, 0.961, 0.961);
    glBegin(GL_POLYGON);
    glVertex3f(0.00,0.45,0.0);
    glVertex3f(0.10,0.60,0.0);
    glVertex3f(0.10,1.00,0.0);
    glVertex3f(0.00,1.00,0.0);
    glEnd();


    //Cloud 2nd portion
    glColor3f(0.961, 0.961, 0.961);
    glBegin(GL_POLYGON);
    glVertex3f(0.10,0.60,0.0);
    glVertex3f(0.16,0.51,0.0);
    glVertex3f(0.16,1.00,0.0);
    glVertex3f(0.10,1.00,0.0);
    glEnd();


    //Cloud 3rd portion
    glColor3f(0.961, 0.961, 0.961);
    glBegin(GL_POLYGON);
    glVertex3f(0.16,0.51,0.0);
    glVertex3f(0.20,0.59,0.0);
    glVertex3f(0.20,1.00,0.0);
    glVertex3f(0.16,1.00,0.0);
    glEnd();


    //Cloud 4th portion
    glColor3f(0.961, 0.961, 0.961);
    glBegin(GL_POLYGON);
    glVertex3f(0.20,0.59,0.0);
    glVertex3f(0.23,0.53,0.0);
    glVertex3f(0.23,1.00,0.0);
    glVertex3f(0.20,1.00,0.0);
    glEnd();



    //Cloud 5th portion
    glColor3f(0.961, 0.961, 0.961);
    glBegin(GL_POLYGON);
    glVertex3f(0.23,0.53,0.0);
    glVertex3f(0.28,0.62,0.0);
    glVertex3f(0.28,1.00,0.0);
    glVertex3f(0.23,1.00,0.0);
    glEnd();



    //Cloud 6th portion
    glColor3f(0.961, 0.961, 0.961);
    glBegin(GL_POLYGON);
    glVertex3f(0.27,0.62,0.0);
    glVertex3f(0.33,0.50,0.0);
    glVertex3f(0.33,1.00,0.0);
    glVertex3f(0.27,1.00,0.0);
    glEnd();



    //Cloud 7th portion
    glColor3f(0.961, 0.961, 0.961);
    glBegin(GL_POLYGON);
    glVertex3f(0.33,0.50,0.0);
    glVertex3f(0.38,0.57,0.0);
    glVertex3f(0.38,1.00,0.0);
    glVertex3f(0.33,1.00,0.0);
    glEnd();



    //Cloud 8th portion
    glColor3f(0.961, 0.961, 0.961);
    glBegin(GL_POLYGON);
    glVertex3f(0.38,0.57,0.0);
    glVertex3f(0.42,0.50,0.0);
    glVertex3f(0.42,1.00,0.0);
    glVertex3f(0.38,1.00,0.0);
    glEnd();


    //Cloud 9th portion
    glColor3f(0.961, 0.961, 0.961);
    glBegin(GL_POLYGON);
    glVertex3f(0.42,0.50,0.0);
    glVertex3f(0.48,0.60,0.0);
    glVertex3f(0.48,1.00,0.0);
    glVertex3f(0.42,1.00,0.0);
    glEnd();



    //Cloud 10th portion
    glColor3f(0.961, 0.961, 0.961);
    glBegin(GL_POLYGON);
    glVertex3f(0.48,0.60,0.0);
    glVertex3f(0.53,0.53,0.0);
    glVertex3f(0.53,1.00,0.0);
    glVertex3f(0.48,1.00,0.0);
    glEnd();



    //Cloud 11th portion
    glColor3f(0.961, 0.961, 0.961);
    glBegin(GL_POLYGON);
    glVertex3f(0.53,0.53,0.0);
    glVertex3f(0.60,0.63,0.0);
    glVertex3f(0.60,1.00,0.0);
    glVertex3f(0.53,1.00,0.0);
    glEnd();



    //Cloud 12th portion
    glColor3f(0.961, 0.961, 0.961);
    glBegin(GL_POLYGON);
    glVertex3f(0.60,0.63,0.0);
    glVertex3f(0.71,0.49,0.0);
    glVertex3f(0.71,1.00,0.0);
    glVertex3f(0.60,1.00,0.0);
    glEnd();



    //Cloud 13th portion
    glColor3f(0.961, 0.961, 0.961);
    glBegin(GL_POLYGON);
    glVertex3f(0.71,0.49,0.0);
    glVertex3f(0.75,0.54,0.0);
    glVertex3f(0.75,1.00,0.0);
    glVertex3f(0.71,1.00,0.0);
    glEnd();



    //Cloud 14th portion
    glColor3f(0.961, 0.961, 0.961);
    glBegin(GL_POLYGON);
    glVertex3f(0.75,0.54,0.0);
    glVertex3f(0.80,0.45,0.0);
    glVertex3f(0.80,1.00,0.0);
    glVertex3f(0.75,1.00,0.0);
    glEnd();



    //Cloud 15th portion
    glColor3f(0.961, 0.961, 0.961);
    glBegin(GL_POLYGON);
    glVertex3f(0.80,0.45,0.0);
    glVertex3f(1.00,0.45,0.0);
    glVertex3f(1.00,1.00,0.0);
    glVertex3f(0.80,1.00,0.0);
    glEnd();
}

// Display function:

void display(void){
    glClear(GL_COLOR_BUFFER_BIT);
    field();
    home();
    river();
    boat();
    hill();
    cloud();
    circle();
    glutSwapBuffers();
}

    // Initialize function:

void init(void){
    glClearColor(0.0,0.0,0.0,0.0);  // fix windows background color
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(0.0,1.0,0.0,1.0, 0.0,1.0);
}

// Main function:

int main(int argc, char** argv)
{
    glutInit(&argc,argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
    glutInitWindowSize(1400,700);
    glutInitWindowPosition(0,0);
    glutCreateWindow("Beauty of nature");
    init();
    glutDisplayFunc(display);
    glutReshapeFunc(reshape);
    glutTimerFunc(1000,timer,0);
    glutMainLoop();
    return 0;
}




void reshape(int w,int h)
{
    glViewport(0,0,(GLsizei)w,(GLsizei)h);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(0.0,1.0,0.0,1.0);
    glMatrixMode(GL_MODELVIEW);
}


int state = 1;

void timer(int)
{
    glutPostRedisplay();
    glutTimerFunc(1000/5,timer,0);

    switch(state)
    {
    case 1:
        if(a<1.20 && b<1.20 && c<1.20 && d<1.20){
            a+=0.10;
            b+=0.10;
            c+=0.10;
            d+=0.10;
        }
    else
        state = -1;
        break;
    case -1:
        if(a>-10 && b>-10 && c>-10 && d>-10){
            a-=0.15;
            b-=0.15;
            c-=0.15;
            d-=0.15;
        }
        else
            state = 1;
        break;
    }
}

