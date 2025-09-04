#include <iostream>

class BankAccount 
{
        private:
        int balance=30; //burada parayı saklıyoruz dışarıdan direk ulaşamazsın 

        public:
        void setBalance(int b) // Burada mainden içeriği değiştirmek için kullanıcam 
        {                      // yoksa acc.balance=20; yapsam da değişmez 
            balance =b;
        }
        void deposit(int amount)
        {
            balance+=amount; //para yatırma
        }
        void showBalance()
        {
            std::cout<<"Bakiyen:"<<balance<<std::endl; // parayı gösterme
        }
};



int main()
{
    BankAccount acc;
    acc.setBalance(10); //---->>  ac.Balance yapsan olmaz  
    acc.deposit(50);//50 tl yatır
    acc.showBalance(); //bakiyem 60 olucak
}