#include <iostream>
using namespace std;
struct Point{
	int x,y;
};
int main(){
	Point temp;
	cout << &temp << endl;
	cout << &temp.x << endl << temp.y;
}//dia chi cua temp trung voi dia chi cua truong dau tien duoc khai bao trong struct .
