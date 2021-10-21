char* ccktri(int x,int y, int z){
    // Check for equilateral triangle
    if (x == y && y == z){
        return('EquilateralTriangle');
    }
    // Check for isosceles triangle
    else if (x == y || y == z || z == x){
        return('IsoscelesTriangle');
    }
    // Otherwise scalene triangle
    else{
        return ('ScaleneTriangle');  
    }
}