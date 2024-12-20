/** Évaluation d'une expression en notation préfixe
  * En-têtes
  * @author Romain DUJOL
  */

#ifndef _POSTFIXE_H
#define _POSTFIXE_H

/** Évalue une expression en notation postfixe
  * @param expression l'expression à évaluer
  * @param resultat (sortie uniquement) *pointeur* vers la valeur de l'expression (uniquement si la fonction retourne EXIT_SUCCESS)
  * @return EXIT_SUCCESS si l'expression est syntaxiquement correcte
  *         EXIT_FAILURE sinon
  */
int POSTFIXE_evaluation(char *expression, int *resultat) ;

#endif // _POSTFIXE_H
