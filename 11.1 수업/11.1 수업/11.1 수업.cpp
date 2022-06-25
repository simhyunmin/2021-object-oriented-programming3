
//input stream  -   c-style string (char[])
//output stream

//manipulator
//: 키워드는 아니지만 키워드 처럼 동작한다.
//ex) setw, fixed

//stream input (임시저장 공간이랑 비슷한 느낌 buffer)
//사용자가 입력한 값이 저장되는 임시 저장 공간
//bit의 흐름
//버퍼에 01100011...flush 와 같은 형태를 stream이라고 한다.
//white-space를 무시한다( "띄어쓰기", "\t"(탭), "\n"(엔터))
//istream 객체의 reference 를 리턴한다.
//조건문 자리에 cin이 오면 포인터로 형변환이 된다.
//cin 입력이 실패하면 null pointer(false)가 되고 성공하면 non-null pointer(true)가 된다.

//#include<iostream>
//using namespace std;
//
//int main() {
//
//	int a;
//	if (cin >> a) {
//		cout << "성공" << endl;
//
//	}
//
//	if (cin.fail()) {
//		cout << "실패" << endl;
//	}
//	cin.clear();          //cin의 failbit 초기화
//	cin.ignore(2, '\n');   //inputstream 버퍼 비워주기 
//                                 
//	while (cin) {                  //마지막 입력 값의 상태가 온다.
//		cout << "성공" << endl;    //마지막 입력 값이 true면 true, false면 false (cin은 마지막 입력 값의 상태를 가지고 있기 때문에)
//		if (cin) {
//			break;
//		}
//	}
//	return 0;
//}

//stream input 
//flag bits를 가지고 있다.

//eofbit
//ctrl + z
//파일의 끝 상태임을 의미한다.

//failbit 
//cin 입력 받는 경우
//int 를 입력 받아야하는데 char형을 입력 받는 경우
//1이 된다.

//#include<iostream>
//using namespace std;
//
//int main() {
//	int a;
//
//	while (true) {
//	;
//		if (!(cin>>a)) {
//			if (cin.eof()==-1) {
//				cout << "eof 입력 프로그램 종료" << endl;
//				return 0;
//			}
//			cout << cin.rdstate() << endl;
//			cin.clear();
//			cin.ignore(100, '\n');
//			cout << "숫자 아님" << endl;	
//		}
//
//		else {
//			cout << "숫자임" << endl;
//			cout << cin.rdstate()<<endl;
//			break;
//		}
//	}
//
//	return 0;
//}

//#include<iostream>
//using namespace std;
//
//int main() {
//	int a;
//
//	while (!(cin.eof())) {
//		cout << "hi my name is simhyunmin" << endl;
//		cin >> a;
//		
//		
//		
//	}
//
//	return 0;
//}

//badbit
//stream에 큰 손상이 왔을 때 badbit가 0->1로 세팅된다.
//코드적으로 해결방법이 없음

//goodbit
//eofbit, failbit and badbit가 0이면 good 상태
//cin.good(); 을 통해 상태 확인 가능

//#include<iostream>
//using namespace std;
//
//int main() {
//
//	int a;
//	cin >> a;
//	if (cin.good()) {
//		cout << "정상 상태" << endl;
//
//	}
//	else {
//		cout << "비정상 상태" << endl;
//	}
//
//	return 0;
//}


//rdstate
//goobit, eofbit, failbit, badbit 상태를 0~7 사이 숫자를 통해 모두 보여줌
//코드 ↓
//enum io_state {
//	goodbit = 0x00,
//	eofbit = 0x01,
//	failbit = 0x02,
//	badbit = 0x04
//};


//bad fail eof
// 0    1   1 


//clear 
//특정 bit의 값을 1로 세팅해준다. 그 대신 나머지 bit는 clear한다
//cin.clear()
//:모든 flag를 clear한 후에 goodbit를 1로 세팅해준다.
//cin.clear(ios::failbit)
//모든 flag를 clear한 후에 failbit를 1로 세팅

//cin.setstate(ios::failbit)
//나머지 초기화 안하고 지정한 bit만 1로 세팅

#include<iostream>
using namespace std;

int main() {
	int a;
	while (true) {
		cin >> a;
		/*cin.setstate(ios::goodbit);   */     //a에 char형이 들어왔을 때 여전히 failbit가 1로 세팅되어있기 때문에 cin은 실패상태가 된다.
		//cin.clear();
		cin.ignore(100, '\n');
		if (cin.fail()) {
			cout << "실패 상태"<<endl;
			break;
		}
		if (a == 1) {
			break;
		}

	}

	return 0;
}


//#include<iostream>
//using namespace std;
//
//int main() {
//
//	int a;
//	cin >> a;                    //char형 입력하고
//
//	/*cin.clear();*/
//	cin.setstate(ios::badbit);   //badbit 1로 설정하면 
//	
//
//	cout << cin.rdstate();       //rdstate에서 badbit 부분 4 failbit  2 더해서 6 
//
//	return 0;
//}

//stream error states
//!  연산자     ex) if(!cin)
//badbit or failbit가 1일 때 true를 리턴한다. 
//void* 
//badbit or failbit가 1일 때 false를 리턴한다.