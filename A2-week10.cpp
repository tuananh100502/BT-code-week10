#include <iostream>
using namespace std;
struct Point{
	int x,y;
	void print(struct Point){
		cout << &x << "and" << &y << endl;
	}
};
void print(struct Point a){
	cout << &a.x << "and" << &a.y << endl;
}
void print(struct Point* a){
	cout << &a->x << "and" << &a->y << endl;
}

int main(){
	Point temp;
	cin >> temp.x >> temp.y;
	temp.print(temp);
	print(temp);
	cout << endl;
	print(&temp);
}
