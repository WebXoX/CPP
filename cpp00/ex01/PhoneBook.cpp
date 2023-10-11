#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
    index = 0;
}
int PhoneBook::ExistingUserCheck(std::string fname, std::string lname, std::string nname)
{
    for (size_t i = 0; i < PhoneBook::index; i++)
    {
        if( PhoneBook::peps[i].GetFname().compare(fname) == 0 &&  PhoneBook::peps[i].GetLname().compare(lname) == 0 &&  PhoneBook::peps[i].GetNname().compare(nname) == 0 )
        {
            std::cout << RED << "||||||<<<<<<<<<<<<<<USER EXISTS>>>>>>>>>>>>>>>||||||\n"<< DEFAULT << std::endl;
            return (0);
        }
    }
    return (1);
}
void PhoneBook::AddContact(std::string fname, std::string lname, std::string nname, std::string number, std::string secret)
{   
    std::system("clear");
    if (ExistingUserCheck(fname,lname,nname)==1)
    {
        if (PhoneBook::index == 8)
        {
            PhoneBook::peps[0].Contact_rem();
            PhoneBook::peps[PhoneBook::index].Contact_init(1,fname,lname,nname,number, secret);
            PhoneBook::index = 7;
        }
        else
        {
            PhoneBook::peps[PhoneBook::index].Contact_init(index+1,fname,lname,nname,number, secret);
        }
            PhoneBook::index++;
    }
}
void PhoneBook::print_space(int len1,int len2)
{
    if(len1< 10)
    {
        std::cout << std::setw(len2 - len1);
    }
    else
    {
        std::cout << std::setw(abs(3));
    }
}

void PhoneBook::print_word(std::string str)
{
    for (size_t i = 0; i < 9 && str[i] != '\0'; i++)
    {
        std::cout << str[i];
    }
    if (str.length() > 10)
        std::cout << ".";
}

void PhoneBook::print()
{
    if (! PhoneBook::peps[0].GetFname().empty())
    {
                                                    
        std::cout << BLUE << "     _____ _                  _____         _ "<< DEFAULT << std::endl;  
        std::cout << BLUE  << "    |  _  | |_ ___ ___ ___   | __  |___ ___| |_ "<< DEFAULT << std::endl;
        std::cout << BLUE  << "    |   __|   | . |   | -_|  | __ -| . | . | '_|"<< DEFAULT << std::endl;
        std::cout << BLUE  << "    |__|  |_|_|___|_|_|___|  |_____|___|___|_,_|"<< DEFAULT << std::endl;
        std::cout  << GREEN << "||||||*******************************************|||||||"<< DEFAULT<< std::endl;
        std::cout << "     | ";
        std::cout << RED << "No." << DEFAULT;
        std::cout << "| ";
        std::cout << RED  << "First Name." << DEFAULT;
        std::cout << "|  ";
        std::cout << RED    <<  "Last Name." << DEFAULT;
        std::cout << "|  ";
        std::cout << RED << "Nick Name." << DEFAULT;
        std::cout << "|  " << std::endl;
        for (size_t i = 0;  i < PhoneBook::index ; i++)
        {
            std::cout << WHITE << "     |  ";
            std::cout <<  PhoneBook::peps[i].GetIndex();
            std::cout << ".|";
            print_space( PhoneBook::peps[i].GetFname().length(),13);
            print_word(  PhoneBook::peps[i].GetFname());
            std::cout << "|";
            print_space( PhoneBook::peps[i].GetLname().length(),13);
            print_word(  PhoneBook::peps[i].GetLname());
            std::cout << "|";
            print_space( PhoneBook::peps[i].GetNname().length(),13);
            print_word( PhoneBook::peps[i].GetNname());
            std::cout << "|  " << DEFAULT << std::endl;
        }
    std::cout << GREEN  << "||||||*******************************************|||||||"<< std::endl;
    std::cout << "*******************************************************" << DEFAULT << std::endl;
}
}
void PhoneBook::searchReturn()
{
    int i;
    print();
    if (! PhoneBook::peps[0].GetFname().empty())
    {
        std::cout <<WHITE << "enter Index for more info on the contact" << DEFAULT << std::endl;
        std::cin >> std::ws;
        std::cin >> i;
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        if(i < 1  || i > this->index)
            std::cout << RED << "Plzzz enter a valid index or terminate me!!" <<DEFAULT << std::endl;
        else
        {
            std::system("clear");
            std::cout << GREEN << "****************** CONTACT ********************" << DEFAULT << std::endl;
            std::cout << WHITE << "       Name:              " <<  PhoneBook::peps[i - 1].GetFname()  << std::endl;
            std::cout << "       Last Name:         " <<  PhoneBook::peps[i - 1].GetLname()  << std::endl;
            std::cout << "       Nick Name:         " <<  PhoneBook::peps[i - 1].GetNname()  << std::endl;
            std::cout << "       Phone Number:      " <<  PhoneBook::peps[i - 1].GetNumber()  << std::endl;
            std::cout << "       Dark Secret:       " <<  PhoneBook::peps[i - 1].GetSecret() << DEFAULT  << std::endl;
            std::cout << GREEN << "***********************************************" << DEFAULT << std::endl;

        }    
    }
}
void PhoneBook::exit_empty()
{
    for (size_t i = 0; i < 8; i++)
    {
            PhoneBook::peps[i].Contact_rem();
    }
}