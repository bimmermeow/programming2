# PRO2 Übung 3
## Aufgabe 3.1: Systemidee

Die zu entwickelnde Systemerweiterung soll Ereignisfelder zum bestehenden Hase-und-Igel-Spiel hinzufügen. Diese Ereignisfelder sollen zufällig am Anfang des Spiels verteilt werden und dann nach Betreten des Feldes ausgelöst werden. Nach Betreten eines Ereignisfeldes wird zufällig ein Ereignis aus den aktuell 3 verfügbaren ausgewählt. Diese 3 Ereignisse sind:
- Der letzte Zug kostet nichts, dh. die verbrauchten Vorräte werden zurückerstattet
- Noch mal würfeln
- 3 Felder zurück gehen. Falls das Feld, auf das die Figur dann landet, auch ein Ereignisfeld ist, wird dieses Ereignis nicht ausgelöst
	- diese Regelung gilt auch für eventuell in der Zukunft vorhandene Sprungereignisse.

## Aufgabe 3.2: Anwendungsfälle

#### Anwendungsfall "Spiel spielen"

| 		| 		|
|--------------:|:---------------|
| Name: 	| Spiel spielen |
| Kurzbeschreibung: | Ein Spieler spielt eine Partie des Hase & Igel-Spiels. |
| Akteur:	| Spieler |
| Auslöser: 	| Spieler startet Programm `./a.out` |
| Ergebnis:	| Sieger steht fest |

###### Ablauf: 

1. Programm starten 
2. Anzahl der Felder festlegen 
3. Anzahl der Spielfiguren festlegen (jew. für Hase und Igel)
4. Spielzüge ausführen
	- Bei Betreten eines Ereignisfeldes:
		1. Ereigniskarte ziehen
		2. Ereignis ausführen
	- Wenn eine Figur das letzte Feld erreicht hat:
		1. Spiel beendet


## Aufgabe 3.3: Klassendiagramm

![Klassendiagramm](class_diagram.png "Klassendiagramm")

