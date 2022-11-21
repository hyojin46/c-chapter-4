//#include <iostream>
//using namespace std;
//
//class Circle {
//	int radius;
//public:
//	Circle() { radius = 1; } //매개변수 있는
//	Circle(int r) { radius = r; } //매개변수 있는
//	void setRadius(int r) { radius = r; } //일반 멤버 함수 추가 ( 매개변수 있는 배열을 위해 )
//	double getArea();
//};
//
//double Circle::getArea() {
//	return 3.14 * radius * radius;
//}
//
//int main() {
//	Circle circleArray[3] = { Circle(10),Circle(20),Circle() }; //Circle 배열 초기화
//
//	for (int i; i < 3; i++) //배열의 각 객체의 멤버 접근, 멤버함수를 호출하여 면적 구함
//		cout << "Circle " << i << "의 면적은 " << circleArray[i].getArea() << endl;
//
//}