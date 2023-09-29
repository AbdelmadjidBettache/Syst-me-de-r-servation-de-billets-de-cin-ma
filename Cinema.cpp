#include "Cinema.h"


void Cinema::ajouterFilm(Film film) {
	listeFilms.ajouterFilm(film);
};

void Cinema::afficherFilms() {
	listeFilms.afficherFilms();
};

void Cinema::ajouterProjection(Projection projection) {
	tableauProjections.ajouterProjection(projection);
};

void Cinema::afficherProjections() {
	tableauProjections.afficherProjections();
};

void Cinema::ajouterDemande(string demande) {
	fileAttente.ajouterDemande(demande);
};

void Cinema::traiterDemandes() {
	fileAttente.traiterDemandes();
};

void Cinema::ajouterReservation(Demande reservation) {
	pileReservations.ajouterReservation(reservation);
};

void Cinema::annulerReservation() {
	pileReservations.annulerReservation();
};

void Cinema::afficherReservations() {
	pileReservations.afficherReservations();
};

void Cinema::NoteEtCommentaire(Utilisateur user) {
	user.commenterFilm();
	user.noterFilm();
};


void Cinema::recommanderFilmsParPreference() {
	Utilisateur user;
	user.afficherFilmsRecommandes();
};

void Cinema::recommanderFilmsParAge(Utilisateur user) {
	user.afficherFilmsRecommandesParAge(listeFilms);
};

void Cinema::personnaliserSieges(Utilisateur user) {
	user.choisirSiege();
};

void Cinema::systemePointsFidelite(Utilisateur user) {
	int montant=0.0;
	// Ajouter des points de fidélité en fonction du montant de la réservation
	int points = static_cast<int>(montant * 0.1); // Exemple : 0.1 point pour chaque dollar dépensé
	user.ajouterPointsFidelite(points);
};


void Cinema::gestionEmployes() {
	// Fonctionnalité de gestion des employés
};

void Cinema::surveillanceFrequentation() {
	// Fonctionnalité de surveillance de la fréquentation et ajustement des prix des billets
};

void Cinema::reductionPrix() {
	// Fonctionnalité de réduction des prix pour les réservations multiples
};
