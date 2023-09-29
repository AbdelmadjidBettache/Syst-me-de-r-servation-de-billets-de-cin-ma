#pragma once
#include "Film.h"
#include <iostream>

class ListeChainee
{
public:
    struct Noeud {

        Film film;
        Noeud* suivant;

        Noeud(Film _film) : film(_film), suivant(nullptr) {}
    };

    Noeud* tete;
    

public:
    ListeChainee() : tete(nullptr) {}

    Noeud* getTete() const { return tete; }

    void ajouterFilm(Film film) {
        Noeud* nouveauNoeud = new Noeud(film);
        if (tete == nullptr) {
            tete = nouveauNoeud;
        }
        else {
            Noeud* courant = tete;
            while (courant->suivant != nullptr) {
                courant = courant->suivant;
            }
            courant->suivant = nouveauNoeud;
        }
    }

    void afficherFilms() {
        Noeud* courant = tete;
        while (courant != nullptr) {
            cout << "Titre:" << courant->film.titre << " -Duree:" << courant->film.duree << " -Classification:" << courant->film.classification << " -Synopsis:" << courant->film.synopsis << endl;
            //cout << "Duree: " << courant->film.duree << endl;
            //cout << "Classification: " << courant->film.classification << endl;
            //cout << "Synopsis: " << courant->film.synopsis << endl;
            cout << "Note: " << courant->film.note << endl;
            cout << "Commentaire: " << courant->film.commentaire << endl;
            cout << endl;

            courant = courant->suivant;
        }
    }

};

