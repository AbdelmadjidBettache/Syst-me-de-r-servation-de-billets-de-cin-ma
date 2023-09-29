#pragma once
#include <stack>
#include <string>
#include <iostream>
#include "Demande.h"
using namespace std;

class PileReservations
{

protected:
    stack<Demande> reservations;

public:
    void ajouterReservation(Demande& reservation);

    void annulerReservation();

    /*void afficherReservations() {
        if (!reservations.empty()) {
            cout << "Reservations en cours : " << endl;
            stack<string> tempStack = reservations;
            while (!tempStack.empty()) {
                cout << tempStack.top() << endl;
                tempStack.pop();
            }
        }
        else {
            cout << "Aucune reservation en cours." << endl;
        }
    }*/


    void afficherReservations();
};

