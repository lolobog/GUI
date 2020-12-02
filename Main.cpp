#include "Simple_window.h" 
#include "Graph.h"   
#include "std_lib_facilities.h";
using namespace Graph_lib;

int main()
{
 
    Point tl{ 100,100 };
    Simple_window win{ tl, 600, 400, "Canvas" };

   
   // Box sm(Point{ 300, 500 }, 200, 100);
   // sm.set_color(Color::red);
   // win.attach(sm); 

    Regular_Hexagon he(Point{ 500, 500 }, 250);
    he.set_color(Color::red);
    win.attach(he);

    win.wait_for_button();
}