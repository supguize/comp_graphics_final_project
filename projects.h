#include "make_rectangle_program_2d.h"
#include "make_rectangle_program_3d.h"
#include "make_draw_circle_program.h"
#include "make_clock_program.h"
#include "make_mouse_clicks_program.h"
#include "make_bezier_curve_program.h"

int user_selection_function(){
    std::cout << "What section would you like to explore?"<<std::endl;
    std::cout << "Choice 1: general description of the project and corresponding graphic"<<std::endl;
    std::cout << "Choice 2: historical context"<<std::endl;
    std::cout << "Choice 3: explanation of functions"<<std::endl;
    std::cout << "Choice 4: generate graphic"<<std::endl;
    std::cout << "Choice 5: Return to main menu"<<std::endl;
    std::cout <<std::endl;

    int z;
    std::cout << "Please make your selection, by entering the number corresponding to the choice: ";
    std::cin >> z;
    std::cout << std::endl;
    return z;
}//end user_selection_function

void rectangle_program_2d(){
    std::cout << "You have chosen the 2D rectangle program." << std::endl;
    std::cout << std::endl;

    bool keep_running = true;
    while (keep_running){
        
        int user_choice = user_selection_function();
        
        switch(user_choice) {
            case 1:
            std::cout << "You've selected the general description for the 2D rectangle program." << std::endl;
            std::cout << "This program will produce a static, 2D rectangle, using the built in OpenGL functions." << std::endl;
            std::cout << "The most basic of all the programs that will be covered, it's purpose is to familiarize students with OpenGL." << std::endl;
            std::cout << std::endl;
            break;

            case 2:
            std::cout << "You've selected the historical context for the 2D rectangle program." << std::endl;
            std::cout << "Who created the very first computer graphic, cannot be stated with absolute confidence." << std::endl;
            std::cout << "However, many believe that Edward E. Zajac was amoung the first to do so." << std::endl;
            std::cout << "Programmed in FORTRAN, Zajac was attempting to model the motion of celestial bodies." << std::endl;
            std::cout << std::endl;
            break;

            case 3:
            std::cout << "You've selected the explanation of functions for the 2D rectangle program." << std::endl;
            std::cout << "Being the most simple, introductory program, there are no exceptionally challenging functions." << std::endl;
            std::cout << "glutInitWindowSize() will set the size of the display window." << std::endl;
            std::cout << "glutCreateWindow() will set the title of the display window." << std::endl;
            std::cout << "glutDisplayFunc() will display our graphic in the display window." << std::endl;
            std::cout << "draw() will use built in OpenGL methods to generate a 2D rectangle." << std::endl;
            std::cout << std::endl;
            break;

            case 4:
            std::cout << "You've selected to execute the 3D rectangle program."  << std::endl;
            std::cout << std::endl;
            make_rectangle_program_2d();
            break;
            default:
            std::cout << "You have chosen to end the current program, or entered an invalid command." << std::endl;
            std::cout << std::endl;
            keep_running = false;

        }
    }//end while bezier_curve_program
}//end rectangle_program_2d

void rectangle_program_3d(){
    std::cout << "You have chosen the 3D rectangle program." << std::endl;
    std::cout << std::endl;

    bool keep_running = true;
    while (keep_running){
        
        int user_choice = user_selection_function();
        
        switch(user_choice) {
            case 1:
            std::cout << "You've selected the general description for the 3D rectangle program." << std::endl;
            std::cout << "This program will produce a static, 3D rectangle, using the built in OpenGL functions." << std::endl;
            std::cout << "One of the most basic of all the programs that will be covered, it's purpose is to familiarize students with OpenGL." << std::endl;
            std::cout << std::endl;
            break;

            case 2:
            std::cout << "You've selected the historical context for the 3D rectangle program." << std::endl;
            std::cout << "While it is more advanced than our simple program, the first stereoscopic 3D computer animation of a cube took place in 1965, the same year as the first ever spacewalk!" << std::endl;
            std::cout << std::endl;
            break;

            case 3:
            std::cout << "You've selected the explanation of functions for the 3D rectangle program." << std::endl;
            std::cout << "Being the most simple, introductory program, there are no exceptionally challenging functions." << std::endl;
            std::cout << "glutInitWindowSize() will set the size of the display window." << std::endl;
            std::cout << "glutCreateWindow() will set the title of the display window." << std::endl;
            std::cout << "glutDisplayFunc() will display our graphic in the display window." << std::endl;
            std::cout << "draw() will use built in OpenGL methods to generate a 3D rectangle." << std::endl;
            std::cout << std::endl;
            std::cout << std::endl;
            break;

            case 4:
            std::cout << "You've selected to execute the 3D rectangle program."  << std::endl;
            std::cout << std::endl;
            make_rectangle_program_3d();
            break;
            default:
            std::cout << "You have chosen to end the current program, or entered an invalid command." << std::endl;
            std::cout << std::endl;
            keep_running = false;

        }
    }//end while bezier_curve_program
}//end rectangle_program_3d

void draw_circle_program(){
    std::cout << "You have chosen the draw circle program." << std::endl;
    std::cout << std::endl;

    bool keep_running = true;
    while (keep_running){
        
        int user_choice = user_selection_function();
        
        switch(user_choice) {
            case 1:
            std::cout << "You've selected the general description for the draw circle program." << std::endl;
            std::cout << "This program will draw a circle, comprised of individual points, rotating around a central point." << std::endl;
            std::cout << "Here, students will get their first exposure to computer animations." << std::endl;
            std::cout << "The essence of animation is taking a collection of points and multiplying them by some transformation matrix." << std::endl;
            std::cout << std::endl;
            break;

            case 2:
            std::cout << "You've selected the historical context for the draw circle program." << std::endl;
            std::cout << "While it is impossible to know who made the first animated circle, we do know of the first appearance in film." << std::endl;
            std::cout << "In 1958, Alfred Hitchcock's film 'Vertigo' featured animated circles made by a mechanical computer." << std::endl;
            std::cout << std::endl;
            break;

            case 3:
            std::cout << "You've selected the explanation of functions for the draw circle program." << std::endl;
            std::cout << "The core of animation is found in matrix multiplication, which will be featured in this program." << std::endl;
            std::cout << "draw_circle() features a for loop which will create a point and generate it with glVertex2f." << std::endl;
            std::cout << "Next, the x and y values will be multipled by a transformation matrix to generate the new coordinates for the point." << std::endl;
            std::cout << "This new point will similarly be plotted, and the loop continues until 360 degrees of points have been plotted." << std::endl;
            std::cout << "glutInitWindowSize() will set the size of the display window." << std::endl;
            std::cout << "glutCreateWindow() will set the title of the display window." << std::endl;
            std::cout << "glutDisplayFunc() will display our graphic in the display window." << std::endl;
            std::cout << std::endl;
            break;

            case 4:
            std::cout << "You've selected to execute the 3D draw circle program."  << std::endl;
            std::cout << std::endl;
            make_draw_circle_program();
            break;
            default:
            std::cout << "You have chosen to end the current program, or entered an invalid command." << std::endl;
            std::cout << std::endl;
            keep_running = false;

        }
    }//end while bezier_curve_program
}//end draw_circle_program

void clock_program(){
    std::cout << "You have chosen the clock program." << std::endl;
    std::cout << std::endl;

    bool keep_running = true;
    while (keep_running){
        
        int user_choice = user_selection_function();
        
        switch(user_choice) {
            case 1:
            std::cout << "You've selected the general description for the clock program." << std::endl;
            std::cout << "The prinipals of animation are expanded further, with a graphic containing the hands of an analog clock." << std::endl;
            std::cout << "Where the circle program features one moving point, this program contains multiple moving lines." << std::endl;
            std::cout << std::endl;
            break;

            case 2:
            std::cout << "You've selected the historical context for the clock program." << std::endl;
            std::cout << "In 1985 computer scientist Chuck Csuri created a complicated animation of a liquid metal clock." << std::endl;
            std::cout << "The amorphous clock is comprised of many interlocking gears, and twists and flows in and out of itself." << std::endl;
            std::cout << "The graphic was captivating enough that James Cameron prominately featured the effect in Terminator 2." << std::endl;
            std::cout << std::endl;
            break;

            case 3:
            std::cout << "You've selected the explanation of functions for the clock program." << std::endl;
            std::cout << "Building on the difficulty from the draw circle program, the clock program will feature several moving vectors." << std::endl;
            std::cout << "glutInitWindowSize() will set the size of the display window." << std::endl;
            std::cout << "glutCreateWindow() will set the title of the display window." << std::endl;
            std::cout << "glutDisplayFunc() will display our graphic in the display window." << std::endl;
            std::cout << "rotate_vec() will calculate the dimensions of two vectors and plot them." << std::endl;
            std::cout << "The function will take two diffent end points, one for each vector, and plot them from a central point." << std::endl;
            std::cout << "animate_vec() will follow the logic used in the draw circle program to call the rotate_vec() function." << std::endl;
            std::cout << "Then it will multiply the points passed into rotate_vec() by a multplication matrix and continue the process until a circle has been compled." << std::endl;
            std::cout << std::endl;
            break;

            case 4:
            std::cout << "You've selected to execute the clock program."  << std::endl;
            std::cout << std::endl;
            make_clock_program();
            break;
            default:
            std::cout << "You have chosen to end the current program, or entered an invalid command." << std::endl;
            std::cout << std::endl;
            keep_running = false;

        }
    }//end while bezier_curve_program
}//end clock_program

void mouse_clicks_program(){
    std::cout << "You have chosen the mouse clicks program." << std::endl;
    std::cout << std::endl;

    bool keep_running = true;
    while (keep_running){
        
        int user_choice = user_selection_function();
        
        switch(user_choice) {
            case 1:
            std::cout << "You've selected the general description for the mouse clicks program." << std::endl;
            std::cout << "This program will draw circles in a window, based on mouse clicks." << std::endl;
            std::cout << "Multiple points can be made, and the corresponding coordinates will be displayed in the terminal." << std::endl;
            std::cout << std::endl;
            break;

            case 2:
            std::cout << "You've selected the historical context for the mouse clicks program." << std::endl;
            std::cout << "While the earliest computers didn't have mice, their development was right on the horizon." << std::endl;
            std::cout << "Under direction from scientist Douglas Engelbart, SRI International created the first mouse in the early 60's. " << std::endl;
            std::cout << "Instead of being labled 'mouse', the first patent was titled 'X-Y Position Indicator for a Display System'" << std::endl;
            std::cout << std::endl;
            break;

            case 3:
            std::cout << "You've selected the explanation of functions for the mouse clicks program." << std::endl;
            std::cout << "draw_filled_circle() will call on glVertex2f() to create a point." << std::endl;
            std::cout << "The circle function found in the draw circle program will be found, rotating the points to be passed to glVertex2f()." << std::endl;
            std::cout << "A special mouse function called mouse_clicks(), will be made to detect input from a mouse." << std::endl;
            std::cout << "when clicked down, the x and y location of the pointer will be passed into draw_filled_circle()." << std::endl;
            std::cout << "glutInitWindowSize() will set the size of the display window." << std::endl;
            std::cout << "glutCreateWindow() will set the title of the display window." << std::endl;
            std::cout << "glutDisplayFunc() will display our graphic in the display window." << std::endl;
            std::cout << std::endl;
            break;

            case 4:
            std::cout << "You've selected to execute the mouse clicks program."  << std::endl;
            std::cout << std::endl;
            make_mouse_clicks_program();
            break;
            default:
            std::cout << "You have chosen to end the current program, or entered an invalid command." << std::endl;
            std::cout << std::endl;
            keep_running = false;

        }
    }//end while bezier_curve_program
}//end mouse_clicks_program

void bezier_curve_program(){
    std::cout << "You have chosen the Bezier Curve program." << std::endl;
    std::cout << std::endl;

    bool keep_running = true;
    while (keep_running){
        
        int user_choice = user_selection_function();
        
        switch(user_choice) {
            case 1:
            std::cout << "You've selected the general description for the Bezier curve program." << std::endl;
            std::cout << "The Bezier curve program represents the culmination of all the knowledge aquired in CS-4330-01." << std::endl;
            std::cout << "Containing matrix multiplication, complicated vectors, and mouse inputs, this program is more difficult than the preceeding examples." << std::endl;
            std::cout << "A user will be able to click two points on in the window that will be the terminating points of a vector." << std::endl;
            std::cout << "Next, the user will be able to click anywhere in the window to add a single control point." << std::endl;
            std::cout << "This control point will be used to generate the corresponding Bezier curve." << std::endl;
            std::cout << "Finally, the user will be able to drag the control point around the screen, changing the Bezier curve in real time." << std::endl;
            std::cout << std::endl;
            break;

            case 2:
            std::cout << "You've selected the historical context for the Bezier curve program." << std::endl;
            std::cout << "The mathematical expression is named after Pierre Bézier, who used the expression in the 1960's to design automobile bodies." << std::endl;
            std::cout << "Though it carries his name, Pierre did not create the function." << std::endl;
            std::cout << "Instead a physicist by the name of Paul de Casteljau created the math behind the Bézier curve." << std::endl;
            std::cout << std::endl;
            break;

            case 3:
            std::cout << "You've selected the explanation of functions for the Bezier curve program." << std::endl;
            std::cout << "glutInitWindowSize() will set the size of the display window." << std::endl;
            std::cout << "glutCreateWindow() will set the title of the display window." << std::endl;
            std::cout << "glutDisplayFunc() will display our graphic in the display window." << std::endl;
            std::cout << "handler() detects input from the user's keyboard, to end execution of the program." << std::endl;
            std::cout << "point_insert() adds a single value into the array list, to be used later in inputs()." << std::endl;
            std::cout << "point_draw() accepts an x and y value, a point size and a color." << std::endl;
            std::cout << "Then, the x and y value are used in glVertex2f to create a point of the input size and color." << std::endl;
            std::cout << "point_draw() will also be used later in inputs()." << std::endl;
            std::cout << "inputs() takes the user's mouse inputs to pass along to point_draw() and point_insert()." << std::endl;
            std::cout << "special_window() is used to take user input to modify the location of the third control point." << std::endl;
            std::cout << "bquad() calculates the Bezier quad for use in bcurve()." << std::endl;
            std::cout << "display() continuously clears the screen and plots the newest version of bcurve()." << std::endl;
            std::cout << std::endl;
            break;

            case 4:
            std::cout << "You've selected to execute the Bezier curve program."  << std::endl;
            std::cout << std::endl;
            make_bezier_curve_program();
            break;
            default:
            std::cout << "You have chosen to end the current program, or entered an invalid command." << std::endl;
            std::cout << std::endl;
            keep_running = false;

        }
    }//end while bezier_curve_program
}//end bezier_curve_program