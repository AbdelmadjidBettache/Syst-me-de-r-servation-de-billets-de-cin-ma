#include "Demande.h"



Demande::Demande(const Film& _film, const Projection& _projection, const Utilisateur& _utilisateur) :
	film(_film), projection(_projection), utilisateur(_utilisateur) {
};

// Méthodes getters et setters
Film Demande::getFilm() const { return film; };
Projection Demande::getProjection() const { return projection; };
Utilisateur Demande::getUser() const { return utilisateur; };
