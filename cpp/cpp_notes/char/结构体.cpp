#include <iostream>
#include <malloc.h>
using namespace std;

struct student {//�ṹ�����нṹ������
	int num;
	char name[10];
	int sex;
	//˵�������Ӱ�촢�氲��
	void helper() {
		cout << endl<<"����student���һ������";
	}
	//�ڴ氲�ţ�ռ��һ�����������ֵ��ڴ棬�������Ľṹ�ڴ�һ���ȷ����ڴ�
};
struct Example {
	char a;   // 1 �ֽ�
	int b;    // 4 �ֽڣ���� 4 �ֽڶ���ĵ�ַ��ʼ
	char c;   // 1 �ֽ�
	//�ڴ���룺| a |���|���|���| b | c |���|���|���|  ���� ��ߴ洢Ч��

};

void gotosch(student A) {
//�ṹ����Ϊ��������
	return;
}

int main()
{
	printf("%03d", (int)sizeof(Example));//12
	student latee;
	strcpy_s(latee.name,"dust");
	latee.num = 55;
	latee.sex = 0;
	latee.helper();
	cout << sizeof(latee)<<"A"<<latee.name;
	student early = latee;//��ͬ�ṹ�����໥��ֵ
	cout << sizeof(latee) << "B" << latee.name;
	student** school = (student**)malloc(sizeof(student*) * 10);
	cout << sizeof(latee) << "C" << latee.name;
	for (int i = 0; i < 10; i++)//school[i]=clasi;
	{
		if (school) {
			school[i] = (student*)malloc(sizeof(student) * 30);
		}
	}
	cout << sizeof(latee) << "D" << latee.name;
	student early_copy;
	if (school && school[0])
	{
		school[0][0] = early;
		early_copy = school[0][0];
	}
	cout << sizeof(early_copy) << "E" << early_copy.name;
}