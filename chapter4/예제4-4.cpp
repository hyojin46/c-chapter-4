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
//	Circle circleArray[2][3]; //Circle 객체 2차원 배열 생성
//
//	circleArray[0][0].setRadius(1);
//	circleArray[0][1].setRadius(2);
//	circleArray[0][2].setRadius(3);
//	circleArray[1][0].setRadius(4);
//	circleArray[1][1].setRadius(5);
//	circleArray[1][2].setRadius(6);
//	
//	for (int i = 0; i < 2; i++) // 배열의 각 원소 객체의 멤버 접근 , 행의 인덱스 값
//		for (int j=0; j < 3; j++) { // 열의 인덱스 값
//			cout << "Circle [" << i << "," << j << "]의 면적은 ";
//			cout << circleArray[i][j].getArea() << endl;
//		}
//
//}