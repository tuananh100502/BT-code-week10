#include <iostream>
using namespace std;
struct Point{
double* x=new double;
double y; 
};
struct Point2{
	double i[20];
};
int main(){
	Point temp;
	Point2 temp2;
	cout << temp.x << endl << temp.y << endl;
	cout << temp2.i;
}
