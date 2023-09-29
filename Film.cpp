#include "Film.h"


Film::Film() {};
Film::Film(string _titre, int _duree, string _classification, string _synopsis)
    : titre(_titre), duree(_duree), classification(_classification), synopsis(_synopsis) {
    note = 0.0;
    commentaire = "";
};


// Méthodes getters et setters
string Film::getTitre() const { return titre; };
int Film::getDuree() const { return duree; };
string Film::getClassification() const { return classification; };
string Film::getSynopsis() const { return synopsis; };
double Film::getNote() const { return note; };
string Film::getCommentaire() const { return commentaire; };

void Film::setNote(double _note) { note = _note; };
void Film::setCommentaire(string _commentaire) { commentaire = _commentaire; };

//methode pour ajouter une note et un commentaire
void Film::ajouterNoteEtCommentaire(double note, string commentaire) {

    this->note = note;
    this->commentaire = commentaire;

};

bool Film::estRecommandePourAge(int age) const {
    // Vérifier si le film est recommandé pour l'âge donné
    // Par exemple, supposons que le film soit recommandé pour les personnes de 12 ans et plus
    if (age >= 12) {
        return true;
    }
    else {
        return false;
    }
};
