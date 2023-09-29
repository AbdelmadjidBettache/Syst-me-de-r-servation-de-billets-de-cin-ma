#pragma once
#include <string>
#include "Film.h"
#include <iostream>
using namespace std;

class Projection
{
public:
    string heureDebut;
    string heureFin;
    string salle;
    Film film;

    Projection();
    Projection(string _heureDebut, string _heureFin, string _salle, Film _film);

    // Méthodes getters et setters
    string getHeureDebut() const;
    string getHeureFin() const;
    string getSalleCinema() const;
    Film getFilm() const;

    void afficherDetails();
};

