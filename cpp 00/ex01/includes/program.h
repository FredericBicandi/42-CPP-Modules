#ifndef PHONEBOOK_H
#define PHONEBOOK_H

#include "string"
#include "limits"
#include "cstdlib"
#include "iostream"
#include "../lib/PhoneBook.hpp"

void printWelcome();
void printUsage();
void printAllContacts(PhoneBook book);
bool preValidation(int index, PhoneBook book);
bool postValidation(char index, PhoneBook book);
bool validateStr(std::string str);
bool validatePhoneNumber(std::string str);
std::string setString(std::string message);
std::string setPhoneNumber(std::string message);

#endif