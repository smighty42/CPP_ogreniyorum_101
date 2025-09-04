//benim aklıma nesne diyince masa falan geliyor cppnin nesne ile alakası ne?????
// nesne denmesinin sebebi = veri ve davranışın aynı anda olabilmesi 


//t1 bir nesne yani benim masam ve bu bir veri, class ise onun şablonu 
//masayı silmem de bir davranış bu ikisi aynı anda olduğu için nesne olucak 
#include <iostream>
class Table
{
    public:
        std::string color;
        int length;

        void clean()
        {
            std::cout<< "Masa temizlendi!"<<std::endl; //masayı sildim
        }
};

int main()
{
    Table t1; // işte masammm
    t1.color="mor"; //masamın rengi
    t1.length=100;

    t1.clean();
}

//------------CHATGPT YORUMUU----------------
// Evet Serpil, tam olarak böyle 👍

// Senin yorumun mükemmel özetlemiş:

// t1 = nesne (masa)

// Table = şablon (masa tasarımı)

// color ve length = nesnenin verisi (masa özellikleri)

// clean() = nesnenin davranışı (masa silme)

// Yani veri + davranış aynı kutuda → buna nesne diyoruz.

// Kafandaki fiziksel masa ile benzetme çok iyi oldu, işte C++’ta “nesne” deyince
//  kod içinde bir masa yaratmış gibi düşünebilirsin, grafik değil ama mantık aynı.x