# Devoir 6 — Robot à décision intelligente

## 1. Objectif du projet

L'objectif de ce projet est de concevoir et de simuler un système intelligent capable de prendre automatiquement une décision en fonction des valeurs mesurées par un capteur.

## 2. Outils et composants utilisés

- **Plateforme de simulation :** Wokwi
- **Carte électronique :** ESP32
- **Capteur :** capteur utilisé dans le circuit
- **Environnement de programmation :** Arduino IDE intégré à Wokwi
- **Langage de programmation :** C++ (Arduino)

## 3. Principe de fonctionnement

Le système mesure une valeur à l'aide du capteur connecté à l'ESP32. Le programme compare ensuite cette valeur à un seuil prédéfini.

Selon la valeur mesurée, l'ESP32 exécute une action correspondante. Cette logique permet au système de réagir automatiquement à son environnement sans intervention manuelle à chaque mesure.

## 4. Programme et logique de décision

Le programme est enregistré dans le fichier `sketch.ino`.

Il contient la configuration du capteur, la lecture des mesures, la comparaison avec le seuil et les instructions permettant de déclencher l'action prévue.

## 5. Tests et résultats obtenus

Le système a été réalisé et testé sur Wokwi. Les résultats observés pendant les tests permettent de vérifier le comportement du système selon les valeurs mesurées par le capteur.

Les captures d'écran du circuit et des tests sont disponibles dans le dossier `captures/`.

## 6. Code source

Le code source du projet est disponible dans le fichier :

- `sketch.ino`

## 7. Captures d'écran

Les captures du circuit ESP32 et des tests sont disponibles dans le dossier :

- `captures/`

## 8. Lien vers la simulation

[Ouvrir le projet sur Wokwi]https://wokwi.com/projects/477721015694684161

