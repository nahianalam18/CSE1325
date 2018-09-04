class Polygon{

double perimeter = 0.0;
int nsides = 0;
double lengths[100];

public:
void add_side(double length){
    lengths[nsides]=length;
    nsides++;
}

int get_sides(){
    return nsides;
}
};

