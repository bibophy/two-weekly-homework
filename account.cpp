//#include <iostream>
//using namespace std;
//#include <iomanip>
//using std::setiosflags;
//int main()
//{
//    int accountNumber;
//    double balance, charges, credits, limit;   //余额，费用，信用，限度
//
//    cout << "Enter account number (-1 to end): "
//        << setiosflags(ios::fixed | ios::showpoint);
//    cin >> accountNumber;
//    /* write code to read the customer account number here */
//
//    /* begin loop here */ 
//    while(accountNumber != -1)
//    {
//        cout << "Enter the balance:";
//        cin >> balance;
//        cout << "Enter the charges:";
//        cin >> charges;
//        cout << "Enter the credits:";
//        cin >> credits;
//        cout << "Enter the credites limit:";
//        cin >> limit;
//        balance = balance + charges - credits;
//
//        if (balance > limit) {
//            cout << "account:" << accountNumber << endl;
//            cout << "limit:" << limit << endl;
//            cout << "balance:" << balance << endl;
//            cout << "credit limit exceeded" << endl;
//        }
//    }    // end while loop
//    cout << endl;  // ensure all output is displayed
//    return 0;
//}