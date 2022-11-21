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
//	Circle circleArray[3]; //Circle 객체 배열 생성
//
//	circleArray[0].setRadius(10); //방법 1)배열의 각 객체의 멤버에 접근( 인덱스 값으로 접근 )
//	circleArray[1].setRadius(20);
//	circleArray[2].setRadius(30);
//
//	for (int i; i < 3; i++) //배열의 각 객체의 멤버 접근, 멤버함수를 호출하여 면적 구함
//		cout << "Circle " << i << "의 면적은 " << circleArray[i].getArea() << endl;
//
//	Circle *p; //방법 2)배열 포인터를 사용하여 멤버에 접근
//	p = circleArray; //배열은 &를 붙이지 않는다 ( 배열은 주소값을 의미, 배열의값=주소값)
//	for (int i = 0; i < 3; i++) {
//		cout << "Circle " << i << "의 면적은 " << p->getArea() << endl;
//		p++; // 포인터 값 증가시켜줌
//	}
//}