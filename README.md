<h1>Syncretic Project: Advanced Programming Methods</h1>

<h2>Hanoi towers</h2>
	<h3>Statement of the problem</h3>
	There are 3 rods symbolized by X, Y, Z and n disks of different diameters stacked on the X rod, in descending order of diameters, thus forming a "tower". It is required to move the n discs on Y rod, using the intermediate Z rod and following the following rules:<br>
-	Only one disk is moved in each move<br>
-	A disc cannot be placed on top of a smaller diameter disc.<br><br>
<h3>Examples</h3>
-	For n=1, we have only one move to perform: X->Y.<br>
-	For n=2, moving the disc from the tip of X rod to the intermediate Z rod (X->Y), we move the remaining disc on the X rod to the final Y rod (X->Y), after which the disc from the intermediate Z rod to the final Y rod (Z->Y).<br>
-	For n=3, we will have to perform the following moves: X->Y, X->Z, Y->Z, X->Y, Z->X, Z->Y, X->Y. <br><br>
<h3>Analysis of the problem</h3>
•	It is noted that, in general, for n>=2 we proceed as follows:<br>
-	We move n-1 disks from X rod to Z rod using Y as an intermediate rod.<br>
-	We move to the Y rod the only disk left on the X rod.<br>
-	We move the n-1 disks from the Z rod to the Y rod, now using the one that is left, i.e. X, as the intermediate rod.<br>
•	In this way we decompose the original problem into 3 subproblems, the 2nd of which is elementary, being the move of a single disk, and the first and the last are non-elementary, since they involve moving n-1 disks.
<br><br>

The creator of the project: Vesa Darius-Iulian<br>
Coordinating teacher: Bocan Valer
