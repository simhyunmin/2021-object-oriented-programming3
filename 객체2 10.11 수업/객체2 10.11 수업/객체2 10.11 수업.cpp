//상속(inheritance)

//#include<iostream>
//using namespace std;
//
//class TmpBase {
//private:
//	int a;
//public:
//
//	/*TmpBase() : a{ 0 } {
//		cout << "베이스 클래스 기본 생성자 호출" << endl;
//	}*/
//
//	TmpBase(int a){          //만약 베이스 클래스에 다른 생성자가 명시적으로 생성되어 있고 기본 생성자가 없을 때 
//		                     //파생 클래스에서 암시적으로 베이스 클래스의 기본 생성자를 호출 못한다.           (오류 발생)                                                                
//		this->a = a;
//
//		cout << a << "베이스 클래스 생성자 호출" << endl;
//	}
//
//	~TmpBase() {
//		cout << a << "베이스 클래스 소멸자 호출" << endl;
//	}
//};
//
//class TmpDr:public TmpBase {
//private:
//	int a;
//public:
//	TmpDr(int a) {                   //베이스 클래스의 생성자, 멤버 초기화 리스트에서 호출
//								       //베이스 클래스의 기본 생성자가 있을 때 파생클래스 부분에서 명시적으로 호출 안한 경우에 기본 생성자가 암시적으로 호출된다.
//									   //단, 베이스 클래스에 기본 생성자가 없을 때 파생클래스 부분에서 오류가 발생 
//		                               //멤버 초기화 리스트가 body 부분보다 먼저 실행되기 때문에 베이스 클래스의 생성자가 호출되고 나서 
//		                               //파생 클래스의 생성자가 호출된다.
//									  
//
//
//		this->a = a;              
//		cout << a << "파생 클래스 생성자 호출" << endl;
//
//	}
//	~TmpDr() {
//		cout << a << "파생 클래스 소멸자 호출" << endl;
//	}
//};
//
//int main() {
//	TmpDr a(1);
//
//	return 0;
//}

//상속 관계에서 베이스 클래스의 데이터 멤버를 
//파생 클래스에서 사용 불가능 
//만약 베이스 클래스에서 protected로 선언된 변수라면
//상속 관계에서 public
//main 등 외부에서는 private으로 보이게 할 수 있다. 
// protected 남용해서 사용하면 안 좋다(시험 때 사용 x)
// 
//#include<iostream>
//using namespace std;
//
//class TmpBase {
//protected:
//	int _a{ 1 };
//public:
//	explicit TmpBase(int a): _a{a}{}
//};
//
//class TmpDr :public TmpBase {
//private:
//	int _b;
//public:
//	explicit TmpDr(int a, int b): TmpBase{a}, _b{b} {}
//	int getA() const { return _a; }                      //_a가 private으로 선언된 경우에는 파생 클래스에서 호출 불가능 
//	int getB() const { return _b; }
//};
//int main() {
//	TmpDr d{ 2, 12 };
//	cout << d.getA() << endl;
//	cout << d.getB() << endl;
//	cout << d._a << endl; //private이므로 클래스 외부에서 직접 호출 불가능
//
//	return 0;
//}

//protected 장단점 
//장점
//극한의 성능을 추구할 때 사용
//직접적으로 값을 수정할 수 있다.
//set get 함수의 overhead를 막는다.

//단점
//안정성 체크 불가능
//구현 의존도가 높아진다.(베이스 클래스 없이는 파생 클래스가 정상적으로 작동할 수 없는 경우가 생길 수 있어서


//일반적으로 사용하는 베이스 클래스의 데이터 멤버 접근법 

//#include<iostream>
//
//class TmpBase {
//private:
//	int _a{ 1 };
//public:
//	explicit TmpBase(int a) : _a{a}{}
//	int getA()const { return _a; }
//};
//class TmpDr :public TmpBase {
//private:
//	int _b;
//public:
//	explicit TmpDr(int a, int b):TmpBase(a), _b{b}{}
//	int getB()const { return _b; }
//};
// 
//using namespace std;
//
//int main() {
//	TmpDr d{ 2, 12 };
//	cout << d.getA() << endl;      //베이스 클래스의 멤버 함수를 호출해서 간접적으로 사용 가능
//	cout << d.getB() << endl;    
//
//	return 0;
//}


//변수 가리기
//ex)
//class Tmp {
//public:
//	Tmp(int a) {
//		a  (가장 최근에 생성된 a가 쓰인다. 즉, Tmp(int a) 부분에 a가 쓰인다. )
//	}
//private:
//	int a;
//};

//베이스 클래스, 파생 클래스에 같은 이름의 멤버 함수가 있을 때 처리법

//#include<iostream>
//using namespace std;
//
//class TmpBase {
//private:
//int _a{ 1 };
//
//public:
//	explicit TmpBase(int a): _a{a} {}
//	void display()const { cout << _a << endl; }
//};
//
//class TmpDr :public TmpBase {
//private:
//int _b;
//
//public:
//	explicit TmpDr(int a, int b): TmpBase{a}, _b{b}{}
//	void display() const { cout << _b << endl; }
//};
//
//
//int main() {
//	TmpDr d{ 2, 12 };
//	d.display();     //파생클래스의 display가 실행된다
//	d.TmpBase::display(); //스코프 연산자를 이용해서 베이스 클래스의 display 실행
//
//	return 0;
//}

//inheritance / composition 
//"is-a" relationship 일 때
//inheritance(상속) 사용이 더 좋다
//ex) Car is a vehicle

//"has-a" relationship 일 때
//composition(구성) 사용이 더 좋다.
//ex) Car has a steering wheel



