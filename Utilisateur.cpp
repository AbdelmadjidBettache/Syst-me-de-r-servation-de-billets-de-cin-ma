#include "Utilisateur.h"


Utilisateur::Utilisateur() {};
Utilisateur::Utilisateur(string _nom, int _age) : nom(_nom), age(_age), pointsFidelite(0) {};

// Méthodes getters et setters
string Utilisateur::getNom() const { return nom; };
int Utilisateur::getAge() const { return age; };
int Utilisateur::getPointsFidelite() const { return pointsFidelite; };

void Utilisateur::ajouterReservation(Film film) {
	reservations.push_back(film);
};

Film* Utilisateur::findFilmByTitle(string& title) {
	for (Film& film : reservations) {
		if (film.getTitre() == title) {
			return &film;
		}
	}
	return nullptr;
};

void Utilisateur::noterFilm() {
	double note;
	string titre;
	Film film;
	cout << "Entrer le titre de film a notee: " << endl;
	cin >> titre;
	if (findFilmByTitle(titre)) {
		cout << "Donnee une note au film vu: " << endl;
		cin >> note;
		film.setNote(note);
	}
	else {
		cout << "Film non trouver " << endl;
	}
};

void Utilisateur::commenterFilm() {
	Film film;
	string commentaire;
	string titre;

	cout << "Entrer le titre de film a notee: " << endl;
	cin >> titre;
	if (findFilmByTitle(titre)) {
		cout << "Donnee un commentaire sur le film vu: " << endl;
		cin >> commentaire;
		film.setCommentaire(commentaire);
	}
	else {
		cout << "Film non trouver " << endl;
	}

};

void Utilisateur::afficherFilmsRecommandes() {
	ListeChainee listeChainee;  // Crée une instance de la classe ListeChainee
	ListeChainee& listeFilms = listeChainee;
	//ListeChainee& listeFilms;
	string preferences;
	cout << "Quel est le genre de film que vous preferez ?" << endl;
	cin >> preferences;

	// Récupérer le premier nœud de la liste chaînée
	ListeChainee::Noeud* courant = listeFilms.getTete();


	while (courant != nullptr) {
		Film film = courant->film;

		// Vérifier si le film correspond au genre préféré
		if (film.classification == preferences) {
			cout << "Titre: " << film.titre << endl;
			cout << "Duree: " << film.duree << " minutes" << endl;
			cout << "Classification: " << film.classification << endl;
			cout << "Synopsis: " << film.synopsis << endl;
			cout << endl;
		}

		// Passer au nœud suivant dans la liste
		courant = courant->suivant;
	}


};

void Utilisateur::afficherFilmsRecommandesParAge(ListeChainee& listeFilms) {
	int age;
	cout << "Quel est votre age ?" << endl;
	cin >> age;

	// Parcourir la liste chainée des films
	ListeChainee::Noeud* courant = listeFilms.getTete();
	while (courant != nullptr) {
		Film film = courant->film;

		// Vérifier si le film est recommandé pour l'âge donné
		if (film.estRecommandePourAge(age)) {
			// Afficher les détails du film recommandé
			cout << "Titre: " << film.titre << endl;
			cout << "Duree: " << film.duree << " minutes" << endl;
			cout << "Classification: " << film.classification << endl;
			cout << "Synopsis: " << film.synopsis << endl;
			cout << endl;
		}

		// Passer à l'élément suivant dans la liste
		courant = courant->suivant;
	}


};

void Utilisateur::choisirSiege() {
	int nbRangees = 10;
	int nbSiegesParRangee = 10;
	int rangee;
	int siege;


	// Initialisation de la matrice sieges
	sieges = new int* [nbRangees];
	for (int i = 0; i < nbRangees; i++) {
		sieges[i] = new int[nbSiegesParRangee];
		for (int j = 0; j < nbSiegesParRangee; j++) {
			sieges[i][j] = 0; // Valeur par défaut pour un siège disponible
		}
	}

	// Affichage de la matrice sieges avant le choix
	for (int i = 0; i < nbRangees; i++) {
		for (int j = 0; j < nbSiegesParRangee; j++) {
			cout << sieges[i][j] << " ";
		}
		cout << endl;
	}


	cout << "Quelle rangee voulez-vous ?" << endl;
	cin >> rangee;
	cout << "Quel siege voulez-vous ?" << endl;
	cin >> siege;



	// Vérifier si le siège est valide
	if (rangee >= 0 && rangee < nbRangees && siege >= 0 && siege < nbSiegesParRangee) {
		// Vérifier si le siège est disponible
		if (sieges[rangee][siege] == 0) {
			// Marquer le siège comme occupé (par exemple, en utilisant la valeur 1)
			sieges[rangee][siege] = 1;
			cout << "Le siege a ete choisi avec succes." << endl;
		}
		else {
			cout << "Le siege est deja occupe." << endl;
		}
	}
	else {
		cout << "Le siege choisi n'est pas valide." << endl;
	}

	// Affichage de la matrice sieges apres le choix
	for (int i = 0; i < nbRangees; i++) {
		for (int j = 0; j < nbSiegesParRangee; j++) {
			cout << sieges[i][j] << " ";
		}
		cout << endl;
	}

	// Libération de la mémoire de la matrice sieges
	for (int i = 0; i < nbRangees; i++) {
		delete[] sieges[i];
	}
	delete[] sieges;
};

void Utilisateur::ajouterPointsFidelite(int points) {
	pointsFidelite += points;
};
