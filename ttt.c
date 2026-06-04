#include "include/raylib.h"
#include <stdio.h>

const Color PRIMARYCLR = SKYBLUE;
const Color BACKGROUNDCLR = {248, 248, 248, 255};

const float third = 2/3;
const int screenWidth = 900;
const int screenHeight = 600;
const int fontSize = 32;
const int fps = 30;
const float gridDimensions = 150;
const float gridPosX = screenWidth/2-((gridDimensions*3)/2);
const float gridPosY = screenHeight/2-((gridDimensions*3)/2);
const int gridLineSize = 5;
const int cols = 3;
const int rows = 3;

void grib(Rectangle/*, int, int*/);

int main(void)
{
	InitWindow(screenWidth, screenHeight, "Initial window");
	
	Rectangle gridBox;
	//int posX = 100;
	//int posY = 100;
	
	SetTargetFPS(fps);
	
	while(!WindowShouldClose()){
		BeginDrawing();
			ClearBackground(BACKGROUNDCLR);
			
			grib(gridBox/*, posX, posY*/);
		EndDrawing();
	}
	
	CloseWindow();
	
	return 0;
}

void grib(Rectangle gridBox/*, int posX, int posY*/){
	for(int i = 0; i < rows; i++){
		for(int j = 0; j < cols; j++){
			gridBox.x = gridPosX+(j*gridDimensions) - j*gridLineSize;
			gridBox.y = gridPosY+(i*gridDimensions) - i*gridLineSize;
			//gridBox.x = posX + (j*100);
			//gridBox.y = posX + (i*100);
			gridBox.width = gridDimensions;
			gridBox.height = gridDimensions;
			DrawRectangleLinesEx(gridBox, gridLineSize, PRIMARYCLR);
		}
	}
	
	Rectangle outer = {gridPosX, gridPosY, gridDimensions*3 - 10, gridDimensions*3 - 10};
	DrawRectangleLinesEx(outer, gridLineSize, BACKGROUNDCLR);
}