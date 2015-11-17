#include <iostream>

using namespace std;

class Animal {
  public:
  virtual string express_itself() = 0;
};

class Lion : public Animal {
  public:
  string express_itself(){
    return "ROOAARRRR!";
  }
};

void use(Animal * const a){
  cout << "Animal is expressing itself: " << a->express_itself() << endl;
}

// This does not work with abstract types
//void use(Animal a){
//  cout << "Animal is expressing itself: " << a.express_itself() << endl;
//}

int main(){
  Lion simba;
  use(&simba);
  return 0;
}
