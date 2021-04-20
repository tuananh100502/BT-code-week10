#include <iostream>
using namespace std;
struct point{
	int x,y;
	void print(struct point){
		cout << "(" <<x << "," << y <<")";
}
};
int main(){
	point coordinates;
	cin >> coordinates.x >> coordinates.y;
	coordinates.print(coordinates);
	}
	
