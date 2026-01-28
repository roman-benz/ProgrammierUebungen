#include <stdio.h>
#include <stdlib.h>

unsigned char status = 0xA7;
unsigned char fehler = 0b10000000;
unsigned char uebertemperatur = 0b01000000;
unsigned char unterspannung = 0b00100000;
unsigned char messwert_maske = 0b00001111;
/*
x Bit 7: Fehler
• Bit 6: Übertemperatur
• Bit 5: Unterspannung
• Bits 0–3: Messwert (0–15)
x 0000 0000
*/

int main(void)
{
    //Prüfen ob Fehler
    if((status&fehler) == 0x00){
        printf("Kein Fehler liegt vor \n");
    }
    else{
        printf("Es liegt ein Fehler vor \n");
    }

    if ((status&uebertemperatur) == 0x00)
    {
        printf("Keine Uebertemperatur \n");
    }
    else{
        printf("Uebertemperatur vorhanden\n");
    }
    if ((status&unterspannung) == 0x00)
    {
        printf("Keine Unterspannung\n");
    }
    else{
        printf("Unterspannung vorhanden\n");
    }
    unsigned char temperatur = (status >> 4) & 0x0F;

    printf("Der Messwert der Temperatur ist: %d \n", temperatur);
    
    
    return 0;
}