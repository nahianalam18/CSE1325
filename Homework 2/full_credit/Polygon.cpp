class Polygon{

double perimeter = 0.0;
int sides = 0;

public:
void add_side(double length){
    perimeter += length;
    if(length> 0){
    sides++;
    }
}
double get_perimeter(){
    return perimeter;

}
int get_sides(){
    return sides;
}
};

