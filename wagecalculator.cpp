//#include <iostream>
//#include <iomanip>
//using namespace std;
//int main()
//{
//    /* declare program variables here（在这里声明程序变量） */
//    int hours;
//    long int salary;
//    double hourly_rate;
//    cout << "Enter hours worked (-1 to end): "
//        << setiosflags(ios::fixed | ios::showpoint);
//    cin >> hours;
//    cout << "Salary is $" << setprecision(2);
//    cin >> salary;
//    cout << "Enter the hourly rate:";
//    cin >> hourly_rate;   //提示和输入每小时的费率
//    if(hours<=40){              //确定工作时间是否小于或等于40
//        cout << "Your basic salary is :$";
//        cout << salary << endl;
//    }
//    else {
//        salary = salary + hours * hourly_rate;   //工资=基数+加班费
//        cout << "Your salary is :$";
//        cout << salary << endl;
//    }
//
//    return 0;
//}