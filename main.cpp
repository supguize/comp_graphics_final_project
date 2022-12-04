#include <iostream>
#include "vocab.h"
#include "projects.h"

using namespace std;

int main()
{
    cout<<"Welcome to the CS-4330-01 guide."<<endl;
    cout<<endl;

    bool run_program = true;

    while (run_program){
        cout << "What would you like explore further?"<<endl;
        cout << "Choice 1: common vocabulary terms"<<endl;
        cout << "Choice 2: 2D rectangle program"<<endl;
        cout << "Choice 3: 3D rectangle program"<<endl;
        cout << "Choice 4: draw circle program"<<endl;
        cout << "Choice 5: clock program"<<endl;
        cout << "Choice 6: mouse clicks"<<endl;
        cout << "Choice 7: bezier curve program"<<endl;
        cout << "Choice 8: exit current program"<<endl;
        cout <<endl;

        int user_choice;
        std::cout << "Please make your selection, by entering the number corresponding to the choice: ";
        cin >> user_choice;
        cout << endl;

        switch(user_choice) {
          case 1:
            vocab();
            break;
          case 2:
            rectangle_program_2d();
            break;
          case 3:
            rectangle_program_3d();
            break;
          case 4:
            draw_circle_program();
            break;
          case 5:
            clock_program();
            break;
          case 6:
            mouse_clicks_program();
            break;
          case 7:
            bezier_curve_program();
            break;
          case 8:
            run_program = false;
            cout << "You have chosen to end the current program, or entered an invalid command." << endl;
            cout << endl;
            break;
          default:
            cout << "You have chosen to end the current program, or entered an invalid command." << endl;
            cout << endl;
            run_program = false;
        }//end switch case
    }//end while

    cout << "Thank you for using my program." << endl;

    return 0;
}//end main