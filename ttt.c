#include "include/raylib.h"
#include <stdio.h>

const int screenWidth = 900;
const int screenHeight = 600;
const int fontSize = 32;
const int fps = 30;

int main(void)
{
	InitWindow(screenWidth, screenHeight, "Initial window");
	
	SetTargetFPS(fps);
	
	while(!WindowShouldClose()){
		BeginDrawing();
			ClearBackground(BLACK);
			
			DrawText("Good job!", screenWidth/2 - MeasureText("Good job!", fontSize)/2, screenHeight/2 - fontSize/2, fontSize, GREEN);
		EndDrawing();
	}
	
	CloseWindow();
	
	return 0;
}