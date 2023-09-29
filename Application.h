#pragma once
#include "Cinema.h"



class Application
{
protected:
	static Cinema cinema;

public:	
	static void displayFilms();

	static void displayProjection();

	static void displayDemande();

	static void displayReservations();

	static void annulerReservation();

	static void NoteEtCommentaire();

	static void recommanderFilmsParPreference();

	static void recommanderFilmsParAge();

	static void personnaliserSieges();
	




	static void displayMenu();

	static void run();
};

