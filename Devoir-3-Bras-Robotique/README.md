# Devoir 3 — Bras robotique à plusieurs degrés de liberté

## 1. Objectif du projet
Construire et programmer un bras robotique capable d'effectuer des mouvements précis grâce à plusieurs servomoteurs.

## 2. Outils et composants utilisés
- Plateforme : Tinkercad Circuits
- Carte : Arduino Uno
- Deux servomoteurs
- Fils de connexion
- Bibliothèque Arduino : Servo.h

## 3. Fonctionnement du projet
Le programme utilise deux servomoteurs pour commander les mouvements du bras robotique.

Le premier servomoteur est connecté à la broche numérique 9 et contrôle la base. Le deuxième est connecté à la broche numérique 10 et contrôle le bras.

Le programme exécute plusieurs positions :
- Position de repos : 90° et 90°.
- Rotation vers la gauche : 30° et 60°.
- Rotation vers la droite : 150° et 120°.
- Retour à la position initiale : 90° et 90°.

Une pause de deux secondes est prévue entre les positions.

## 4. Degrés de liberté
Le système utilise deux servomoteurs, qui commandent deux axes de mouvement. Le bras possède donc deux degrés de liberté contrôlés dans cette simulation.

## 5. Résultats obtenus
Le programme commande successivement les deux servomoteurs pour atteindre différentes positions. Les résultats définitifs sont à confirmer par les tests de la simulation.

## 6. Code source
Le code Arduino est disponible dans le fichier `bras_robotique.ino`.

## 7. Captures d'écran
Une capture du circuit Tinkercad et du code sera ajoutée dans le dossier `captures/`.

## 8. Lien du projet
Ajouter ici le lien de partage du circuit Tinkercad.
