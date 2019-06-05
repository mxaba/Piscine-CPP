/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mxaba <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/04 12:36:31 by mxaba             #+#    #+#             */
/*   Updated: 2019/06/04 12:50:20 by mxaba            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void) {
	this->login = "NULL";
	return;
}

PhoneBook::~PhoneBook(void) {return;}

std::string PhoneBook::getFirstName(void) {return firstName;}
std::string PhoneBook::getLastName(void) {return lastName;}
std::string PhoneBook::getNickname(void) {return nickname;}
std::string PhoneBook::getLogin(void) {return login;}
std::string PhoneBook::getPostalAddress(void) {return postalAddress;}
std::string PhoneBook::getEmailAddress(void) {return emailAddress;}
std::string PhoneBook::getPhoneNumber(void) {return phoneNumber;}
std::string PhoneBook::getBirthdayDate(void) {return birthdayDate;}
std::string PhoneBook::getFavoriteMeal(void) {return favoriteMeal;}
std::string PhoneBook::getUnderwearColor(void) {return underwearColor;}
std::string PhoneBook::getDarkestSecret(void) {return darkestSecret;}

void PhoneBook::setFirstName(std::string st) {this->firstName = st;}
void PhoneBook::setLastName(std::string st) {this->lastName = st;}
void PhoneBook::setNickname(std::string st) {this->nickname = st;}
void PhoneBook::setLogin(std::string st) {this->login = st;}
void PhoneBook::setPostalAddress(std::string st) {this->postalAddress = st;}
void PhoneBook::setEmailAddress(std::string st) {this->emailAddress = st;}
void PhoneBook::setPhoneNumber(std::string st) {this->phoneNumber = st;}
void PhoneBook::setBirthdayDate(std::string st) {this->birthdayDate = st;}
void PhoneBook::setFavoriteMeal(std::string st) {this->favoriteMeal = st;}
void PhoneBook::setUnderwearColor(std::string st) {this->underwearColor = st;}
void PhoneBook::setDarkestSecret(std::string st) {this->darkestSecret = st;}

void PhoneBook::contactInfo() {
	std::cout << "first name " << this->firstName << "\n";
	std::cout << "last name " << this->lastName << "\n";
	std::cout << "nickname " << this->nickname << "\n";
	std::cout << "login " << this->login << "\n";
	std::cout << "postal address " << this->postalAddress << "\n";
	std::cout << "email address " << this->emailAddress  << "\n";
	std::cout << "phone number " << this->phoneNumber << "\n";
	std::cout << "birthday date " << this->birthdayDate << "\n";
	std::cout << "favorite meal " << this->favoriteMeal  << "\n";
	std::cout << "underwear color " << this->underwearColor  << "\n";
	std::cout << "darkest secret " << this->darkestSecret << "\n";
}
