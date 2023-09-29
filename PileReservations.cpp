#include "PileReservations.h"


void PileReservations::ajouterReservation(Demande& reservation) {
    reservations.push(reservation);
};

void PileReservations::annulerReservation() {
    if (!reservations.empty()) {
        Demande reservation = reservations.top();
        cout << "Annulation de la reservation : " << endl;
        cout << "Film: " << reservation.film.getTitre() << endl;
        cout << "Start Time: " << reservation.projection.getHeureDebut() << endl;
        cout << "Cinema Hall: " << reservation.projection.getSalleCinema() << endl;
        reservations.pop();
    }
    else {
        cout << "Aucune reservation en cours." << endl;
    }
};

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


void PileReservations::afficherReservations() {
    stack<Demande> tempStack = reservations;
    while (!tempStack.empty()) {
        const Demande& reservation = tempStack.top();

        cout << "Film: " << reservation.film.getTitre() << endl;
        cout << "Start Time: " << reservation.projection.getHeureDebut() << endl;
        cout << "Cinema Hall: " << reservation.projection.getSalleCinema() << endl;
        //std::cout << "Seat: " << reservation.utilisateur. << std::endl;
        cout << endl;

        tempStack.pop();
    }
};
