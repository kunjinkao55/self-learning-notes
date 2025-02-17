//#include <iostream>
//using namespace std;
//int main()
//{
//    enum Day {
//        SUNDAY = -1,
//        MONDAY = 3,
//        TUESDAY,//4
//        WEDNESDAY = 2,
//        THURSDAY,//3
//        FRIDAY,//4
//        SATURDAY//5
//    } D1,D2;//可以同时定义枚举类型和枚举变量
//
//    enum{a,s,d,f,g,h} m1=a;//无名枚举类型
//
//    Day today = SUNDAY;//today=-1，可以把枚举值赋给同类型枚举变量
//    Day tomo;
//    int i; i = SUNDAY;// 可以
//    WEDNESDAY = 3;//Error ,枚举值不可改变
//    D1=today;//相同枚举类型变量之间可以相互赋值
//    D2 = m1;//error,不同类型之间不互通
//    tomo = (Day)3;
//    //枚举值名字输出：switch语句输出字符串
//
//}