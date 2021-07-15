#include "stdio.h"
struct point{
	float y;
	float x;
	
};

struct triangle{
	point a, b, c;
};

struct circle{
	point c;
	float r;
};

struct rectangle{
	point a, b, c, d;
};

struct polygon{
	point[100] ps;
	int n;
};

struct polygon{
	point*ps;
};

