
//input stream  -   c-style string (char[])
//output stream

//manipulator
//: Ű����� �ƴ����� Ű���� ó�� �����Ѵ�.
//ex) setw, fixed

//stream input (�ӽ����� �����̶� ����� ���� buffer)
//����ڰ� �Է��� ���� ����Ǵ� �ӽ� ���� ����
//bit�� �帧
//���ۿ� 01100011...flush �� ���� ���¸� stream�̶�� �Ѵ�.
//white-space�� �����Ѵ�( "����", "\t"(��), "\n"(����))
//istream ��ü�� reference �� �����Ѵ�.
//���ǹ� �ڸ��� cin�� ���� �����ͷ� ����ȯ�� �ȴ�.
//cin �Է��� �����ϸ� null pointer(false)�� �ǰ� �����ϸ� non-null pointer(true)�� �ȴ�.

//#include<iostream>
//using namespace std;
//
//int main() {
//
//	int a;
//	if (cin >> a) {
//		cout << "����" << endl;
//
//	}
//
//	if (cin.fail()) {
//		cout << "����" << endl;
//	}
//	cin.clear();          //cin�� failbit �ʱ�ȭ
//	cin.ignore(2, '\n');   //inputstream ���� ����ֱ� 
//                                 
//	while (cin) {                  //������ �Է� ���� ���°� �´�.
//		cout << "����" << endl;    //������ �Է� ���� true�� true, false�� false (cin�� ������ �Է� ���� ���¸� ������ �ֱ� ������)
//		if (cin) {
//			break;
//		}
//	}
//	return 0;
//}

//stream input 
//flag bits�� ������ �ִ�.

//eofbit
//ctrl + z
//������ �� �������� �ǹ��Ѵ�.

//failbit 
//cin �Է� �޴� ���
//int �� �Է� �޾ƾ��ϴµ� char���� �Է� �޴� ���
//1�� �ȴ�.

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
//				cout << "eof �Է� ���α׷� ����" << endl;
//				return 0;
//			}
//			cout << cin.rdstate() << endl;
//			cin.clear();
//			cin.ignore(100, '\n');
//			cout << "���� �ƴ�" << endl;	
//		}
//
//		else {
//			cout << "������" << endl;
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
//stream�� ū �ջ��� ���� �� badbit�� 0->1�� ���õȴ�.
//�ڵ������� �ذ����� ����

//goodbit
//eofbit, failbit and badbit�� 0�̸� good ����
//cin.good(); �� ���� ���� Ȯ�� ����

//#include<iostream>
//using namespace std;
//
//int main() {
//
//	int a;
//	cin >> a;
//	if (cin.good()) {
//		cout << "���� ����" << endl;
//
//	}
//	else {
//		cout << "������ ����" << endl;
//	}
//
//	return 0;
//}


//rdstate
//goobit, eofbit, failbit, badbit ���¸� 0~7 ���� ���ڸ� ���� ��� ������
//�ڵ� ��
//enum io_state {
//	goodbit = 0x00,
//	eofbit = 0x01,
//	failbit = 0x02,
//	badbit = 0x04
//};


//bad fail eof
// 0    1   1 


//clear 
//Ư�� bit�� ���� 1�� �������ش�. �� ��� ������ bit�� clear�Ѵ�
//cin.clear()
//:��� flag�� clear�� �Ŀ� goodbit�� 1�� �������ش�.
//cin.clear(ios::failbit)
//��� flag�� clear�� �Ŀ� failbit�� 1�� ����

//cin.setstate(ios::failbit)
//������ �ʱ�ȭ ���ϰ� ������ bit�� 1�� ����

#include<iostream>
using namespace std;

int main() {
	int a;
	while (true) {
		cin >> a;
		/*cin.setstate(ios::goodbit);   */     //a�� char���� ������ �� ������ failbit�� 1�� ���õǾ��ֱ� ������ cin�� ���л��°� �ȴ�.
		//cin.clear();
		cin.ignore(100, '\n');
		if (cin.fail()) {
			cout << "���� ����"<<endl;
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
//	cin >> a;                    //char�� �Է��ϰ�
//
//	/*cin.clear();*/
//	cin.setstate(ios::badbit);   //badbit 1�� �����ϸ� 
//	
//
//	cout << cin.rdstate();       //rdstate���� badbit �κ� 4 failbit  2 ���ؼ� 6 
//
//	return 0;
//}

//stream error states
//!  ������     ex) if(!cin)
//badbit or failbit�� 1�� �� true�� �����Ѵ�. 
//void* 
//badbit or failbit�� 1�� �� false�� �����Ѵ�.