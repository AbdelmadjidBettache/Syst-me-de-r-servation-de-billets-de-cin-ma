#pragma once
#include <string>
#include <iostream>
using namespace std;
#include <queue>

class FileAttente
{

protected:
    queue<string> demandes;

public:
    void ajouterDemande(string demande);

    void traiterDemandes();
};

