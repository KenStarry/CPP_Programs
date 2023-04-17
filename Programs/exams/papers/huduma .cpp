//
// Created by kenne on 4/15/2023.
//
#include <iostream>
#include <queue>
#include <deque>

using namespace std;

template<class S, class I>
class HudumaQueue {

private:
    deque<I> ntsa;
    deque<I> registrar;
    deque<I> political;

public:

    HudumaQueue(deque<I> ntsa, deque<I> registrar, deque<I> political) :
            ntsa(ntsa),
            registrar(registrar),
            political(political) {}

    //  add ticket number at front or back of queue
    void join(char service, I ticketNumber, I priority);

    //  return ticket number at front of queue
    I atFront(char service) {
        if (service == 'N' && !ntsa.empty()) {
            return ntsa.front();

        } else if (service == 'R' && !registrar.empty()) {
            return registrar.front();

        } else if (service == 'P' && !political.empty()) {
            return political.front();
        }
    }

    //  return ticket number at back of queue
    I atBack(char service) {
        if (service == 'N' && !ntsa.empty()) {
            return ntsa.back();

        } else if (service == 'R' && !registrar.empty()) {
            return registrar.back();

        } else if (service == 'P' && !political.empty()) {
            return political.back();
        }
    }

    //  delete a ticket number from the queue after serving a client
    void leave(char service) {
        if (service == 'N' && !ntsa.empty()) {
            ntsa.pop_front();

        } else if (service == 'R' && !registrar.empty()) {
            registrar.pop_front();

        } else if (service == 'P' && !political.empty()) {
            political.pop_front();
        }
    }

    //  display
    void display(char service) {

        deque<I> dequeCopy;

        if (service == 'N') {
            dequeCopy = ntsa;
        } else if (service == 'R') {
            dequeCopy = registrar;
        } else {
            dequeCopy = political;
        }

        while (!dequeCopy.empty()) {
            cout << dequeCopy.front() << "\t";
            dequeCopy.pop_front();
        }
    }
};

template<class S, class I>
void HudumaQueue<S, I>::join(char service, I ticketNumber, I priority) {

    if (priority == 0) {
        if (service == 'N') {
            ntsa.push_back(ticketNumber);
        } else if (service == 'R') {
            registrar.push_back(ticketNumber);
        } else {
            political.push_back(ticketNumber);
        }
    } else {
        if (service == 'N') {
            ntsa.push_front(ticketNumber);
        } else if (service == 'R') {
            registrar.push_front(ticketNumber);
        } else {
            political.push_front(ticketNumber);
        }
    }
}

int main() {

    deque<int> ntsa;
    deque<int> registrar;
    deque<int> political;
    HudumaQueue<string, int> hudumaQueue(ntsa, registrar, political);

    int ntsaTicket = 1340;
    int registrarTicket = 1234;
    int politicalTicket = 2389;

    while (true) {

        cout << "Choose Service" << endl;
        cout << "N. NTSA\nR. Registrar of Persons\nP. Political Parties Things" << endl;

        cout << "Response : ";
        char resService;
        cin >> resService;

        cout << "Priority Client? Enter " << endl;
        cout << "1. Priority\n0. No Priority" << endl;

        cout << "Response : ";
        int resPriority;
        cin >> resPriority;

        if (resService == 'N') {
            ntsaTicket += 1;
            cout << "Ticket Number " << ntsaTicket << " NTSA Queue";
            hudumaQueue.join(resService, ntsaTicket, resPriority);

        } else if (resService == 'R') {
            registrarTicket += 1;
            cout << "Ticket Number " << registrarTicket << " Registrar of Persons Queue";
            hudumaQueue.join(resService, ntsaTicket, resPriority);

        } else if (resService == 'P') {
            politicalTicket += 1;
            cout << "Ticket Number " << politicalTicket << " Political Parties Things Queue";
            hudumaQueue.join(resService, ntsaTicket, resPriority);

        } else {
            cout << "Please choose a service.";
        }

        cout << "\nNext Customer? if yes, type Y or y" << endl;
        cout << "Next : ";
        char resNextCustomer;
        cin >> resNextCustomer;

        if (tolower(resNextCustomer) != 'y') {
            break;
        }
    }

    hudumaQueue.display('N');

    return 0;
}





































