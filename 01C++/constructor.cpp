#include <iostream>

class Zombie
{
    public:
        std::string name;
        Zombie(std::string n);
};

Zombie::Zombie(std::string n)
{
    name =n;
    std::cout << name << "dogru!"<<std::endl;
}

int main()
{
    Zombie z("Ali"); // bir zombie nesnesi oluşturduk constructor da çalıştı 
    std::cout << z.name << std::endl;//ekrana yazdır
}