#pragma once
#ifndef __TicketOffice__
#define __TicketOffice__
#include <iostream>
#include "Customer.h"


class TicketOffice
{
private:
	int price;
	int ticketnum;
	int rent;
	bool right;
	int count;
	bool tube;

public:
	void list(void);
	void Ticketlist(void);
	int TicketingPrice(int num);
	bool TicketingCount_1(int num);
	int TicketingCount_2(int num);
};

#endif

