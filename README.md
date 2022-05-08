# Minitel 3.0

## informations générales

    Version du système d'exploitation: cat /etc/issue
Cette commande permet de savoir la distribution et la version du système d'exploitation installé dans un serveur linux.

    Uptime: uptime
Cette commande permet de voir l’heure actuelle, le temps depuis lequel le système est en marche, le nombre d’utilisateurs connectés et la charge du système.

    Version du Kernel:  cat /proc/version
Cette commande permet de savoir la version exacte de son noyau kernel en Linux.

    Informations Hardware : CPU, Mémoire, disque dur (capacité / espace dispo / …): inxi -Fxz
Cette commande permet de résumé sur du système mon Hardware.

    Limite de fichiers ouverts: ulimit -n
Cette commande permet de vérifier la limite des fichiers ouverts.

    Limite de processus ouverts: lsof | wc -l
Cette commande permet d'afficher la limite de processus ouvert.

    Avoir un sous-menu pour avoir la liste des paquets installés: dpkg --list
Cette commande permet d'avoir la liste des paquets installés.

    
## Réseau

    Routes:ip route list
Cette commande permet de lister les routes.

    Savoir si le forward de paquet est activé :cat /proc/sys/net/ipv4/ip_forward
Cette commande permet de savoir si le forward est activé ou pas il renvoie 0 si il n'est pas active et 1 si il est active.


## Détail des processus

    On a utilisé la commande ps -ef pour afficher les détails du processus comme le PID, Nom, Status, Parent ID.
    Pour kill le processus on a utilié commande Kill avec le PID et Kill -9 avec le PID pour le forcer.