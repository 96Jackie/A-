#ifndef __TicketOffice__
#define __TicketOffice__
 
class TicketOffice
{
private:
	int ticketnum;
	int rent;
public:
	void list(void);
	void Ticketlist(void);
	void Ticketing(int num);
	void Rentlist(void);
	void Rent(int num);
};

#endif

