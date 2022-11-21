//#include <iostream> // 예제4-14
//#include <string>
//using namespace std;
//
//int main() {
//	string s;
//	cout << "7+23+5+100+25와 같이 덧셈 문자열을 입력하세요." << endl;
//	getline(cin, s, '\n'); //문자열 입력받음
//
//	int sum=0;
//	int startIndex = 0;
//
//	while (true) {
//		int fIndex = s.find('+', startIndex); //'+' 문자 검색
//		if (fIndex = -1) { // '+'를 검색할 수 없음
//			string part = s.substr(startIndex); //part라는 스트링 객체에 startIndex의 서브 스트링으로 생성
//			if (part == "") break; // 만약 part(서브 스트링 객체)가 비어있다면 빠져나가기 -???
//			cout << part << endl;
//			sum += stoi(part); // 합의 값을 문자열형에서 정수형으로 변환
//			break;
//		}
//
//		int count = fIndex - startIndex;
//		string part = s.substr(startIndex, count);
//
//		cout << part << endl;
//		sum += stoi(part);
//		startIndex = fIndex + 1;
//	}
//	cout << "숫자들의 합은 " << sum;
//}