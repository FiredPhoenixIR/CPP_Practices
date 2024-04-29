//
//#include <iostream>
//#include <algorithm>
//
//using std::cout;
//
//int main() {
//    cout << "std::min(2011, 2014):\t\t\t ";
//    cout << std::min(2011, 2014) << "\n";                           // 2011
//
//    cout << "std::min({3, 1, 2011, 2014, -5}):\t";
//    cout << std::min({ 3, 1, 2011, 2014, -5 }) << "\n";               // -5
//
//    cout << "std::min(-10, -5, [](...) {...}):\t\t";
//    cout << std::min(-10, -5) << std::endl;//, [](int a, int b))
//    //{ return std::abs(a) < std::abs(b); })<<"\n\n"; // -5
//
//    std::pair<int, int> pairInt = std::minmax(2011, 2014);
//    auto pairSeq = std::minmax({ 3, 1, 2011, 2014, -5 });
//    auto pairAbs = std::minmax({ 3, 1, 2011, 2014, -5 }, [](int a, int b)
//        { return std::abs(a) < std::abs(b); });
//
//    cout << "pairInt.first, pairInt.second:\t\t";
//    cout << pairInt.first << ", " << pairInt.second << "\n"; // 2011,2014
//
//    cout << "pairSeq.first, pairSeq.second:\t\t";
//    cout << pairSeq.first << ", " << pairSeq.second << "\n";  // -5,2014
//
//    cout << "pairAbs.first, pairAbs.second:\t\t ";
//    cout << pairAbs.first << ", " << pairAbs.second << "\n";  // 1,2014
//
//    return 0;
//}