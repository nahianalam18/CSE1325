#include "Polygon.cpp"
#include <iostream>
using namespace std;

int main(){
    Polygon polygon;
    double temp = 1;

// cout << "Enter the length of a side: " ;
    while(temp){
    cout << "Enter the lengthssss of a side: " ;
    cin>>temp;
    if(temp<0){
        break;
    }
    polygon.add_side(temp);
    }
    double p = polygon.get_perimeter();
    cout << "This "<<polygon.get_sides()<<"sided Polygon has a perimeter of "<<p<<endl;

    return 0;
}
