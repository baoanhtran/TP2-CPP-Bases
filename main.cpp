using namespace std;
#include <iostream>
#include "Catalogue.cpp"

int main() {
    cout << "1. Ajouter un trajet" << endl;
    cout << "2. Afficher les trajets" << endl;
    cout << "3. Rechercher un trajet" << endl;
    cout << "0. Quitter" << endl;

    Catalogue catalogue;

    int choix;
    while (true) {
        cout << "Votre choix : ";
        cin >> choix;

        switch (choix) {
            case 0:
                cout << "Au revoir" << endl;
                return 0;
            case 1:
                cout << "\t1. Ajouter un trajet simple" << endl;
                cout << "\t2. Ajouter un trajet composé" << endl;
                cout << "\t0. Retour" << endl;
                cout << "Votre choix : ";
                cin >> choix;
                switch (choix) {
                    case 0:
                        break;
                    case 1:
                        catalogue.SaisirTrajetSimple();
                        break;
                    case 2:
                        cout << "Ajouter un trajet composé" << endl;
                        break;
                    default:
                        cout << "Choix invalide" << endl;
                        break;
                }
                break;
            case 2:
                cout << "Afficher les trajets" << endl;
                break;
            case 3:
                cout << "Rechercher un trajet" << endl;
                break;
            default:
                cout << "Choix invalide" << endl;
                break;
        }
    }

    return 0;
}