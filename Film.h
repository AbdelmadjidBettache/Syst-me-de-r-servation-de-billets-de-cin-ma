#pragma once
#include <string>
#include <iostream>
using namespace std;

class Film
{
public:
    string titre;
    int duree;
    string classification;
    string synopsis;
    double note;
    string commentaire;

    //constructeur 
    Film();
    Film(string _titre, int _duree, string _classification, string _synopsis);

   
    // Méthodes getters et setters
    string getTitre() const;
    int getDuree() const;
    string getClassification() const;
    string getSynopsis() const;
    double getNote() const;
    string getCommentaire() const;

    void setNote(double _note);
    void setCommentaire(string _commentaire);

    //methode pour ajouter une note et un commentaire
    void ajouterNoteEtCommentaire(double note, string commentaire);

    bool estRecommandePourAge(int age) const;

    

};

