class Polygon{

double perimeter = 0.0;
int nsides = 0;
double lengths[100];

public:
void add_side(double length){
    lengths[nsides]=length;
    nsides++;
}

double get_perimeter(){
    perimeter = 0;
    for(int i = 0; i<=nsides;i++)
    {
        perimeter+=lengths[i];
    }
    return perimeter;

}
int get_sides(){
    return nsides;
}
};

