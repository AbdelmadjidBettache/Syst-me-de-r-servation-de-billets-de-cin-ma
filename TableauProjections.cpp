#include "TableauProjections.h"

void TableauProjections::ajouterProjection(Projection projection) {
    projections.push_back(projection);
};

void TableauProjections::afficherProjections() {
    for (Projection& projection : projections) {
        projection.afficherDetails();
    }
};
