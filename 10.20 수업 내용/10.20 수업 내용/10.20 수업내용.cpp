//순수 가상 함수, 추상 클래스

//순수 가상 함수
//함수 정의를 제공하지 않는다.
//파생 클래스가 직접 정의한다.
//파생 클래스가 오버라이딩 되었을 때 순수 가상 함수를 정의하지 않는다면 오류 발생

//virtual void display() const = 0; 이런식으로 선언

//추상 클래스(abstract class)
//순수 가상 함수를 1개 이상 포함하고있는 클래스
//객체를 만들 수 없다
//다형성을 위한 참조자는 제공해준다.
//다형성을 위한 클래스이다.

//#include<iostream>
//using namespace std;
//
//class TmpBase {
//
//public:
//	virtual void work()= 0;  //가상함수 프로토타입 뒤에 =0을 붙이면 순수 가상 함수가 된다.
//	virtual void display() const = 0;
//};
//
//class TmpDr:public TmpBase {
//public:
//	virtual void work() {
//		cout << "아녕 못해" << endl;
//	}
//	virtual void display() const {
//		cout << "파생 클래스" << endl;
//	}
//	
//};
//
//int main() {
//
//	//TmpBase* base = new TmpBase;      추상클래스로 객체를 만들 수 없다.
//
//	TmpBase* base = new TmpDr;
//
//	base->display();
//	base->work();
//
//
//	return 0;
//}

//#include<iostream>
//using namespace std;
//
//class TmpBase {
//
//public:
//	virtual void display() const = 0;
//	
//};
//
//void TmpBase::display() const {          //순수 가상 함수 기본 정의를 정의할 수 있다.
//	cout << "base" << endl;              //기능적으로 제공하는 기능이지 그렇다고해서 추상 객체가 완전한 객체가 되는 것은 아니다.
//	                                     //즉 객체를 여전히 만들 수 없는 상태이다. 
//}
//
//class TmpDr:public TmpBase {
//public:
//	virtual void display() const {
//		cout << "파생 클래스" << endl;
//	}
//	
//	
//};
//
//
//int main() {
//
//	//TmpBase* base = new TmpBase;     
//	//순수 가상 함수 정의부가 있는 것 처럼 보여도 기능적으로만 제공할 뿐 여전히
//	//추상클래스로 객체를 만들 수 없다.
//
//	TmpBase* base = new TmpDr;
//
//	base->display();
//	base->TmpBase::display();   //순수 가상 함수의 기본 정의를 사용하고 싶을 때
//	
//
//	return 0;
//}

//downcasting
//베이스 클래스 타입의 포인터를 파생 클래스 타입의 포인터로 낮추는 것 
//upcasting을 해서 사용할 때 파생 클래스에 멤버 함수를 사용할 일이 있을 때 downcasting을 통해 파생 클래스로 낮춰서 사용
//동적인 프로그래밍 실행 단계에서 형 변환 시도를 한다.
//upcasting 된 상태에서만 downcasting 할 수 있다. 

//#include<iostream>
//using namespace std;
//
//class TmpBase {
//public:
//	
//	void display() { cout << "base" << endl; }
//	virtual ~TmpBase() {};
//};
//
//class TmpDr : public TmpBase {
//public:
//	void work() { cout << "힘들" << endl; }
//	void display() { cout << "derived" << endl; }
//};
//
//int main() {
//
//	TmpBase* base = new TmpDr;   //upcasting
//	base->display();
//	/*base->work();*/   //원래는 못함
//	dynamic_cast<TmpDr*>(base)->display();  //downcasting  
//	//upcasting 한 경우에만 downcasting 사용 가능하다. 
//
//	dynamic_cast<TmpDr*>(base)->work();
//
//	return 0;
//}



