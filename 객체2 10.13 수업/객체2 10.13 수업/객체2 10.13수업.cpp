//������
//�����ϰ� �Լ��� ȣ���ߴµ� ����� �ٸ��� ������ ��


#include<iostream>
using namespace std;

class People {
private:
public:
	void sleep() { cout << "�⺻ 7�ð�" << endl; }
	virtual void work() { cout << "��" << endl; }    //���� �Լ� ��� �κ�
};

class Student: public People {
private:
public:
	void play() { cout << "����" << endl; }
	void work() { cout << "����" << endl; }
	void sleep() { cout << "���� 2��" << endl; }
};

class Singer: public People {
private:
public:
	void work() { cout << "�뷡" << endl; }
};

class Artist : public People {
private:
public:
	void work() { cout << "�̼�" << endl; }
};

int main() {
	Artist a;
	People* art{&a};
	art->work();
	People* inha = new Student;        
	//upcasting: ���̽� �����Ϳ� �Ļ� ��ü�� �����ϴ� ��, ��� ������ �� ���

	/*inha->play();*/
	//�Լ� ȣ�� �� �� ���̽� Ŭ������ �ٸ� �̸����� ����� �Ļ� Ŭ���� ����� ��� �Ұ���

	inha->sleep();
	//���̽� Ŭ������ ��� �Լ��� �����Ӱ� ��� ����
	//inha�� ���̽� ������ Ÿ���� ����(handle�̶�� �Ѵ�.)�̱� ������

	People* sing = new Singer;

	//Singer* iu = new People;     �Ļ� �����Ϳ� ���̽� ��ü�� �����ϴ� ��� ���� �߻�

	inha->work();      //���̽� Ŭ������ ������ �̸����� ����� �Լ��� �����Լ��� �� �Ļ� Ŭ������ �Լ� ��� ���� 

	//�ݺ����� ����ϴ� ���
	
	People* arr[2];
	arr[0] = new Student;
	arr[1] = new Singer;
	
	for (People* ptr : arr) {      //range ��� for��                                                 
		                           //arr ������ ���� �ݺ����� ����ʿ� ���� ptr�� ������� �ο���
		                           //arr�� People* Ÿ���̹Ƿ� ptr�� �Ȱ��� Ÿ������ ����
		ptr->work();              
	}                              
	

	delete inha;
	delete sing;
	delete[] arr;
	return 0;
}