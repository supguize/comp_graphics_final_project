#include <GL/freeglut.h>
#include <cmath>

void draw_point(){
  glColor3f(1,1,0);
  glPointSize(7);
  glBegin(GL_POINTS);
    glVertex2f(0,.5);
  glEnd();
}

void draw_circle(){
  float x;
  float y;
  glColor3f(1,1,0);

  for (float d=0; d<360; d+=5){

    // x = 0;
    // y = .5;
    x = .5;
    y = 0;
    float rad = M_PI*d/180;
    float x_r = (x*cos(rad)) - (y*sin(rad));
    float y_r = (x*sin(rad)) + (y*cos(rad));
    // x = (x*cos(rad)) - (y*sin(rad));
    // y = (x*sin(rad)) + (y*cos(rad));

    glBegin(GL_POINTS);
      glVertex2f(x_r, y_r);
      // glVertex2f(x, y);
    glEnd();
  }
}

void displaydc(){
  glClear(GL_COLOR_BUFFER_BIT);
  // draw_point();
  draw_circle();
  glFlush();
}

void keeb(unsigned char key, int x, int y){
    if (key == 'q'){
        int win = glutGetWindow();
        glutDestroyWindow(win);
        exit(0);
    }//end if
}//end keeb

void make_draw_circle_program(){
    std::cout << "Here is the graphic for make_draw_circle_program." << std::endl;
    std::cout << std::endl;
    int i = 0;
    glutInit(&i, NULL);
    glutInitWindowSize(500,500);
    glutCreateWindow("cg");

    glutDisplayFunc(displaydc);
    glutKeyboardFunc(keeb);

    glutMainLoop();
    
}//end make_draw_circle_program