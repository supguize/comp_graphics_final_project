#include "GL/freeglut.h"
#include "GLUT/glut.h"

void draw_square()
{
    glutWireCube(.5);   // parameter (.5) is length of the cube
}

void display2d(){
    glClear(GL_COLOR_BUFFER_BIT);
    glLoadIdentity(); //resets the image so it doesn't fly away
    draw_square();
    glFlush();
    glutPostRedisplay();
}

void keeb2(unsigned char key, int x, int y){
    if (key == 'q'){
        int win = glutGetWindow();
        glutDestroyWindow(win);
        exit(0);
    }//end if
}//end keeb2

void make_rectangle_program_2d(){
    std::cout << "Here is the graphic for make_rectangle_program_2d." << std::endl;
    std::cout << std::endl;

    int i = 0;
    glutInit(&i, NULL);
    glutInitWindowSize(500,500);
    glutCreateWindow("Connor's Spectacular Rectangle Program");
    glClear(GL_COLOR_BUFFER_BIT);
    glutDisplayFunc(display2d);
    glutKeyboardFunc(keeb2);

    glutMainLoop();

    
}//end make_rectangle_program_2d