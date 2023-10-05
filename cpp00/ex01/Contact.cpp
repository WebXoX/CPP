 #include"Contact.hpp"

 void Contact::Contact_rem()
{
    Contact::index = 0;
    Contact::fname.clear();
    Contact::lname.clear();
    Contact::nname.clear();
    Contact::number.clear();
    Contact::secret.clear();
}
void Contact::Contact_init(int index,std::string fname, std::string lname, std::string nname,std::string number,std::string secret )
{
    Contact::index = index;
    Contact::fname = fname;
    Contact::lname = lname;
    Contact::nname = nname;
    Contact::number = number;
    Contact::secret = secret;
}

int Contact::GetIndex()
{
    return Contact::index;
}

std::string Contact::GetFname()
{
    return Contact::fname;
}

std::string Contact::GetLname()
{
    return Contact::lname;
}
    
std::string Contact::GetNname()
{
    return Contact::nname;
}
std::string Contact::GetNumber()
{
    return Contact::number;
}
std::string Contact::GetSecret()
{
    return Contact::secret;
}