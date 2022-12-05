#include "GL/freeglut.h"
#include "GLUT/glut.h"

void draw_cube()
{
    glRotatef(30.0,0,1,0);
    glRotatef(20.0,1,0,0);
    glutWireCube(.5);   // parameter (.5) is length of the cube
    
    glutPostRedisplay();
}

void keeb3(unsigned char key, int x, int y){
    if (key == 'q'){
        int win = glutGetWindow();
        glutDestroyWindow(win);
        exit(0);
    }//end if
}//end keeb3

void display3d(){
    glClear(GL_COLOR_BUFFER_BIT);
    glLoadIdentity(); //resets the image so it doesn't fly away
    draw_cube();
    glutSwapBuffers();
    //glutPostRedisplay();
}

void make_rectangle_program_3d(){
    std::cout << "Here is the graphic for make_rectangle_program_3d." << std::endl;
    std::cout << std::endl;

    int i = 0;
    glutInit(&i, NULL);
    glutInitWindowSize(500,500);
    glutCreateWindow("Connor's Splendiferous Cube Program");
    glClear(GL_COLOR_BUFFER_BIT);
    glutDisplayFunc(display3d);
    glutKeyboardFunc(keeb3);
    

    glutMainLoop();

}//end make_rectangle_program_3d