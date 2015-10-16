all: geometric

geometric: circle.c triangle.c rectangle.c
	gcc circle.c -lm -o circle
	gcc triangle.c -lm -o triangle
	gcc rectangle.c -lm -o rectangle

circle: circle.c
	gcc circle.c -lm -o circle

triangle: triangle.c
	gcc triangle.c -lm -o triangle

rectangle: rectangle.c
	gcc rectangle.c -lm -o rectangle

clean:
	rm rectangle triangle circle

