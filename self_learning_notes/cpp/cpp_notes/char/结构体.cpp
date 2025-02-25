#include <iostream>
#include <malloc.h>
using namespace std;

struct student {//结构变量有结构作用域
	int num;
	char name[10];
	int sex;
	//说明次序会影响储存安排
	void helper() {
		cout << endl<<"这是student类的一个函数";
	}
	//内存安排：占用一块连续不均分的内存，先声明的结构内存一般先分配内存
};
struct Example {
	char a;   // 1 字节
	int b;    // 4 字节，需从 4 字节对齐的地址开始
	char c;   // 1 字节
	//内存对齐：| a |填充|填充|填充| b | c |填充|填充|填充|  —— 提高存储效率

};

void gotosch(student A) {
//结构体作为参数传递
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
	student early = latee;//相同结构可以相互赋值
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