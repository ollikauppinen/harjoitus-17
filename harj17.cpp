/**********************************************************
*Teht‰v‰: Harjoitus17
*Tekij‰: Olli Kauppinen
*PVM: 05.11.2013
*Kuvaus:
*Muokkaa edellist‰ ohjelmaa siten, ett‰ edell‰ m‰‰ritelty‰ tietuetyyppi‰
*k‰ytet‰‰n my‰s kahden muun "koululaisen" tietojen tallentamiseen.
*N‰iden kahden muun koululaisen tiedot alustetaan ao. muuttujien
*m‰‰rittelyn yhteydess‰. Ainoastaan yhden koululaisen tiedot kysyt‰‰n
*k‰ytt‰j‰lt‰ edellisen teht‰v‰n tapaan.
*
*Tulosta kolmen koululaisen tiedot koulumatkan mukaisessa
*suuruusj‰rjestyksess‰ (pienimm‰st‰ suurimpaan) n‰yt‰lle
*
* Versio 1.0 H4718 05.11.2013
***********************************************************/

#include<iostream>
using namespace std;

struct HENKILO
{
	char etunimi[40];
	char sukunimi[40];
	double matka;
	char osoite[100];
	char postnro[6];
	int kenka;
};

int main()
{

	HENKILO opiskelijat[4]={
		{"Jaakko", "Teppo", 34, "Puolukkakuja 7A","40100", 41},
		{"Pamela", "Anderson", 2, "Polkinjanpolku 2", "40100", 37}

	};
	
	

	cout << "\nEtunimesi?\n";
	cin >> opiskelijat[2].etunimi;
	
	cout << "\nSukunimesi?\n";
	cin >> opiskelijat[2].sukunimi;

	cout << "\nKoulumatkasi kilometrein‰?\n";
	cin >> opiskelijat[2].matka;

	cin.get ();

	cout << "\nOsoitteesi?\n";
	cin.get (opiskelijat[2].osoite, 100);

	cout << "\nPostinumerosi?\n";
	cin >> opiskelijat[2].postnro;

	cout << "\nKengan kokosi?\n";
	cin >> opiskelijat[2].kenka;
	
	if (opiskelijat[0].matka>opiskelijat[1].matka)
	{
		opiskelijat[3]=opiskelijat[0];
		opiskelijat[0]=opiskelijat[1];
		opiskelijat[1]=opiskelijat[3];
	}
	if (opiskelijat[0].matka>opiskelijat[2].matka)
	{
		opiskelijat[3]=opiskelijat[0];
		opiskelijat[0]=opiskelijat[2];
		opiskelijat[2]=opiskelijat[3];
	}
	if (opiskelijat[1].matka>opiskelijat[2].matka)
	{
		opiskelijat[3]=opiskelijat[1];
		opiskelijat[1]=opiskelijat[2];
		opiskelijat[2]=opiskelijat[3];
	}

	cout << "\n\nLyhimm‰n matkan omaava opiskelija ensin: " <<endl;

	cout << "\nNimesi on " << opiskelijat[0].etunimi << " " << opiskelijat[0].sukunimi << endl;
	cout << "\nOsoitteesi on " << opiskelijat[0].osoite << ", post.nro " << opiskelijat[0].postnro << endl;
	cout << "\nKoulumatkasi on " << opiskelijat[0].matka << " km" << endl;
	cout << "\nKeng‰nnumerosi on " << opiskelijat[0].kenka << endl;

	cout << "\n\n\nNimesi on " << opiskelijat[1].etunimi << " " << opiskelijat[1].sukunimi << endl;
	cout << "\nOsoitteesi on " << opiskelijat[1].osoite << ", post.nro " << opiskelijat[1].postnro << endl;
	cout << "\nKoulumatkasi on " << opiskelijat[1].matka << " km" << endl;
	cout << "\nKeng‰nnumerosi on " << opiskelijat[1].kenka << endl;

	cout << "\n\n\nNimesi on " << opiskelijat[2].etunimi << " " << opiskelijat[2].sukunimi << endl;
	cout << "\nOsoitteesi on " << opiskelijat[2].osoite << ", post.nro " << opiskelijat[2].postnro << endl;
	cout << "\nKoulumatkasi on " << opiskelijat[2].matka << " km" << endl;
	cout << "\nKeng‰nnumerosi on " << opiskelijat[2].kenka << endl;

}
  