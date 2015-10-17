# Geometric Workbench #
This is just a simple idea I had to create a simple workbench with small tools
to calculate the area of circles, triangles and rectangels. The whole point of
this is to input data to for example the rectangle program and the triangle
program and save those numbers in shell variables and to able to extract the
triangle from the rectangle. To the input is expected to come from STDIN and
output goes to STDOUT. So all those programs can exchange numbers with pipes.

## Example ##
Let's assume we have a rectangle *a* with the base 4 cm and hight 7 cm. Inside
this rectangle is a triangle *b* with the base 3 cm and hight 3 cm. Now we can
remove the triangle area from the rectangle area with the following commands.

```
a=`echo "4 7" | rectangle`; b=`echo "3 3" | triangle`
echo "scale=3; $a - $b" | bc
```

And the result of this will be 23.500, the remaining area of the rectangle once
the triangle is removed.

## Compilation ##
The programs can be compiled all at once with `make all` or one program at a
time with for example `make circle`.

