#include <stdio.h>
class Point{
    double x;
    double y;
    double x_s;
    double y_s;
public:
    Point(double x, double y){
        this->x = x;
        this->y = y;
        printf("Construct is created\n");
    }
    void print(){
        printf("X = %f\n",this->x);
        printf("Y = %f\n",this->y);
        printf("\n");
    }
    void move_x_y(double x, double y){
        this->x = this->x + x;
        this->y = this->y + y;
    }
    void save(){
        x_s = this->x;
        y_s = this->y;
    }
    void load(){
        this->x = x_s;
        this->y = y_s;
    }
    ~Point(){
        printf("Construct is destroyed\n");
    }
};

int main()
{
    class Point p1 = Point{3.4, 2.1};
    p1.print();
    p1.save();
    p1.move_x_y(2,1);
    p1.print();
    p1.load();
    p1.print();
    return 0;
}
