#include "std_lib_facilities_4.h"
#include "Simple_window.h"
#include "GUI.h"
#include "Graph.h"
#include "Window.h"


using namespace Graph_lib;

class Level_screen: public Graph_lib::Window{
	

private:
	Button L3_button;
	Button L4_button;
	Button L5_button;
	Button L6_button;
	Button L7_button;
	Text Select_level; 
	ifstream TopScores_in;
public:
	Level_screen(Point xy, int w, int h, const string& title);
	void level_3();
	void level_4();
	void level_5();
	void level_6();
	void level_7();
};

void Level_screen::level_3() 
{
	string name;
	double score;
	pair <string,double> product1; 
	product1 = make_pair(string TopScores_in,score);
	cout << product1;
	hide();
}
void Level_screen::level_4() 
{
	hide();
}
void Level_screen::level_5() 
{
	hide();
}
void Level_screen::level_6() 
{
	hide();
}
void Level_screen::level_7() 
{
	hide();
} 


Level_screen::Level_screen(Point xy, int w, int h, const string& title)
: Window{xy, w, h, title},
L3_button{Point{150,250},50,50,"Level 3",
[](Address, Address pw) {reference_to<Level_screen>(pw).level_3();}},
L4_button{Point{200,250},50,50,"Level 4",
	[](Address, Address pw) {reference_to<Level_screen>(pw).level_4();}},
L5_button{Point{250,250},50,50,"Level 5",
	[](Address, Address pw) {reference_to<Level_screen>(pw).level_5();}},
L6_button{Point{300,250},50,50,"Level 6",
	[](Address, Address pw) {reference_to<Level_screen>(pw).level_6();}},
L7_button{Point{350,250},50,50,"Level 7",
	[](Address, Address pw) {reference_to<Level_screen>(pw).level_7();}},
Select_level{Point{x_max()-350,y_max()-200},"Select a level"}


{
	attach(L3_button);
	attach(L4_button);
	attach(L5_button);
	attach(L6_button);
	attach(L7_button);	
	attach(Select_level);
	TopScores_in{TopScores_in};
}


int main() {
try{
	Point t1(100,100);
	Level_screen win(t1,600,400,"Select Level");
	
	 return gui_main();
	 
	 return 0;
	}
catch (exception& e) {
	cerr << "exception: " << e.what() << endl;
	keep_window_open();
	return 1;
}
catch (...) {
	cerr << "exception\n";
	keep_window_open();
	return 2;
}
}
  

