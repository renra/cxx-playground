#include <iostream>

namespace foo {
  void say(){
    std::cout << "Foo says" << std::endl;
  }
}

namespace bar {
  void say(){
    std::cout << "Bar says" << std::endl;
  }
}

using namespace foo;
using namespace bar;  // No problem importing both namespaces

int main(){
  // Error - call to say is ambiguous
  //say();
  foo::say();
  return 0;
}
