////勾股定理的实现
//#include <iostream>
//
//using std::cout;
//using std::endl;
//
//int main()
//{
//    int count = 0;
//    long hyptSquared, sidesSquared;
//    for (int side1 = 1; side1 <= 20;side1++) {
//
//        for (int side2 = 1; side2 <= 20;side2++) {
//
//            for (int hypt = 1; hypt <= 20;hypt++) {
//                hyptSquared = hypt * hypt;
//                /* calculate the sum of the sides squared */
//                sidesSquared = side1 * side1 + side2 * side2;
//                if (hyptSquared == sidesSquared) {
//                    cout << side1 << "\t" << side2 << "\t"
//                        << hypt << "\n";
//                    ++count;
//                }
//            }
//        }
//    }
//
//    cout << "A total of " << count << " triples were found."
//        << endl;
//
//    return 0;
//}