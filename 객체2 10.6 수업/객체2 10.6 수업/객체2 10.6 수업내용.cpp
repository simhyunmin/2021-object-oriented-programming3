
//���
//is-a ���谡 ������ �� ����ϴ°� ����
//ex)    ��� is a ���� 
// public, private, protected �� ���� ����� Ÿ���� �ִ�.

//public ���
//-��� �Ļ� Ŭ������ ��ü�� ���̽� Ŭ������ ��ü�̴�
//-������ ���̽� Ŭ���� ��ü�� �Ļ� Ŭ������ ��ü�� �ƴϴ� (Ÿ���� �ٸ���)
//upcasting ���� Base* -> Derived(������ ��ü�� �ٸ��⿡ Ÿ���� �ٸ�����, �Ļ� Ŭ������ ���̽� Ŭ������ ��ü�̹Ƿ� ��ĳ������ ����)
//private ����� ������ �� ����. (��ӹ����� ���еǾ��־ ������ �� ����)

//private ���
//private ����� �ʿ��� ��Ȳ�̸� private ����� �������� composition�� ����ϴ°� �� ����


//protected ���

//protected Ÿ��
//Ŭ���� �ܺ�(main �Լ� ���� ��)���� �� ���� private
//��� ���迡�� �� ���� public���� �� �� �ִ� 


//#include<iostream>
//using namespace std;
//
//
//class A {                   //base class(�θ� Ŭ����, �⺻ Ŭ����)
//private:
//	int _a;
//	string firstName;    //(using namespace std; ��� ���� ���� std::string ���� �����ؾ���)
//public:
//	
//	A(int a) : _a{ a } {};
//	int geta()const { return _a; }
//
//};
//
//class B : public A {        //derived classes (�ڽ� Ŭ����, �Ļ� Ŭ����)
//private:
//	int _b;
//public:
//	B(int a, int b) : A{ a }, _b{ b }{}  //�������� Ŭ������ �����ڸ� ȣ���� a �ʱ�ȭ
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

//���� ���
//���� �θ�Ŭ�����κ��� ���� ����� �޴� ��

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
//		cout << "People ��ü ����" << endl;
//	}
//	int getAge() { return _age; }
//	string getGender() { return _gender; }
//	int getHeight() { return _height; }
//	void setAge(int age) { _age = age; }
//	void setGender(int gender) { _gender = gender; }
//	void setHeight(int height) { _height = height; }
//
//	void information() {
//		cout << "����:" << getAge() << endl;
//		cout << "����:"<<getGender()<<endl;
//		cout << "Ű:"<<getHeight()<<endl;
//
//	}
//
//	~People() { cout << "People ��ü �Ҹ�" << endl; }
//	
//};
//
//class Student1:public People{
//private:
//public:
//	Student1(int a, string b, int c)
//		:People(a, b, c)
//	{
//		cout << "Student1 ��ü ����" << endl;
//	}
//	~Student1() { cout << "Student1 ��ü �Ҹ�" << endl; }
//};
//
//class Student2:public People {
//private:
//public:
//	Student2(int a, string b, int c)
//		:People(a, b, c)
//	{
//		cout << "Student2 ��ü ����" << endl;
//	}
//	~Student2() { cout << "Student2 ��ü �Ҹ�" << endl; }
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
//	cout << "�л� 1�� ����, ����, Ű�� �Է�: ";
//	cin >> a;
//	cin >> b;
//	cin >> c;
//	cout << endl;
//	cout << "�л� 2�� ����, ����, Ű�� �Է�: ";
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



//throw ���� ���� ����
//#include<iostream>
//using namespace std;
//
//void test(int a) {
//	if (a == 1) {
//		cout << "����";
//		throw a;   //try, throw, catch ���� throw ȥ�� ���� ��� throw ���� ����Ǿ����� ������ �߸鼭 ���α׷� ����
//		           ����ó�� ������ ����� Ȱ���� �� ����
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
