# Aufgabe 4.1 Design

## 1. Verantwortlichkeiten

#### Spielfiguren (`Spielfigur`, `Hase` und `Igel`)

- Speichern und regeln ihren Vorrat
- speichern und verändern Position und
- können auf Befehl x felder gezogen werden

#### Spielfeld

- Speichert Position der Ereignisfelder
- Sagt, ob ein gegebenes Feld ein Ereignisfeld ist
- Gibt bei Bedarf die Nummer des Ereignisses aus

#### Spiel

- Hat Spielfiguren
- initiert Züge
- würfelt
- regelt den Ablauf
- gibt den Text aus

## 2. Anwendungsfall realisieren

- `main` Frägt die Anzahl der Spielfiguren für Hase und Igel und die Anzahl der zu erreichenden Felder ab
	- `Spiel` wird erstellt
		- `Spielfigur` Alle Hasen und Igel werden erstellt
		- `Spielfeld` wird erstellt und Ereignisfelder verteilt
	- `Spiel` gibt den Stand von jeder Figur aus
		- `Spielfigur` Geben Stände zurück
- `main` Schleife
	- `Spiel` Würfelt und macht zug für jede Spielfigur
		- `Spielfigur` gibt Stand zurück
		- `Spielfeld` gibt Feldtyp zurück
		- `Spielfeld` gibt bei Bedarf Ereignistyp zurück
		- `Spielfigur` zieht, inkl. eventuelle Ereigniszüge
	- `Spiel` gibt zurück, ob eine spielfigur gewonnen hat
- `main` beendet bei einem Gewinner die Schleife und gibt den Gewinner aus
- `main` beendet das Programm

# Fragen bzgl. Implementierung

- [ ] Wie Spielfeld zuerst deklarieren und dann erstellen?


# 2Do
- [ ] ziehe() Bearbeiten
	- [ ] kost nix
	- [ ] -3
- [ ] spielfeld.cpp

0: kein ereignis
1: zug kost nix
2: nommel würfeln
3: 3 felder zurück
