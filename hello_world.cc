#include <iostream>

class HelloWorldOnShutdown {
  public:
    HelloWorldOnShutdown() { }
    ~HelloWorldOnShutdown() {
      std::cout << "Hello World!\n";
    }
};

int main(int argc, char* argv[]) {
  HelloWorldOnShutdown hw;
  return 0;
}
