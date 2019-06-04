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
	this->contactsAmount = 0;
	return;
}

DB::~DB(void) { return; }

int DB::getContactsAmount() { return (this->contactsAmount); }

void DB::setContactsAmount(int contacts) { this->contactsAmount = contacts; }

int DB::getFlg(void) { return (this->flg); }

void DB::setFlg(int flg) { this->flg = flg; }

PhoneBook DB::getContacts(int id) { return (this->db[id]); }

void DB::setDB(int id, PhoneBook db) {
	this->db[id] = db;
	return;
}
