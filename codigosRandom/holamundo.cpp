 #include <iostream> 
 
 using std::cout; 
 using std::endl; 
 
 class A { 
 public: 
 
 void p(){ 
 cout << "A::p\n" ; 
 } 
 virtual void q(){ 
 cout << "A::q\n"; 
 } 
 void f(){ 
 p(); 
 q(); 
 } 
 }; 
 
 class B : public A{ 
 public: 
 
 void p(){ 
 cout << "B::p\n"; 
 } 
 
 void q(){ 
 cout << "B::q\n" ; 
 } 
 }; 
 
 typedef A* Aptr;; 
 int main(int, char**) { 
 
 Aptr* arr = new Aptr[3]; 
 
 arr[0] = new A; 
 arr[1] = new B; 
 arr[2] = new B; 
 
 for(int i = 0; i < 3; i++){ 
 arr[i]->f(); 
 } 
 
 A a; 
 a.f(); 
 B b; 
 b.f(); 
 a = b; 
 a.f(); 
 return 0; 
 }