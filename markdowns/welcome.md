# Drawing

Les fonctionnalités :
- `init_drawing(largeur,hauteur)` : initiale une surface de travaille aux dimensions spécifiées. La position initiale de point de tracé est au centre du motif.
- `draw(longeur)` : trace une ligne de taille `longueur` (en pixels)
- `turn(angle)` : modifie la direction de traçage (par défaut angle de 0° vers la droite)
- `draw_change_color(rouge,vert,bleu)` : modifie la couleur
- `display_draw()` : affiche le dessin réalisé

# Demo Drawing

@[Sample paper]({"stubs": ["main.c"],"command": "sh /project/target/run.sh", "project" : "drawing"})

