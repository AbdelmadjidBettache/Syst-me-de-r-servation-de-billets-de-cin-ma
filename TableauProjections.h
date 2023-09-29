#pragma once
#include "Projection.h"
#include <vector>;

class TableauProjections
{

protected:
    vector<Projection> projections;

public:
    void ajouterProjection(Projection projection);

    void afficherProjections();
};

