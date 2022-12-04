#include "GL/freeglut.h"
#include "GLUT/glut.h"
#include <cmath>
#include <vector>

std::vector<std::vector<float> > points(3, std::vector<float>(2, NULL));

void handler(unsigned char key, int x, int y){
    if (key == 'q'){
        int win = glutGetWindow();
        glutDestroyWindow(win);
    }//end if
}//end handler

void point_insert(float val, std::vector<std::vector<float> > &list){
    for (int a = 0; a < list.size(); a++){
        for (int b = 0; b < list[a].size(); b++){
            if (list[a][b] == 0){
                list[a][b] = val;
                return;
            }
        }
    }
}//end point_insert

void point_draw(float x, float y, int size, float c[]){
    glColor3fv(c);
    glPointSize(size);
    glBegin(GL_POINTS);
    glVertex2f(x, y);
    glEnd();
}//end point_draw

void inputs(int button, int state, int x, int y){
    float c[] = {1,1,0};
    if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN) {
        float xs = (2.0*(x/500.0))-1.0;
        float ys = (2.0*(y/500.0))-1.0;

        point_draw(xs,-ys,5,c);

        point_insert(xs, points);
        point_insert(-ys, points);


        glFlush();
        glutPostRedisplay();
    }//end if
}//end inputs

void special_window(int key, int x, int y){
    if (key == GLUT_KEY_RIGHT) points[2][0] += 0.01;
    else if (key == GLUT_KEY_LEFT) points[2][0] -= 0.01;
    else if (key == GLUT_KEY_UP) points[2][1] += 0.01;
    else if (key == GLUT_KEY_DOWN) points[2][1] -= 0.01;
    
    glutPostRedisplay();
    float c[] = {0.2, 0.2, .8};
}//end special_window

double bquad(double p0, double p1, double p2, double t){
    return ((pow((1 - t), 2) * p0) + (2 * (1-t) * t * p1) + (pow (t, 2) * p2));
}//end bquad

void bcurve(std::vector<std::vector<float> > p_list){
    glPointSize(1);
    std::vector<float> p0 = p_list[0];
    std::vector<float> p1 = p_list[2];
    std::vector<float> p2 = p_list[1];

    double c_x, c_y, t;

    for (int i=0; i<1001; ++i){
        t = (1.0/1000.0) * i;
        c_x = bquad(p0[0], p1[0], p2[0], t);
        c_y = bquad(p0[1], p1[1], p2[1], t);
        
        glBegin(GL_POINTS);
            glColor3f(0.5, 0.5, 0.5);
            glVertex2f(c_x, c_y);  
        glEnd();
    }//end for
}//end bcurve

void display(){
    float point_col[] = {0, 1, 0};
    glClear(GL_COLOR_BUFFER_BIT);
    for (int a = 0; a < points.size(); a ++){
        if (points[a][0] != NULL){
            point_draw(points[a][0], points[a][1], 5, point_col);
        }//end if
    }//end for
    if(points[2][0] != 0){
        bcurve(points);
    }//end if
    glFlush();
    glFinish();
}//end display

void make_bezier_curve_program(){
    int i = 0;
    glutInit(&i, NULL);
    glutInitWindowSize(500,500);

    glutCreateWindow("Connor's Beautiful Bezier");

    glutMouseFunc(inputs);
    glutDisplayFunc(display);
    glutSpecialFunc(special_window);
    glutKeyboardFunc(handler);
    std::cout << "Here is the graphic for make_bezier_curve_program." << std::endl;
    std::cout << std::endl;
    glutMainLoop();
    break;
}//end make_bezier_curve_program