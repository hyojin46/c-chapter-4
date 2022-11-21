#include <iostream>
using namespace std;

class Circle {
	int radius;
public:
	Circle();
	Circle(int r);
	~Circle(); //소멸자
	void setRadius(int r) { radius = r; }
	double getArea() { return 3.14 * radius * radius; }// 면적을 구하는 함수
};

Circle::Circle() {
	radius = 1;
	cout << "생성자 실행 radius= " << radius << endl;
}

Circle::Circle(int r) {
	radius = r;
	cout << "생성자 실행 radius= " << radius << endl;
}

Circle::~Circle() {
	cout << "소멸자 실행 radius= " << radius << endl;
}

int main() {
	Circle* pArray = new Circle[3]; //객체의 기본 생성자 Circle() 실행

	pArray ={ Circle(10), Circle(20)};

	pArray[0].setRadius(10); //멤버 변수의 값에 접근
	pArray[1].setRadius(20);
	pArray[2].setRadius(30);

	for (int i = 0; i < 3; i++) //멤버 함수에 접근하여 각 객체의 면적 구하기
		cout << pArray[i].getArea() << '\n';

	Circle* p = pArray; // 포인터 p에 배열의 주소값을 넣음
	for (int i = 0; i < 3; i++) {
		cout << p->getArea() << '\n';
		p++;
	}

	delete[]pArray; //소멸자 실행 ( 생성의 반대 순으로 실행 )
}
