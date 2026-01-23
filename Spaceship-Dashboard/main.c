#include <stdio.h>
#include <stdlib.h>

char Schiffsklasse[25];
int AnzahlBesatzung;
int Missionstage;
long long int TripToDate = 476346739467;
float PartLightspeed = 34.6;
float Reichweite = 653456364.546;

int main(void)
{
    //Starting User Input
    printf("Schiffsklase eingeben: ");
    scanf("%s", &Schiffsklasse);

    printf("Anazahl der Besatzung: ");
    scanf("%d", &AnzahlBesatzung);

    printf("Missionstage: ");
    scanf("%d", &Missionstage);

    //Absatze zur Trennung
    printf("\n");
    printf("\n");
    printf("\n");

    //Ausgabe des Dashboards
    printf("Raumschiff-Dashboard\n");
    printf("====================\n\n");
    printf("%-35s %s\n", "Schiffsklasse", Schiffsklasse);
    printf("%-35s %d\n", "Besatzungszahl", AnzahlBesatzung);
    printf("%-35s %d\n", "Missionstage", Missionstage);
    printf("%-35s %lld\n", "Gereiste Kilometer", TripToDate);
    printf("%-35s %.2f%%\n", "Anteil Lichtgeschwindigkeit", PartLightspeed);
    printf("%-35s %.2f km\n", "Reichweite", Reichweite);
    printf("Ende der Ausgabe");

}   