#pragma once
#include "ListeChainee.h"
#include "TableauProjections.h"
#include "FileAttente.h"
#include "PileReservations.h"
#include "Utilisateur.h"

class Cinema
{

protected:
	
	ListeChainee listeFilms;
	TableauProjections tableauProjections;
	FileAttente fileAttente;
	PileReservations pileReservations;

public:
	void ajouterFilm(Film film);

	void afficherFilms();

	void ajouterProjection(Projection projection);

	void afficherProjections();

	void ajouterDemande(string demande);

	void traiterDemandes();

	void ajouterReservation(Demande reservation);

	void annulerReservation();

	void afficherReservations();

	void NoteEtCommentaire(Utilisateur user);


	void recommanderFilmsParPreference();

	void recommanderFilmsParAge(Utilisateur user);

	void personnaliserSieges(Utilisateur user);

	void systemePointsFidelite(Utilisateur user);

	void gestionEmployes();

	void surveillanceFrequentation();

	void reductionPrix();
};





