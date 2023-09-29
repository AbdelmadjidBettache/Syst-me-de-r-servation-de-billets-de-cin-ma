#include <conio.h>
#include <iostream>
#include "Cinema.h"
#include "Application.h"


//void displayMenu() {
//
//	// Création d'un cinéma
//	Cinema cinema;
//
//	// Ajout de films
//	Film film1("Film 1", 120, "PG-13", "Synopsis du film 1");
//	Film film2("Film 2", 105, "PG", "Synopsis du film 2");
//	cinema.ajouterFilm(film1);
//	cinema.ajouterFilm(film2);
//
//	// Affichage des films
//	cout << "Films disponibles : " << endl;
//	cinema.afficherFilms();
//
//	// Ajout de projections
//	Projection projection1("14:00", "16:00", "Salle 1", film1);
//	Projection projection2("16:30", "18:30", "Salle 2", film2);
//	cinema.ajouterProjection(projection1);
//	cinema.ajouterProjection(projection2);
//
//	// Affichage des projections
//	cout << "Projections : " << endl;
//	cinema.afficherProjections();
//
//	// Ajout de demandes
//	cinema.ajouterDemande("Demande 1");
//	cinema.ajouterDemande("Demande 2");
//
//	// Traitement des demandes
//	cout << "Traitement des demandes : " << endl;
//	cinema.traiterDemandes();
//
//	// Ajout de réservations
//	cinema.ajouterReservation("Réservation 1");
//	cinema.ajouterReservation("Réservation 2");
//
//	// Annulation d'une réservation
//	cinema.annulerReservation();
//
//	// Affichage des réservations
//	cinema.afficherReservations();
//
//
//	char choix;
//	do {
//		system("cls");
//		std::cout << "Systeme de reservation des billets de cinema " << std::endl;
//		std::cout << "Voici les options disponibles: " << std::endl;
//		std::cout << " (A)Ajouter film" << std::endl;
//		std::cout << " (B)Afficher film" << std::endl;
//		std::cout << " (C)Ajouter projection " << std::endl;
//		std::cout << " (D)Afficher projection" << std::endl;
//		std::cout << " (E)Ajouter demande" << std::endl;
//		std::cout << " (F)Traiter demande" << std::endl;
//		std::cout << " (G)Ajouter reservation" << std::endl;
//		std::cout << " (H)Annuler reservation" << std::endl;
//		std::cout << " (I)Afficher reservation" << std::endl;
//		std::cout << " (Q)uit" << std::endl;
//		std::cout << "Your choice : ";
//		choix = toupper(_getch());
//		system("cls");
//		if (choix != 'Q') {
//			switch (choix) {
//			case 'A':
//				cinema.ajouterFilm(film1);
//				system("pause");
//				break;
//			case 'B':
//				cinema.afficherFilms();
//				system("pause");
//				break;
//			case 'C':
//				cinema.ajouterProjection(projection1);
//				system("pause");
//				break;
//			case 'D':
//				cinema.afficherProjections();
//				system("pause");
//				break;
//			case 'E':
//				cinema.ajouterDemande("Demande 1");
//				system("pause");
//				break;
//			case 'F':
//				cinema.traiterDemandes();
//				system("pause");
//				break;
//			case 'G':
//				cinema.ajouterReservation("Réservation 1");
//				system("pause");
//				break;
//			case 'H':
//				cinema.annulerReservation();
//				system("pause");
//				break;
//			case 'I':
//				cinema.afficherReservations();
//				system("pause");
//				break;
//			}
//		}
//	} while (choix != 'Q');
//}

Cinema Application::cinema;

int main()
{
 
	Application::run();

	/*displayMenu();*/
	
	//// Création d'un cinéma
	//Cinema cinema;

	//// Ajout de films
	//Film film1("Film 1", 120, "PG-13", "Synopsis du film 1");
	//Film film2("Film 2", 105, "PG", "Synopsis du film 2");
	//cinema.ajouterFilm(film1);
	//cinema.ajouterFilm(film2);

	//// Affichage des films
	//cout << "Films disponibles : " << endl;
	//cinema.afficherFilms();

	//// Ajout de projections
	//Projection projection1("14:00", "16:00", "Salle 1", film1);
	//Projection projection2("16:30", "18:30", "Salle 2", film2);
	//cinema.ajouterProjection(projection1);
	//cinema.ajouterProjection(projection2);

	//// Affichage des projections
	//cout << "Projections : " << endl;
	//cinema.afficherProjections();

	//// Ajout de demandes
	//cinema.ajouterDemande("Demande 1");
	//cinema.ajouterDemande("Demande 2");

	//// Traitement des demandes
	//cout << "Traitement des demandes : " << endl;
	//cinema.traiterDemandes();

	//// Ajout de réservations
	//cinema.ajouterReservation("Réservation 1");
	//cinema.ajouterReservation("Réservation 2");

	//// Annulation d'une réservation
	//cinema.annulerReservation();

	//// Affichage des réservations
	//cinema.afficherReservations();

    return 0;
   
}



