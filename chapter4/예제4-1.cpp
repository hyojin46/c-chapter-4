//#include <iostream>
//using namespace std;
//
//class Circle {
//	int radius;
//public:
//	Circle() { radius = 1; } //매개변수 있는
//	Circle(int r) { radius = r; } //매개변수 있는
//	double getArea();
//};
//
//double Circle::getArea() {
//	return 3.14 * radius * radius;
//}
//
//int main() {
//	Circle donut;
//	Circle pizza(30);
//
//	cout << donut.getArea() << endl;
//
//	Circle* p; //포인트 변수 선언
//	p = &donut; // 포인트 변수에 객체의 주소 입력
//	cout << p->getArea() << endl; // 간접접근연산자 사용 ->
//	cout << (*p).getArea() << endl; // 직접접근연산자 사용 .
//
//	p = &pizza;
//	cout << p->getArea() << endl;
//	cout << (*p).getArea() << endl;
//}