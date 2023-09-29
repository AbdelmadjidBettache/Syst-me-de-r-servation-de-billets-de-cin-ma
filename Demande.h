#pragma once
#include "Film.h"
#include <vector>
#include "Projection.h"
#include "Utilisateur.h"

class Demande
{
public:
	Film film;
	Projection projection;
	Utilisateur utilisateur;

	
	/*Demande(Film _film, Projection _projection, Utilisateur user){
		this->film = _film;
		this->projection = _projection;
		this->utilisateur = utilisateur;
	}*/
	Demande(const Film& _film, const Projection& _projection, const Utilisateur& _utilisateur);
	

	// Méthodes getters et setters
	Film getFilm() const;
	Projection getProjection() const;
	Utilisateur getUser() const;

	
};

