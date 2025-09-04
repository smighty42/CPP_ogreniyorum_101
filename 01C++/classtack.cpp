#include <iostream>

class Zombie
{
    public:
        std::string name;
};

int main()
{
    Zombie z; // bir zombie nesnesi oluşturduk
    z.name="Ali"; //name değişkenini atayalım
    std::cout << z.name << std::endl;//ekrana yazdır
}


// z nesnem stackte oluştu (yani bu ne demek otomatik yok olacak demek)
// z.name direkt kullanılabilir 