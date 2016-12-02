#include "std_lib_facilities_4.h"
#include "GUI.h"
#include "Graph.h"
#include "Window.h"
#include "level.h"

using namespace Graph_lib;

// Each level represents a line in the file; Need to implement level in correspondence to line in file 
void Level_screen::level_3() 
{
	string name;
	double score;
	TopScores_in >> name; // Reads a string from the file into name
	TopScores_in >> score; // Reads a double from the file into score
	
	pair <string,double> product1; 
	product1 = make_pair(name,score); // Constructs a pair from name and score
	cout << product1.first << endl; // Prints the name
	cout << product1.second << endl; // Prints the score
	hide();
}
void Level_screen::level_4() 
{
	string name;
	double score;
	TopScores_in >> name; 
	TopScores_in >> score; 
	
	pair <string,double> product1; 
	product1 = make_pair(name,score); 
	cout << product1.first << endl; 
	cout << product1.second << endl; 
	hide();
}
void Level_screen::level_5() 
{
	string name;
	double score;
	TopScores_in >> name; 
	TopScores_in >> score; 
	
	pair <string,double> product1; 
	product1 = make_pair(name,score); 
	cout << product1.first << endl; 
	cout << product1.second << endl; 
	hide();
}
void Level_screen::level_6() 
{
	string name;
	double score;
	TopScores_in >> name; 
	TopScores_in >> score; 
	
	pair <string,double> product1; 
	product1 = make_pair(name,score); 
	cout << product1.first << endl; 
	cout << product1.second << endl;
	hide();
}
void Level_screen::level_7() 
{
	string name;
	double score;
	TopScores_in >> name; 
	TopScores_in >> score; 
	
	pair <string,double> product1; 
	product1 = make_pair(name,score); 
	cout << product1.first << endl; 
	cout << product1.second << endl; 
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
Select_level{Point{x_max()-115,y_max()-100},"Select a level"}


{
	attach(L3_button);
	attach(L4_button);
	attach(L5_button);
	attach(L6_button);
	attach(L7_button);	
	attach(Select_level);
	TopScores_in;{TopScores_in;};
	Select_level.set_font_size(40);
}
