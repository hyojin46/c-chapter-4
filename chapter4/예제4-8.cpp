//#include <iostream>
//using namespace std;
//
//class Circle {
//	int radius;
//public:
//	Circle();
//	Circle(int r);
//	~Circle(); //소멸자
//	void setRadius(int r) { radius = r; }
//	double getArea() { return 3.14 * radius * radius; }// 면적을 구하는 함수
//};
//
//Circle::Circle() {
//	radius = 1;
//	cout << "생성자 실행 radius= " << radius << endl;
//}
//
//Circle::Circle(int r) {
//	radius = r;
//	cout << "생성자 실행 radius= " << radius << endl;
//}
//
//Circle::~Circle() {
//	cout << "소멸자 실행 radius= " << radius << endl;
//}
//
//int main() {
//	int radius;
//	while (true) {
//		cout << "정수 반지름 입력(음수이면 종료)>> ";
//		cin >> radius; //반지름 입력 받음
//
//		if (radius < 0) break; //음수가 입력되면 종료됨
//
//		Circle* p = new Circle(radius);
//		cout << "원의 면적은 " << p->getArea() << endl;
//		delete p; //delete문이 없다면 메모리 누수 발생
//	}
//}
