# robotica-workshop

Ga naar de map robotica workshop

[TOC]

## Getting Started
(een paar korte opmerkingen over het gebruik van Arduino-bordjes.)

. Arduino-omgeving

. Gebruik Arduino (Pro Micro 5V, 16MHz)

. selectie board (!)

. upload-procedure

. Hardwaregebruik

. kortsluiten !

. "live" bedraden

. Laat steeds je bedradingen controleren! We willen geen doorgebrande chips.

## Opdrachten


### 1. Blink
1. Sluit de arduino aan volgens het weergegeven schema. 
[Blink bedrading](https://github.com/kooi/robotica-workshop/blob/master/code/Blink/Blink%20bedrading..pdf)
  
  . 1 draad van 10 naar de plus van de LED (het lange pootje).
  
  . Een weesrtand (220 Ohm) van de min van de LED naar GND.
  
  LET OP: Laat je bedrading telkens controleren voordat je de arduino aansluit.
2. Upload de sketch [Blink.ino](./code/Blink/Blink.ino). Als het werkt gaat de LED telkens 1,0 s aan en dan 1,0 s uit.
3. Pas de code aan zodat de knipperfrequentie 10 Hz is.


### 2. Knop
1. Bedraad de arduino met een LED een knopje volgens dit [schema](https://github.com/kooi/robotica-workshop/blob/master/code/Knop/Bedrading%20Knop.pdf). 

[Hier is nog een schematische weergave](https://github.com/kooi/robotica-workshop/blob/master/code/Knop/Bedrading%20knop%20schematisch.jpg)
2. Upload de sketch [Knop.ino](https://github.com/kooi/robotica-workshop/blob/master/code/Knop/Knop.ino)



### 3. Smiley
1. Bedraad de arduino met de LED matrix volgens dit lijstje:(Zorg ervoor dat je de draden aansluit aan de IN-kant, en de matrix niet verkeerd om hebt geplaatst.)
 
 . GND naar GND.
 
 . VCC naar VCC.
 
 . DataIn naar D9
 
 . CLK naar D8
 
 . CS/LOAD naar D7
 
2. Upload de sketch [Plaatje.ino](https://github.com/kooi/robotica-workshop/blob/master/code/Plaatje/Plaatje.ino)
3. Het gezichtje op de matrix ziet er een beetje verdrietig uit. Zorg ervoor dat het weer lacht.
4. Maak nu je eigen plaatje. Je kunt evt. gebruik maken van de volgende [site](http://www.pial.net/8x8-dot-matrix-font-generator-based-on-javascript-and-html/)


### 4. Animatie
1. Hou de vorige bedrading.
2. Upload de sketch [Animatie.ino](https://github.com/kooi/robotica-workshop/blob/master/code/Animatie/Animatie.ino)
3. Bedenk een eigen animatie van minimaal 2 frames.


### 5. Motor
1. Bedraad de arduino met de H-bridge volgens dit [Schema](https://github.com/kooi/robotica-workshop/blob/master/code/Motor/Motor%20Bedrading.pdf)
2. Upload de sketch [Motor.ino](https://github.com/kooi/robotica-workshop/blob/master/code/Motor/Motor.ino)
3. Verander de snelheid van de motor.
