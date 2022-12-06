<h1>Proiect sincretic: Metode avansate de programare</h1>

<h2>Turnurile din Hanoi</h2>
	<h3>Enunțul problemei</h3>
	Se dau 3 tije simbolizate prin X,Y,Z și n discuri de diametre diferite stivuite pe tija X, în ordinea descrescătoare a diametrelor, formând astfel un “turn”. Se cere să se mute cele n discuri pe tija Y, folosind tija intermediară Z și respectând următoarele reguli:<br>
-	În fiecare mișcare se mută un singur disc<br>
-	Un disc nu poate fi așezat peste unul cu diametru mai mic.<br><br>
<h3>Exemple</h3>
-	Pentru n=1, avem de efectuat o singură mutare: X->Y.<br>
-	Pentru n=2, mutând discul din vârful tijei X pe tija intermediară Z(X->Y), discul rămas pe tija X îl mutăm pe tija finală Y(X->Y), după care discul de pe tija intermediară Z pe tija finală Y(Z->Y).<br>
-	Pentru n=3, va trebui să efectuăm următoarele mișcări: X->Y, X->Z, Y->Z, X->Y, Z->X, Z->Y, X->Y. <br><br>
<h3>Analiza problemei</h3>
•	Se observă că, în general, pentru n>=2 procedăm astfel:<br>
-	Mutăm n-1 discuri de pe tija X pe tija Z utilizând Y ca tijă intermediară.<br>
-	Mutăm pe tija Y unicul disc rămas pe tija X.<br>
-	Mutăm cele n-1 discuri de pe tija Z pe tija Y, utilizând acum ca tijă intermediară cea care a rămas, adică X.<br>
•	În acest mod descompunem problema inițială în 3 subprobleme, dintre care a 2-a este elementară, fiind vorba de mutarea unui singur disc, iar prima și ultima sunt neelementare, deoarece implică mutarea a n-1 discuri.
<br><br>

Realizator: Vesa Darius-Iulian<br>
Prof. Coordonator: Bocan Valer
