#include <iostream>
#include "WinFunctions.h"
#include "Player.h"
#include "Entities.h"
#include "Mathematics.h"
#include "GDI_drawing.h"

int main()
{
	WinFunc win;
	win.GetInfo("AssaultCube");
	win.Print();

	Player player(win);

	Entities entities(win);

	Mathematics math(win);

	GDI_drawing draw(win);

	ShowWindow(FindWindowA("ConsoleWindowClass", NULL), false);
	draw.TargetWnd = FindWindow(0, "AssaultCube");
	draw.HDC_Desktop = GetDC(draw.TargetWnd);
	draw.SetupDrawing(draw.HDC_Desktop, draw.TargetWnd);

	draw.esp(entities, player, math);

	std::cout << "sup";
	
	return 0;
}

