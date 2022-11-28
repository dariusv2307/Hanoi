# Proiect sincretic: Metode avansate de programare

# <center>Turnurile din Hanoi<center> 
	Enunțul problemei
	Se dau 3 tije simbolizate prin X,Y,Z și n discuri de diametre diferite stivuite pe tija X,  în ordinea descrescătoare a diametrelor, formând astfel un “turn”. 
  Se cere să se mute cele n discuri pe tija Y, folosind tija intermediară Z și respectând următoarele reguli:
-	În fiecare mișcare se mută un singur disc
-	Un disc nu poate fi așezat peste unul cu diametru mai mic.
Exemple:
-	Pentru n=1, avem de efectuat o singură mutare: X->Y.
-	Pentru n=2, mutând discul din vârful tijei X pe tija intermediară Z(X->Y), discul rămas pe tija X îl mutăm pe tija finală Y(X->Y), după care discul de pe tija intermediară Z pe tija finală Y(Z->Y).
-	Pentru n=3, va trebui să efectuăm următoarele mișcări: X->Y, X->Z, Y->Z, X->Y, Z->X, Z->Y, X->Y. 
Analiza problemei
•	Se observă că, în general, pentru n>=2 procedăm astfel:
-	Mutăm n-1 discuri de pe tija X pe tija Z utilizând Y ca tijă intermediară.
-	Mutăm pe tija Y unicul disc rămas pe tija X.
-	Mutăm cele n-1 discuri de pe tija Z pe tija Y, utilizând acum ca tijă intermediară cea care a rămas, adică X.
•	În acest mod descompunem problema inițială în 3 subprobleme, dintre care a 2-a este elementară, fiind vorba de mutarea unui singur disc, iar prima și ultima sunt neelementare, deoarece implică mutarea a n-1 discuri.


Realizator: Vesa Darius-Iulian <br>
Prof. Coordonator: Bocan Valer
