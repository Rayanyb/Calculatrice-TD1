/** Évaluation d'une expression en notation préfixe
  * En-têtes
  * @author Romain DUJOL
  */

#include "arbre.h"

#ifndef _PREFIXE_H
#define _PREFIXE_H

/** Transforme une expression en notation préfixe en l'arbre correspondant
  * @param expression l'expression à évaluer
  * @param a (sortie uniquement) *pointeur* vers l'arbre de l'expression (uniquement si la fonction retourne EXIT_SUCCESS)
  * @return EXIT_SUCCESS si l'expression est syntaxiquement correcte
  *         EXIT_FAILURE sinon
  */
int PREFIXE_arbre(char *expression, ARBRE *a) ;

/** Calculer la valeur d'une expression donnée par son arbre
  * @param arbre arbre de l'expression
  * @return valeur de l'expression
  */
int PREFIXE_evaluationArbre(ARBRE a) ;

/** Évalue une expression en notation préfixe
  * @param expression l'expression à évaluer
  * @param resultat (sortie uniquement) *pointeur* vers la valeur de l'expression (uniquement si la fonction retourne EXIT_SUCCESS)
  * @return EXIT_SUCCESS si l'expression est syntaxiquement correcte
  *         EXIT_FAILURE sinon
  */
int PREFIXE_evaluation(char *expression, int *resultat) ;

#endif // _PREFIXE_H
