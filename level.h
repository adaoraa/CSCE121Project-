#include "std_lib_facilities_4.h"
#include "Simple_window.h"
#include "GUI.h"
#include "Graph.h"
#include "Window.h"

//#include "level.h"

using namespace Graph_lib;

class Level_screen: public Graph_lib::Window{
	

private:
	Button L3_button;
	// Button L4_button;
	// Button L5_button;
	// Button L6_button;
	// Button L7_button;
	// Text Select_level; 
public:
	Level_screen(Point xy, int w, int h, const string& title);
	void level_3();
	// void level_4();
	// void level_5();
	// void level_6();
	// void level_7();
};

void Level_screen::level_3() 
{
	hide();
}
// void Level_screen::level_4() 
// {
	// hide();
// }
// void Level_screen::level_5() 
// {
	// hide();
// }
// void Level_screen::level_6() 
// {
	// hide();
// }
// void Level_screen::level_7() 
// {
	// hide();
// } 


Level_screen::Level_screen(Point xy, int w, int h, const string& title)
: Window{xy, w, h, title},
L3_button{Point{250,250},125,50,"Level 3",
	[](Address, Address pw) {reference_to<Level_screen>(pw).level_3();}}

	
{
	attach(L3_button);
	//attach(L4_button);
	//attach(L5_button);
	//attach(L6_button);
	//attach(L7_button);	
}

  

