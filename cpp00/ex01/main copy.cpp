// #include <iostream>
// #include <string>
// #include <stdlib.h>
// #include <iomanip>
// #include <limits>
// class Contact {

//     private:
//     int         index;
//     std::string fname;
//     std::string lname;
//     std::string nname;
//     std::string number;
//     std::string secret;


//     public:
//     void Contact_rem()
//     {
//         this->index = 0;
//         this->fname.clear();
//         this->lname.clear();
//         this->nname.clear();
//         this->number.clear();
//         this->secret.clear();
//     }
//     void Contact_init(int index,std::string fname, std::string lname, std::string nname,std::string number,std::string secret )
//     {
//         this->index = index;
//         this->fname = fname;
//         this->lname = lname;
//         this->nname = nname;
//         this->number = number;
//         this->secret = secret;
//     }

//     int GetIndex()
//     {
//         return index;
//     }
    
//     std::string GetFname()
//     {
//         return fname;
//     }
    
//     std::string GetLname()
//     {
//         return lname;
//     }
        
//     std::string GetNname()
//     {
//         return nname;
//     }
//     std::string GetNumber()
//     {
//         return number;
//     }
//     std::string GetSecret()
//     {
//         return secret;
//     }
// };

// class PhoneBook
// {
//     private:
//     int index;
//     Contact peps[8];
    
//     public:
//     PhoneBook()
//     {
//         index = 1;
//     }
//     int ExistingUserCheck(std::string fname, std::string lname, std::string nname)
//     {
//         for (size_t i = 0; peps[i].GetFname().empty() == 0; i++)
//         {
//             if(peps[i].GetFname().compare(fname) == 0 && peps[i].GetLname().compare(lname) == 0 && peps[i].GetNname().compare(nname) == 0 )
//             {
//                 std::cout << "||||||<<<<<<<<<<<<<<USER EXISTS>>>>>>>>>>>>>>>||||||\n" << std::endl;
//                 return (0);
//             }
//         }
//         return (1);
//     }
//     void AddContact(std::string fname, std::string lname, std::string nname, std::string number, std::string secret)
//     {   
//         std::system("clear");
//         if (ExistingUserCheck(fname,lname,nname)==1)
//         {
//             if (index == 9)
//             {
//                 peps[7].Contact_rem();
//                 index = 8;
//             }
//             peps[this->index - 1].Contact_init(index,fname,lname,nname,number, secret);
//             this->index++;
//         }
//     }
//     void print_space(int len1,int len2)
//     {
//         if(len1< 10)
//         {
//             std::cout << std::setw(len2 - len1);
//         }
//         else
//         {
//             std::cout << std::setw(len2 - 10);
//         }
//     }
    
//     void print_word(std::string str)
//     {
//         for (size_t i = 0; i < 9 && str[i] != '\0'; i++)
//         {
//             std::cout << str[i];
//         }
//         if (str.length() > 10)
//             std::cout << ".";
//     }

//     void print()
//     {
//         if (!peps[0].GetFname().empty())
//         {
//             std::cout << "****************************************************" << std::endl;
//             std::cout << "||||||***************************************|||||||"<< std::endl;
//             std::cout << "     | ";
//             std::cout << "No.";
//             std::cout << "| ";
//             std::cout << "First Name.";
//             std::cout << "| ";
//             std::cout << "Last Name.";
//             std::cout << "| ";
//             std::cout << "Nick Name.";
//             std::cout << "|  " << std::endl;
//             for (size_t i = 0; peps[i].GetFname().empty() == 0; i++)
//             {
//                 std::cout << "     |  ";
//                 std::cout << peps[i].GetIndex();
//                 std::cout << ".|";
//                 print_space(peps[i].GetFname().length(),13);
//                 print_word( peps[i].GetFname());
//                 std::cout << "|";
//                 print_space(peps[i].GetLname().length(),12);
//                 print_word( peps[i].GetLname());
//                 std::cout << "|";
//                 print_space(peps[i].GetNname().length(),12);
//                 print_word(peps[i].GetNname());
//                 std::cout << "|  " << std::endl;
//             }
//             std::cout << "||||||***************************************|||||||"<< std::endl;
//             std::cout << "****************************************************" << std::endl;
//         }
//     }
//     void searchReturn()
//     {
//         int index;
//         print();
//         if (!peps[0].GetFname().empty())
//         {
//             std::cout << "enter Index for more info on the contact" << std::endl;
//             std::cin >> std::ws;
//             std::cin >> index;
//             // std::getline(std::cin,NULL);
//              std::cin.clear();
//               std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
//             // std::cin >> std::ws;
//             if(index < 1  || index > this->index)
//                 std::cout << "Plzzz enter a valid index or terminate my program" << std::endl;
//             else
//             {
//                 std::cout << "Name:         " << peps[index - 1].GetFname()  << std::endl;
//                 std::cout << "Last Name:    " << peps[index - 1].GetLname()  << std::endl;
//                 std::cout << "Nick Name:    " << peps[index - 1].GetNname()  << std::endl;
//                 std::cout << "Phone Number: " << peps[index - 1].GetNumber()  << std::endl;
//                 std::cout << "Dark Secret:  " << peps[index - 1].GetSecret()  << std::endl;
//             }    
//         }
//     }
//     void exit_empty()
//     {
//         for (size_t i = 0; i < 8; i++)
//         {
//             peps[i].Contact_rem();
//         }
//     }
// };
// bool validNumb(std::string number)
// {
//     for (size_t i = 0; i < number.length(); i++)
//     {
//         if (!(number[i]>= '0' && number[i] <= '9'))
//             return false;
//     }
//     return true;
// }
// int main (){
//     PhoneBook book;
//     std::string order;
//     std::string fname;
//     std::string lname;
//     std::string nname;
//     std::string number;
//     std::string secret;
//    for (size_t i = 0; i != -1; i++)
//    {
//         std::cout << "Your order is my command"<< std::endl;
//         std::getline(std::cin, order);
//         if (order.compare("ADD") == 0)
//         {
//             std::cout << "Enter Contact's first name"<< std::endl;
//             std::cin >> std::ws;
//             std::getline(std::cin, fname);
//             std::cout << "You entered: " << fname << std::endl;
//             std::cout << "Enter Contact's last name"<< std::endl;
//             std::cin >> std::ws;
//             std::getline(std::cin, lname);
//             std::cout << "Enter Contact's nick name"<< std::endl;
//             std::cin >> std::ws;
//             std::getline(std::cin, nname);
//             do
//             {
//                 std::cout << "Enter Contact's Phone Number"<< std::endl;
//                 number.clear();
//                 std::getline(std::cin, number) ;
//                 if(number.empty())
//                     break;
//                 if  (number.length() < 6 || number.length() > 10 || validNumb(number) == false)
//                     std::cout << "Your Phone number seems to be invaild, try again"<< std::endl;

//             } while (number.length() < 6 || number.length() > 10 || validNumb(number) == false);
//                 std::cout << "Enter Contact's Dark secret"<< std::endl;
//                 std::getline(std::cin, secret) ;
//                 book.AddContact(fname,lname,nname,number,secret);
//                 book.print();
//         }
//         else if (order.compare("SEARCH") == 0 )
//         {
//             book.searchReturn();
//         }
//         else if (order.compare("EXIT") == 0 || order.empty())
//         {
//             std::system("clear");
//             book.exit_empty();
//             std::cout << "Exiting Phonebook"<< std::endl;
//             break;
//         }
//         else 
//         {
//             std::cout << "Your order is unclear; These are the orders I accept ( ADD , SEARCH, EXIT)"<< std::endl;
//         }
//         order.clear();
//     }
// }