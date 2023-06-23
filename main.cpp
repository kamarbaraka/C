#include <iostream>
#include <utility>

using std::string;

class Person{
private:
    string name;
    int age;
public:
    Person(string name, int age){
        this->name = std::move(name);
        this->age = age;
    };
public:
    string details(){
        return this->name;
    };
};

int main() {
    auto person = new Person("kamar", 23);
    std::cout << "Hello, World! " << person->details() << std::endl;
    return 0;
}
