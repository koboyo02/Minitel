CC = gcc
CFLAGS = -Wextra -Werror

Parcours_Utilisateur: main.o affichage.o choix_menu.o Parcours_Utilisateur.o info_general.o processus.o
	$(CC) main.o affichage.o choix_menu.o Parcours_Utilisateur.o info_general.o processus.o -o Parcours_Utilisateur

all: main.o affichage.o choix_menu.o Parcours_Utilisateur.o info_general.o processus.o
	$(CC) main.o choix_menu.o affichage.o Parcours_Utilisateur.o info_general.o processus.o -o Parcours_Utilisateur

%o:%c %h
	$(CC) -o $@ -c $< $(OPTIONS)

clean:
	rm -rf *.o *# *~ Parcours_Utilisateur
