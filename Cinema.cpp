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
	// Ajouter des points de fid�lit� en fonction du montant de la r�servation
	int points = static_cast<int>(montant * 0.1); // Exemple : 0.1 point pour chaque dollar d�pens�
	user.ajouterPointsFidelite(points);
};


void Cinema::gestionEmployes() {
	// Fonctionnalit� de gestion des employ�s
};

void Cinema::surveillanceFrequentation() {
	// Fonctionnalit� de surveillance de la fr�quentation et ajustement des prix des billets
};

void Cinema::reductionPrix() {
	// Fonctionnalit� de r�duction des prix pour les r�servations multiples
};
