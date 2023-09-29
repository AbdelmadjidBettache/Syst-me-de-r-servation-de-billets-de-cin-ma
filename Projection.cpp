#include "Projection.h"


Projection::Projection() {};
Projection::Projection(string _heureDebut, string _heureFin, string _salle, Film _film)
    : heureDebut(_heureDebut), heureFin(_heureFin), salle(_salle), film(_film) {};


// Méthodes getters et setters
string Projection::getHeureDebut() const { return heureDebut; };
string Projection::getHeureFin() const { return heureFin; };
string Projection::getSalleCinema() const { return salle; };
Film Projection::getFilm() const { return film; };

void Projection::afficherDetails() {
    cout << "Film:" << film.titre << " -Heure de debut:" << heureDebut << " -Heure de fin:" << heureFin << " -Salle:" << salle << endl;
    //cout << "Heure de debut: " << heureDebut << endl;
    //cout << "Heure de fin: " << heureFin << endl;
    //cout << "Salle: " << salle << endl;
    cout << endl;
};
