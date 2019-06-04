/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DB.hpp                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mxaba <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/04 11:24:35 by mxaba             #+#    #+#             */
/*   Updated: 2019/06/04 12:05:30 by mxaba            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DB_HPP
# define DB_HPP

# include <iostream>
# include "phonebook.cpp"

class	DB {
	public:
		DB(void);
		~DB(void);
		int getContactsValue();
        void setContactsValue(int contacts);
        PhoneBook getContacts(int id);
        int getFlag(void);
        void setFlag(int flg);
        void setDB(int ad, PhoneBook db);
	private:
        PhoneBook db[8];
        int maxSize;
        int contactsValue;
        int flag;
};

#endif
