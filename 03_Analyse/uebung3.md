# PRO2 Übung 3
## Aufgabe 3.1: Systemidee

Die zu entwickelnde Systemerweiterung soll Ereignisfelder zum bestehenden Hase-und-Igel-Spiel hinzufügen. Diese Ereignisfelder sollen zufällig am Anfang des Spiels verteilt werden und dann nach Betreten des Feldes ausgelöst werden. Nach Betreten eines Ereignisfeldes wird zufällig ein Ereignis aus den aktuell 3 verfügbaren ausgewählt. Diese 3 Ereignisse sind:
- Der letzte Zug kostet nichts, dh. die verbrauchten Vorräte werden zurückerstattet
- Noch mal würfeln
- 3 Felder zurück gehen. Falls das Feld, auf das die Figur dann landet, auch ein Ereignisfeld ist, wird dieses Ereignis nicht ausgelöst
	- diese Regelung gilt auch für eventuell in der Zukunft vorhandene Sprungereignisse.

## Aufgabe 3.2: Anwendungsfälle

## Aufgabe 3.3: Klassendiagramm
| Spielfeld |
|:---------:|
|+Array felder |
