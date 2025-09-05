#ifndef CONTACT_HPP
#define CONTACT_HPP

#include "string"


class Contact
{
    private:
        std::string firstName;
        std::string lastName;
        std::string nickName;
        std::string phoneNumber;
        std::string darkestSecret;
    public:
        Contact();
        ~Contact();

        void setFirstName(std::string firstName);
        void setLastName(std::string lastName);
        void setnickName(std::string nickName);
        void setphoneNumber(std::string phoneNumber);
        void setdarkestSecret(std::string darkestSecret);

        std::string getFirstName();
        std::string getLastName();
        std::string getnickName();
        std::string getphoneNumber();
        std::string getdarkestSecret();
};

#endif