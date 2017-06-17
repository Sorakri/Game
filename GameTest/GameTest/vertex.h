#pragma once

#include <GL/glew.h>


//Position struct
struct Position {
	float x;
	float y;
};


//4 bytes for r g b a color.
struct Color {
	GLubyte r;
	GLubyte g;
	GLubyte b;
	GLubyte a;
};

struct Vertex {

	Position position;

	Color color;
	
};