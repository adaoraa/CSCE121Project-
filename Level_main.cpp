#include "level.h"


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