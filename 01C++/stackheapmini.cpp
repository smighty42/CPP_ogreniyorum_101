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
    //stack
    Zombie z1("Ali"); // bir zombie nesnesi oluşturduk constructor da çalıştı //stack
    std::cout << z1.name << std::endl;//ekrana yazdır

    //heap
    Zombie* z2=new Zombie("HeapZombie");
    //yok etmek için delete kullan 
}//burada destructor çalışıyor ,z yok ediliyor


//z1 stackte, scope bittiğinde otomatik  yok olur 

//z2 heapte delete edilmezse ramde kalır (memory leak)
        //------DELETE VARSA------
// ==2667359== HEAP SUMMARY:
// ==2667359==     in use at exit: 0 bytes in 0 blocks
// ==2667359==   total heap usage: 3 allocs, 3 frees, 73,760 bytes allocated
// ==2667359== 
// ==2667359== All heap blocks were freed -- no leaks are possible
// ==2667359== 
// ==2667359== For lists of detected and suppressed errors, rerun with: -s
// ==2667359== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)


        //--------DELETE YOKSA----------
// ==2667779== HEAP SUMMARY:
// ==2667779==     in use at exit: 32 bytes in 1 blocks
// ==2667779==   total heap usage: 3 allocs, 2 frees, 73,760 bytes allocated
// ==2667779== 
// ==2667779== LEAK SUMMARY:
// ==2667779==    definitely lost: 32 bytes in 1 blocks
// ==2667779==    indirectly lost: 0 bytes in 0 blocks
// ==2667779==      possibly lost: 0 bytes in 0 blocks
// ==2667779==    still reachable: 0 bytes in 0 blocks
// ==2667779==         suppressed: 0 bytes in 0 blocks
// ==2667779== Rerun with --leak-check=full to see details of leaked memory
// ==2667779== 
// ==2667779== For lists of detected and suppressed errors, rerun with: -s
// ==2667779== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)