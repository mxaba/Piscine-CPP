/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mxaba <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/04 12:36:31 by mxaba             #+#    #+#             */
/*   Updated: 2019/06/04 12:50:20 by mxaba            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

Phonebook::Phonebook(void) {
	this->login = "NULL";
	return;
}

Phonebook::~Phonebook(void) {return;}

std::string Phonebook::getFirstName(void) {return firstName;}
std::string Phonebook::getLastName(void) {return lastName;}
std::string Phonebook::getNickname(void) {return nickname;}
std::string Phonebook::getLogin(void) {return login;}
std::string Phonebook::getPostalAddress(void) {return postalAddress;}
std::string Phonebook::getEmailAddress(void) {return emailAddress;}
std::string Phonebook::getPhoneNumber(void) {return phoneNumber;}
std::string Phonebook::getBirthdayDate(void) {return birthdayDate;}
std::string Phonebook::getFavoriteMeal(void) {return favoriteMeal;}
std::string Phonebook::getUnderwearColor(void) {return underwearColor;}
std::string Phonebook::getDarkestSecret(void) {return darkestSecret;}

void Phonebook::setFirstName(std::string st) {this->firstName = st;}
void Phonebook::setLastName(std::string st) {this->lastName = st;}
void Phonebook::setNickname(std::string st) {this->nickname = st;}
void Phonebook::setLogin(std::string st) {this->login = st;}
void Phonebook::setPostalAddress(std::string st) {this->postalAddress = st;}
void Phonebook::setEmailAddress(std::string st) {this->emailAddress = st;}
void Phonebook::setPhoneNumber(std::string st) {this->phoneNumber = st;}
void Phonebook::setBirthdayDate(std::string st) {this->birthdayDate = st;}
void Phonebook::setFavoriteMeal(std::string st) {this->favoriteMeal = st;}
void Phonebook::setUnderwearColor(std::string st) {this->underwearColor = st;}
void Phonebook::setDarkestSecret(std::string st) {this->darkestSecret = st;}

void Phonebook::contactInfo() {
	std::cout << "first name " << this->firstName << "\n";
	std::cout << "last name " << this->lastName << "\n";
	std::cout << "nickname " << this->nickname << "\n";
	std::cout << "login " << this->login << "\n";
	std::cout << "postal address " << this->login << "\n";
	std::cout << "email address " << this->login << "\n";
	std::cout << "phone number " << this->login << "\n";
	std::cout << "birthday date " << this->login << "\n";
	std::cout << "favorite meal " << this->login << "\n";
	std::cout << "underwear color " << this->login << "\n";
	std::cout << "darkest secret " << this->login << "\n";
}
