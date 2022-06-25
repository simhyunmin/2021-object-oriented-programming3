
//상속
//is-a 관계가 성립할 때 사용하는게 좋다
//ex)    사람 is a 동물 
// public, private, protected 세 가지 상속의 타입이 있다.

//public 상속
//-모든 파생 클래스의 객체는 베이스 클래스의 객체이다
//-하지만 베이스 클래스 객체는 파생 클래스의 객체가 아니다 (타입이 다르다)
//upcasting 지원 Base* -> Derived(원래는 객체가 다르기에 타입이 다르지만, 파생 클래스는 베이스 클래스의 객체이므로 업캐스팅이 가능)
//private 멤버에 접근할 수 없다. (상속받지만 은닉되어있어서 접근할 수 없음)

//private 상속
//private 상속이 필요한 상황이면 private 상속을 쓰지말고 composition을 사용하는게 더 좋다


//protected 상속

//protected 타입
//클래스 외부(main 함수 같은 곳)에서 볼 때는 private
//상속 관계에서 볼 때는 public으로 볼 수 있다 


//#include<iostream>
//using namespace std;
//
//
//class A {                   //base class(부모 클래스, 기본 클래스)
//private:
//	int _a;
//	string firstName;    //(using namespace std; 사용 안할 때는 std::string 으로 선언해야함)
//public:
//	
//	A(int a) : _a{ a } {};
//	int geta()const { return _a; }
//
//};
//
//class B : public A {        //derived classes (자식 클래스, 파생 클래스)
//private:
//	int _b;
//public:
//	B(int a, int b) : A{ a }, _b{ b }{}  //물려받은 클래스의 생성자를 호출해 a 초기화
//	int getb() const { return _b; }
//};
//
//int main() {
//
//	B b(1, 2);
//	b.geta();
//
//	return 0;
//}

//다중 상속
//여러 부모클래스로부터 다중 상속을 받는 것

//#include<iostream>
//using namespace std;
//class People {
//private:
//	int _age;
//	string _gender;
//	int _height;
//public:
//	People(int a, string b, int c) 
//		:_age{ a }, _gender{ b }, _height{ c } 
//	{
//		cout << "People 객체 생성" << endl;
//	}
//	int getAge() { return _age; }
//	string getGender() { return _gender; }
//	int getHeight() { return _height; }
//	void setAge(int age) { _age = age; }
//	void setGender(int gender) { _gender = gender; }
//	void setHeight(int height) { _height = height; }
//
//	void information() {
//		cout << "나이:" << getAge() << endl;
//		cout << "성별:"<<getGender()<<endl;
//		cout << "키:"<<getHeight()<<endl;
//
//	}
//
//	~People() { cout << "People 객체 소멸" << endl; }
//	
//};
//
//class Student1:public People{
//private:
//public:
//	Student1(int a, string b, int c)
//		:People(a, b, c)
//	{
//		cout << "Student1 객체 생성" << endl;
//	}
//	~Student1() { cout << "Student1 객체 소멸" << endl; }
//};
//
//class Student2:public People {
//private:
//public:
//	Student2(int a, string b, int c)
//		:People(a, b, c)
//	{
//		cout << "Student2 객체 생성" << endl;
//	}
//	~Student2() { cout << "Student2 객체 소멸" << endl; }
//};
//
//int main() {
//	int a;
//	string b;
//	int c;
//
//	int d;
//	string e;
//	int f;
//	int __setage;
//	cout << "학생 1의 나이, 성별, 키를 입력: ";
//	cin >> a;
//	cin >> b;
//	cin >> c;
//	cout << endl;
//	cout << "학생 2의 나이, 성별, 키를 입력: ";
//	cin >> d;
//	cin >> e;
//	cin >> f;
//	Student1 s1(a, b, c);
//	Student2 s2(d, e, f);
//	s1.information();
//	cout << endl;
//	s2.information();
//
//	cin >> __setage;
//	s1.setAge(__setage);
//	cout << s1.getAge()<<endl;
//
//
//	return 0;
//}



//throw 관련 내용 복습
//#include<iostream>
//using namespace std;
//
//void test(int a) {
//	if (a == 1) {
//		cout << "에러";
//		throw a;   //try, throw, catch 없이 throw 혼자 쓰일 경우 throw 문이 실행되었을때 에러가 뜨면서 프로그램 종료
//		           예외처리 문으로 만들어 활용할 수 있음
//}
//}
//
//int main() {
//	int a;
//	
//	while (true) {
//		cin >> a;
//		test(a);
//	}
//
//	return 0;
//}
