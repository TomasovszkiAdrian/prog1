#include "Graph.h"
#include "Simple_window.h"

int main()
{
	Simple_window ablak(Point{100,100},600,800, "Ajto");
	arc h(Point{200,200}, 150,50,0,360);
	ablak.attach(h);
	ablak.wait_for_button();


}