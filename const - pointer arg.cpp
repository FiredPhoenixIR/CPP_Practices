//
//void doSomethingAndModifyLocally(const MyInt* const foo) {
//    // ...
//    foo->increment(); // error: you cannot change the pointed value
//    foo = new MyInt{}; // error: assignment of read-only parameter 'foo'
//    // ...
//}
//
//void doSomethingAndModifyLocally(MyInt* const foo) {
//    // ...
//    foo->increment(); // OK
//    foo = new MyInt{}; // error: assignment of read-only parameter 'foo'
//    // ...
//}
//
//void doSomethingAndModifyLocally(const MyInt* foo) {
//    // ...
//    foo->increment(); // error: you cannot change the pointed value
//    // ...
//}
//
//// The const-qualification of a parameter has an effect in the function definition, 
//// not in declarations.