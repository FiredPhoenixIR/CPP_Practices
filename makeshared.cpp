//#include <iostream>
//#include <memory>
//
//// make shared ensures no memory leak but make unique not and better to use unique_ptr
//
///*
//std::enable_shared_from_this allows an object t that is currently managed by a std::shared_ptr named pt 
//to safely generate additional std::shared_ptr instances pt1, pt2, ... that all share ownership of t with pt.
//
//Publicly inheriting from std::enable_shared_from_this<T> provides the type T with a member function shared_from_this. 
//If an object t of type T is managed by a std::shared_ptr<T> named pt, 
//then calling T::shared_from_this will return a new std::shared_ptr<T> that shares ownership of t with pt.
//*/
//
//class ShareMe : public std::enable_shared_from_this<ShareMe> {
//public:
//    std::shared_ptr<ShareMe> getShared() {
//        return shared_from_this();
//    }
//};
//
//int main() {
//
//    std::cout << std::endl;
//
//    std::shared_ptr<ShareMe> shareMe(new ShareMe);
//    std::shared_ptr<ShareMe> shareMe1 = shareMe->getShared();
//
//    {
//        auto shareMe2(shareMe1);
//        std::cout << "shareMe.use_count(): " << shareMe.use_count() << std::endl;
//    }
//    std::cout << "shareMe.use_count(): " << shareMe.use_count() << std::endl;
//
//    shareMe1.reset();
//
//    std::cout << "shareMe.use_count(): " << shareMe.use_count() << std::endl;
//
//    std::cout << std::endl;
//
//}