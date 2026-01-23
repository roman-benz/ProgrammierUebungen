#include <stdio.h>
#include <stdlib.h>

char Schiffsklasse[] = "Peter II";
int AnzahlBesatzung = 234;
int Missionstage = 3726;
long long int TripToDate = 476346739467;
float PartLightspeed = 34.6;
float Reichweite = 653456364.546;

int main(void)
{
    printf("Raumschiff-Dashboard\n");
    printf("====================\n\n");
    printf("%-35s %s\n", "Schiffsklasse", Schiffsklasse);
    printf("%-35s %d\n", "Besatzungszahl", AnzahlBesatzung);
    printf("%-35s %d\n", "Missionstage", Missionstage);
    printf("%-35s %lld\n", "Gereiste Kilometer", TripToDate);
    printf("%-35s %.2f%%\n", "Anteil Lichtgeschwindigkeit", PartLightspeed);
    printf("%-35s %.2f km\n", "Reichweite", Reichweite);

}   