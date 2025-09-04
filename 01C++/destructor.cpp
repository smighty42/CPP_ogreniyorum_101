#include <iostream>

class Zombie
{
    public:
        std::string name;
        Zombie(std::string n);
        ~Zombie();
};
Zombie::~Zombie()//destructor
{
    std::cout << name << "yok edildi! "<<std::endl;
}

Zombie::Zombie(std::string n)//cunstructor
{
    name =n;
    std::cout << name << "dogru!"<<std::endl;
}

int main()
{
    Zombie z("Ali"); // bir zombie nesnesi oluşturduk constructor da çalıştı //stack
    std::cout << z.name << std::endl;//ekrana yazdır
}//burada destructor çalışıyor ,z yok ediliyor