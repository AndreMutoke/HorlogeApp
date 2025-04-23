# Définir une variable
$nom = "HorlogeApp Compiling"

# Afficher un message
Write-Host "$nom !"

# Obtenir la date et l'heure actuelles
$dateHeure = Get-Date

# Afficher la date et l'heure
Write-Host "Heure de l'execution : $dateHeure"

g++ src\main.cpp -o bin\realese\prog.exe

