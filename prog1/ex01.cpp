#include "./GUI/Simple_window.h"
#include "./GUI/Graph.h"

#include <string>
#include <iostream>
#include <vector>

using namespace Graph_lib;

int main()
try{
	Point t1{100,100};

	Simole_window win {t1,600,400, "ch 12 labor"};
	win.wait_for_button(); --use-images` 

}
catch(exception& e){
	cerr <<"exception: " << e.what() << '\n';
	return 1;
}
catch(...){
	cerr <<"error\n";
	return 2;
}