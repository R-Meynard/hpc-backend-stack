import string
def exo4():
    result = ""
    # Parcours des lettres minuscules [a,z]
    # Pour chaque lettre parcouru on la transforme en son code ASCII a l aide de la fonction ord() 
    # La ligne de la boucle for signifie, je fais for alpha in range (98, 122 +1)
    # En faisant chr(alpha) on retrouve la lettre correspondant au code ASCII, par exemple chr(98) = b
    for alpha in range(ord('a'), ord('z') + 1):
        result += chr(alpha)
        result += " (ASCII: " + str(alpha) + ") " # Sur cette ligne, j affiche un message qui montre la valeur decimale correspondant au code ASCII
        # Quand je fais str(alpha), je convertis le code decimal associe au code ASCII en une chaine de caractere, exemple str(98) = "98" 
    for alpha in range(ord('A'), ord('Z') + 1):
        result += chr(alpha)
        result += " (ASCII: " + str(alpha) + ") "
    return result


def main():
    result = exo4()
    print(result)
    return 0

if __name__ == '__main__':
    main()
