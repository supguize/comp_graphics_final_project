#include <GL/freeglut.h>
#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

vector<vector<float> > pointsa(0, vector<float>(0, NULL));

void draw_filled_circle(float x, float y, float r, float c[]){

    float x2=0;
    float y2=0;
    glColor3fv(c);
    glBegin(GL_TRIANGLE_FAN);
        for (float d=0; d < 360; d+=.2){
        x2 = x+sin(d)*r;
        y2 = y+cos(d)*r;
        glVertex2f(x2,y2);
        }
    glEnd();
}

void keeb1(unsigned char key, int x, int y){
    if (key == 'q'){
        int win = glutGetWindow();
        glutDestroyWindow(win);
        exit(0);
    }//end if
}//end keeb1

void init(){
    glViewport( 0,0, 500, 500 );
    glMatrixMode( GL_PROJECTION );
    glLoadIdentity();
    gluOrtho2D(0, 500, 500, 0);
}

void displaymc(){
    float c[] = {1,0,1};
    glClear(GL_COLOR_BUFFER_BIT);
    for (int i = 0; i < pointsa.size(); i++){
        draw_filled_circle(pointsa[i][0], pointsa[i][1], 5, c);
    }
    glFlush();
}

//handle mouse input
void mouse_clicks(int button, int state, int x, int y)
{
    
    if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN){
    // glClear(GL_COLOR_BUFFER_BIT);
        vector<float> point(0.0, 0.0);
        point.push_back((float)x);
        point.push_back((float)y);

        pointsa.push_back(point);
        glFlush();
        glutPostRedisplay();
    }
}

void make_mouse_clicks_program(){
    std::cout << "Here is the graphic for make_mouse_clicks_program." << std::endl;
    std::cout << std::endl;
    
    int i = 0;
    glutInit(&i, NULL);
    glutInitWindowSize(500,500);
    glutCreateWindow("Connor's Fantabulously Clicky Program");
    glClear(GL_COLOR_BUFFER_BIT);
    glutMouseFunc(mouse_clicks);
    glutDisplayFunc(displaymc);
    glutKeyboardFunc(keeb1);

    init();
    glutMainLoop();
}//end make_mouse_clicks_program