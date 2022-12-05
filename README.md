# comp_graphics_final_project
This is the repository for all files needed for the computer graphics CS-4330-01 final.

Semester: Fall 2022
Class: CS-4330-01
Teacher: Dr. Chou
Student Name: Connor Lawrence
BuffID: 0945101

Compiled on a Mac
Instructions for compilation: g++ main.cpp -framework OpenGL -framework GLUT -w -o test -g

Bugs: 
1) The clock program is not currently implemented.
2) Currently, all graphics can be generated. However, after their generation the program has to be closed entirely. 
3) Text persists in the terminal

List of files, and their description:
    main.cpp: Primary file which contains the main menu, calls the remaining files, and gives the option to end execution.

    vocab.h: called by main.cpp. Contains a while loop with a switch control statement, which cycles through vocabulary terms.
    
    projects.h: called by main.cpp. In addition to containing a while loop with a switch control statement, this file contains calls to all of the 'make' files which   generate the various computer graphics.
    
    make_rectangle_program_2d.h: generates the computer graphic for the 2D rectangle.
    make_rectangle_program_3d.h: generates the computer graphic for the 3D rectangle.
    make_draw_circle_program.h: generates the computer graphic for the draw circle program.
    make_clock_program.h: generates the computer graphic for the clock.
    make_mouse_clicks_program.h: generates the computer graphic for the mouse clicks program.
    make_bezier_curve_program.h: generates the computer graphic for the bezier curve program.
