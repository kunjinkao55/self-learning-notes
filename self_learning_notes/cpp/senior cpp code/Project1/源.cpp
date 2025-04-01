#include "date.h"
#include <stdexcept>
#include <iostream>
using namespace std;
bool big(int m) {
    return ((m > 0 && m < 8 && m % 2 == 1) || (m < 13 && m > 7 && m % 2 == 0)) && (m != 2);
}
// 构造函数
Date::Date(int y, int m, int d) : year(y), month(m), day(d) {
    if (!isValidDate()) {
        //throw invalid_argument("Invalid date input.");
        //这个不用抛出错误
        //因为我们希望看到某些异常日期测试用例对应的“-1”输出
    }
}

// 判断日期是否合法
bool Date::isValidDate() const {
    //TODO
    //这个函数需要被其他函数使用
    //未发生的日期也属于正常输入
    bool m1 = this->month > 0 && this->month < 13;
    bool y1 = this->year > 0;
    bool d1 = this->day > 0;
    bool d2 = 1;
    int m = this->month;
    int y = this->year;
    int d = this->day;
    if (m == 2) {
        d2 = d < 29 || (this->isLeapYear(y) && d < 30);
    }
    else if (m < 8) {
        if (m % 2 == 1) {
            d2 = d < 32;
        }
        else {
            d2 = d < 31;
        }
    }
    else {
        if (m % 2 == 1) {
            d2 = d < 31;
        }
        else {
            d2 = d < 32;
        }
    }
    return (m1 && d1 && d2 && y1);
}

// 判断是否是闰年
bool Date::isLeapYear(int y) const {
    return (y % 4 == 0 && y % 100 != 0) || (y % 400 == 0);
}

// 返回该月的天数
int Date::daysInMonth(int m, int y) const {
    //TODO
    //错误返回0

    if (this->isValidDate()) {
        if (this->isLeapYear(y))
        {
            if (m == 2) { return 29; }
            else if (big(m)) { return 31; }
            else { return 30; }
        }
        else
        {
            if (m == 2) { return 28; }
            else if (big(m)) { return 31; }
            else { return 30; }
        }
    }
    return 0;
}

// 计算从公元1年1月1日到当前日期的天数
int Date::daysSinceEpoch() const {
    int totalDays = 0;
    if (this->isValidDate()) {
        totalDays += this->day - 1;
        int y = this->year;
        int m = this->month - 1;
        for (; m > 0; m--) {
            totalDays += Date::daysInMonth(m, y);
        }
        y--;
        while (y > 0) {
            m = 12;
            while (m > 0) {
                totalDays += this->daysInMonth(m, y);
                m--;
            }
            y--;
        }
    }

    else { totalDays = -1; }
    return totalDays;
    //如果非法，返回-1
}

// 计算从某个日期到另一个日期的天数差
int Date::calculateDaysBetween(const Date& other) const {
    if (this->isValidDate() && other.isValidDate())
    {
        cout << daysSinceEpoch() << other.daysSinceEpoch();
        int ans = this->daysSinceEpoch() - other.daysSinceEpoch();
        if (ans < 0) { ans *= -1; }
        return ans;
    }
    else
        return -1;
}

// 显示日期
void Date::display() const {
    //TODO：按照yyyy-mm-dd格式输出,加一个换行
    //
    //如：cout<<2019-06-01<<endl;

    if (this->isValidDate()) {
        cout << this->year << '-';
        printf("%02d", this->month);
        cout << '-';
        printf("%02d", this->day);
        cout << endl;
    }
    else {
        cout << -1<<endl;
    }
}

int main() {
    try {
        int y1, m1, d1, y2, m2, d2;
        // 输入第一个日期
        cin >> y1 >> m1 >> d1;
        // 输入第二个日期
        cin >> y2 >> m2 >> d2;
        // 创建两个 Date 对象
        Date date1(y1, m1, d1);
        Date date2(y2, m2, d2);
        // 显示两个日期
        date1.display();
        date2.display();
        // 计算并输出日期差
        int diff = date1.calculateDaysBetween(date2);
        cout << diff << endl;
    }
    catch (const invalid_argument& e) {
        cout << e.what() << endl;
    }
    return 0;
}