#include "Application.h"

void Application::displayFilms() {
	// Ajout des films
	Film film1("Film 1", 120, "Animation", "Synopsis du film 1");
	Film film2("Film 2", 120, "Horreur", "Synopsis du film 2");
	Film film3("Film 3", 105, "Action", "Synopsis du film 3");
	cinema.ajouterFilm(film1);
	cinema.ajouterFilm(film2);
	cinema.ajouterFilm(film3);

	// Affichage des films
	cout << "Films disponibles : " << endl;
	cinema.afficherFilms();
};

void Application::displayProjection() {

	// Ajout des projections
	Film film1("Film 1", 120, "Animation", "Synopsis du film 1");
	Film film2("Film 2", 120, "Horreur", "Synopsis du film 2");
	Film film3("Film 3", 105, "Action", "Synopsis du film 3");
	Projection projection1("11:00", "13:00", "Salle 1", film1);
	Projection projection2("14:00", "16:00", "Salle 2", film2);
	Projection projection3("16:30", "18:30", "Salle 3", film3);
	cinema.ajouterProjection(projection1);
	cinema.ajouterProjection(projection2);
	cinema.ajouterProjection(projection3);

	// Affichage des projections
	cout << "Projections : " << endl;
	cinema.afficherProjections();
};

void Application::displayDemande() {
	// Ajout de demandes
	cinema.ajouterDemande("Demande 1");
	cinema.ajouterDemande("Demande 2");

	// Traitement des demandes
	cout << "Traitement des demandes : " << endl;
	cinema.traiterDemandes();
};

void Application::displayReservations() {
	// Ajout de réservations
	Film film1("Film 1", 120, "Animation", "Synopsis du film 1");
	Film film2("Film 2", 120, "Horreur", "Synopsis du film 2");
	Film film3("Film 3", 105, "Action", "Synopsis du film 3");
	Projection projection1("11:00", "13:00", "Salle 1", film1);
	Projection projection2("14:00", "16:00", "Salle 2", film2);
	Projection projection3("16:30", "18:30", "Salle 3", film3);
	cinema.ajouterProjection(projection1);
	cinema.ajouterProjection(projection2);
	cinema.ajouterProjection(projection3);
	Utilisateur user1("Client1", 23);
	Utilisateur user2("Client2", 43);
	Demande reservation1(film1, projection1, user1);
	Demande reservation2(film2, projection2, user2);
	/*cinema.ajouterReservation(reservation1);
	cinema.ajouterReservation(reservation2);*/

	// Affichage des réservations disponibles
	cout << "Reservations disponibles :\n";
	cout << "1. Titre: " << film1.getTitre() << " - Heurs de debut: " << projection1.getHeureDebut() << " - Heurs de Fin: " << projection1.getHeureFin() << " - Salle numero: " << projection1.getSalleCinema() << "\n";
	cout << "2. Titre: " << film2.getTitre() << " - Heurs de debut: " << projection2.getHeureDebut() << " - Heurs de Fin: " << projection2.getHeureFin() << " - Salle numero: " << projection2.getSalleCinema() << "\n";
	cout << "3. Titre: " << film3.getTitre() << " - Heurs de debut: " << projection3.getHeureDebut() << " - Heurs de Fin: " << projection3.getHeureFin() << " - Salle numero: " << projection3.getSalleCinema() << "\n";

	// Demande à l'utilisateur de choisir une réservation
	int reservation_number;
	cout << "Choisissez un numero de reservation : ";
	cin >> reservation_number;

	// Vérification de l'entree utilisateur et reservation correspondante
	if (reservation_number >= 1 && reservation_number <= 3) {
		Film filmChoisi;
		Projection projectionChoisie;

		switch (reservation_number) {
		case 1:
			filmChoisi = film1;
			projectionChoisie = projection1;
			break;
		case 2:
			filmChoisi = film2;
			projectionChoisie = projection2;
			break;
		case 3:
			filmChoisi = film3;
			projectionChoisie = projection3;
			break;
		}

		// Création de la demande de réservation
		string nomUtilisateur;
		int ageUtilisateur;
		cout << "Entrez votre nom : ";
		cin >> nomUtilisateur;
		cout << "Entrez votre age : ";
		cin >> ageUtilisateur;

		Utilisateur utilisateur(nomUtilisateur, ageUtilisateur);
		Demande reservation(filmChoisi, projectionChoisie, utilisateur);

		// Ajout de la demande de réservation au cinéma
		cinema.ajouterReservation(reservation);

		cout << "Reservation effectuee avec succes !\n";
	}
	else {
		cout << "Numero de reservation invalide.\n";
	}

	

	 //Affichage des réservations
	cinema.afficherReservations();

};

void Application::annulerReservation() {
	Film film1("Film 1", 120, "Animation", "Synopsis du film 1");
	Film film2("Film 2", 120, "Horreur", "Synopsis du film 2");
	Film film3("Film 3", 105, "Action", "Synopsis du film 3");
	Projection projection1("11:00", "13:00", "Salle 1", film1);
	Projection projection2("14:00", "16:00", "Salle 2", film2);
	Projection projection3("16:30", "18:30", "Salle 3", film3);
	cinema.ajouterProjection(projection1);
	cinema.ajouterProjection(projection2);
	cinema.ajouterProjection(projection3);
	Utilisateur user1("Client1", 23);
	Utilisateur user2("Client2", 43);
	Demande reservation1(film1, projection1, user1);
	Demande reservation2(film2, projection2, user2);
	/*cinema.ajouterReservation(reservation1);
	cinema.ajouterReservation(reservation2);*/
	// Annulation d'une réservation
	cinema.annulerReservation();
};

void Application::NoteEtCommentaire() {
	Utilisateur user1("Client1", 23);
	user1.commenterFilm();
	user1.noterFilm();
};

void Application::recommanderFilmsParPreference() {
	Utilisateur user1("Client1", 23);
	Film film1("Film 1", 120, "Animation", "Synopsis du film 1");
	Film film2("Film 2", 120, "Horreur", "Synopsis du film 2");
	Film film3("Film 3", 105, "Action", "Synopsis du film 3");
	cinema.ajouterFilm(film1);
	cinema.ajouterFilm(film2);
	cinema.ajouterFilm(film3);

	user1.afficherFilmsRecommandes();
};

void Application::recommanderFilmsParAge() {};

void Application::personnaliserSieges() {
	Utilisateur user1("Client1", 23);
	user1.choisirSiege();
};





void Application::displayMenu() {
	cout << "============== MENU ==============" << endl;
	cout << "1. Afficher les films disponibles" << endl;
	cout << "2. Afficher les projections" << endl;
	cout << "3. Afficher les demandes en attente" << endl;
	cout << "4. Afficher les reservations" << endl;
	cout << "5. Annuler une reservation" << endl;
	cout << "6. Noter et de commenter les films vus" << endl;
	cout << "7. Les films recommandes en fonction de preferences " << endl;
	cout << "8. Les films recommandes en fonction d'age" << endl;
	cout << "9. Choix du siege" << endl;
	cout << "10. Quitter" << endl;
	cout << "==================================" << endl;
};

void Application::run() {
	int choix;
	bool quitter = false;

	while (!quitter) {
		displayMenu();
		cout << "Choix : ";
		cin >> choix;

		switch (choix) {
		case 1:
			displayFilms();
			break;
		case 2:
			displayProjection();
			break;
		case 3:
			displayDemande();
			break;
		case 4:
			displayReservations();
			break;
		case 5:
			annulerReservation();
			break;
		case 6:
			NoteEtCommentaire();
			break;
		case 7:
			recommanderFilmsParPreference();
			break;
		case 8:
			recommanderFilmsParAge();
			break;
		case 9:
			personnaliserSieges();
			break;
		case 10:
			quitter = true;
			break;
		default:
			cout << "Choix invalide. Veuillez reessayer." << endl;
			break;
		}

		cout << endl;
	}
};
