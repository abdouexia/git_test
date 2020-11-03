#include <iostream>
#include <string>

using namespace std;  //pour éviter le .h à la fin

int main() {
	string txt = ""; //initialisation des
	int nb = 0;      //variables
	cout << "Entrez un texte: " << endl; //sortie sur la console d'un texte(endl permet un retour à la ligne)
	cin >> txt;  //attente de la saisie d'informations par l'utilisateur
	cout << "Le texte: " << txt << endl;  //on affiche le texte
	cout << "Entre un nombre: " << endl; //sortie sur la console
	cin >> nb;//attente de la saisie d'informations par l'utilisateur
	cout << "Le nombre: " << nb << endl;//on affiche le nombre
	cout << "Le nombre: " << nb << endl;//on affiche le nombre
}
