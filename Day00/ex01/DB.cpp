/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DB.cpp                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mxaba <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/04 12:36:18 by mxaba             #+#    #+#             */
/*   Updated: 2019/06/04 12:36:25 by mxaba            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DB.hpp"

DB::DB(void) {
	this->maxSize = 8;
	this->contactsValue = 0;
	return;
}

DB::~DB(void) { return; }

int DB::getContactsValue() { return (this->contactsValue); }

void DB::setContactsValue(int contacts) { this->contactsValue = contacts; }

int DB::getFLAG(void) { return (this->flg); }

void DB::setFlag(int flg) { this->flg = flg; }

PhoneBook DB::getContacts(int id) { return (this->db[id]); }

void DB::setDB(int id, PhoneBook db) {
	this->db[id] = db;
	return;
}
