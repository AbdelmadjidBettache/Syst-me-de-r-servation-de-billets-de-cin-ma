#pragma once
#include <string>
#include <iostream>
#include "Film.h"
#include <vector>
#include "ListeChainee.h"

using namespace std;

class Utilisateur
{

protected:
    string nom;
    int age;
    vector<Film> reservations;
    int pointsFidelite;
    int** sieges; // Matrice représentant les sièges dans la salle
    

public:
    Utilisateur();
    Utilisateur(string _nom, int _age);

    // Méthodes getters et setters
    string getNom() const;
    int getAge() const;
    int getPointsFidelite() const;

    void ajouterReservation(Film film);

    Film* findFilmByTitle(string& title);

    void noterFilm();

    void commenterFilm();

    void afficherFilmsRecommandes();

    void afficherFilmsRecommandesParAge(ListeChainee& listeFilms);

    void choisirSiege();

    void ajouterPointsFidelite(int points);
};

