#include "FileAttente.h"



void FileAttente::ajouterDemande(string demande) {
    demandes.push(demande);
};

void FileAttente::traiterDemandes() {
    while (!demandes.empty()) {
        string demande = demandes.front();
        cout << "Traitement de la demande : " << demande << endl;
        demandes.pop();
    }
};
