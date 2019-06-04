/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mxaba <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/04 11:51:03 by mxaba             #+#    #+#             */
/*   Updated: 2019/06/04 12:04:11 by mxaba            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include <iostream>
using namespace::std;

class Phonebook {
	public:
		Phonebook(void);
        ~Phonebook(void);

        string getFirstName(void);
        string getLastName(void);
        string getNickname(void);
        string getLogin(void);
        string getPostalAddress(void);
        string getEmailAddress(void);
        string getPhoneNumber(void);
        string getBirthdayDate(void);
        string getFavoriteMeal(void);
        string getUnderwearColor(void);
        string getDarkestSecret(void);

        void setFirstName(std::string st);
        void setLastName(std::string st);
        void setNickname(std::string st);
        void setLogin(std::string st);
        void setPostalAddress(std::string st);
        void setEmailAddress(std::string st);
        void setPhoneNumber(std::string st);
        void setBirthdayDate(std::string st);
        void setFavoriteMeal(std::string st);
        void setUnderwearColor(std::string st);
        void setDarkestSecret(std::string st);
        void contactInfo();

private:
        string firstName;
        string lastName;
        string nickname;
        string login;
        string postalAddress;
        string emailAddress;
        string phoneNumber;
        string birthdayDate;
        string favoriteMeal;
        string underwearColor;
        string darkestSecret;
};

#endif
