/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mxaba <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/04 11:51:03 by mxaba             #+#    #+#             */
/*   Updated: 2019/06/04 12:34:54 by mxaba            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>

class PhoneBook {
public:
	PhoneBook(void);
	~PhoneBook(void);

	std::string getFirstName(void);
	std::string getLastName(void);
	std::string getNickname(void);
	std::string getLogin(void);
	std::string getPostalAddress(void);
	std::string getEmailAddress(void);
	std::string getPhoneNumber(void);
	std::string getBirthdayDate(void);
	std::string getFavoriteMeal(void);
	std::string getUnderwearColor(void);
	std::string getDarkestSecret(void);

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
	std::string firstName;
	std::string lastName;
	std::string nickname;
	std::string login;
	std::string postalAddress;
	std::string emailAddress;
	std::string phoneNumber;
	std::string birthdayDate;
	std::string favoriteMeal;
	std::string underwearColor;
	std::string darkestSecret;
};

#endif
