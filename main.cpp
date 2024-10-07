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
                cout << "1. Ajouter un trajet simple" << endl;
                cout << "2. Ajouter un trajet compose" << endl;
                cout << "0. Retour" << endl;
                cout << "Votre choix : ";
                cin >> choix;
                switch (choix) {
                    case 0:
                        break;
                    case 1:
                        catalogue.SaisirTrajetSimple();
                        break;
                    case 2:
                        catalogue.SaisirTrajetCompose();
                        break;
                    default:
                        cout << "Choix invalide" << endl;
                        break;
                }
                break;
            case 2:
                catalogue.Afficher();
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