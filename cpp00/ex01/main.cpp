
#include "PhoneBook.hpp"

bool validNumb(std::string number)
{
    for (size_t i = 0; i < number.length(); i++)
    {
        if (!(number[i]>= '0' && number[i] <= '9'))
            return false;
    }
    return true;
}
int main (){
    PhoneBook   book;
    std::string order;
    std::string fname;
    std::string lname;
    std::string nname;
    std::string number;
    std::string secret;
   for (size_t i = 0; i != -1; i++)
   {
        std::cout   << WHITE << "Your order is my command"<< std::endl;
        std::getline(std::cin >> std::ws, order);
        if (order.compare("ADD") == 0)
        {
            std::cout << "Enter Contact's first name"<< std::endl;
            std::getline(std::cin >> std::ws, fname);
            std::cout << "Enter Contact's last name"<< std::endl;
            std::getline(std::cin >> std::ws, lname);
            std::cout << "Enter Contact's nick name"<< std::endl;
            std::getline(std::cin >> std::ws, nname);
            do
            {
                std::cout << "Enter Contact's Phone Number"<< std::endl;
                number.clear();
                std::getline(std::cin >> std::ws, number) ;
                if(number.empty())
                    break;
                if  (number.length() < 6 || number.length() > 10 || validNumb(number) == false)
                    std::cout << "Your Phone number seems to be invaild, try again"<< std::endl;

            } while (number.length() < 6 || number.length() > 10 || validNumb(number) == false);

                std::cout << "Enter Contact's Dark secret"<< std::endl;
                std::getline(std::cin >>std::ws, secret) ;
                book.AddContact(fname,lname,nname,number,secret);
                book.print();
        }
        else if (order.compare("SEARCH") == 0 )
        {
            std::system("clear");
            book.searchReturn();
            std::cout << DEFAULT ;
        }
        else if (order.compare("EXIT") == 0 || order.empty())
        {
            std::system("clear");
            book.exit_empty();
            std::cout << RED << "Exiting Phonebook"<< DEFAULT << std::endl;
            break;
        }
        else 
        {
            std::cout << WHITE << "Your order is unclear; These are the orders I accept ( ADD , SEARCH, EXIT)" << DEFAULT << std::endl;
        }
        order.clear();
    }
}