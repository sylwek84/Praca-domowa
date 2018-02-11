
##### 1. Utworzenie katalogu repozytorium

```sh
$ cd Pulpit		# przejście do folderu (katalogu) "Pulpit"
$ mkdir first_repo		# utworzenie folderu "first_repo"
```

##### 2. Edycja plików projektu

```sh
$ touch test.txt	# stworzenie pustego pliku test.txt
$ nano test.txt		# edycja pliku test.txt edytorem "nano"
```

##### 3. Instalacja i inicjalizacja systemu kontroli "git"

```sh
$ apt install git	# instalacja oprogramowania "git"
$ git init		# inicjalizacja git w katalogu/repozytorium
```

##### 4. Praca z systemem kontroli wersji (polecenia)

```sh
$ git help	# pomoc
$ git init	# inicjalizacja
$ git add .	# dodanie do systemu wszystkich plików z obecnego katalogu
$ git add *.txt	# j.w. -> tylko pliki z rozszerzeniem txt
$ git commit -m "komentarz"	# skomitowanie plików z dowolnym komentarzem
$ git status	# status plików - porównanie plików
$ git log	# wyświetlenie kolejnych komentarzy do zmian w projekcie
$ git remote add origin https://github.com/sylwek84/first_repo.git
		# powiązanie systemu "git" z kontem w serwisie "github.com"
$ git push -u origin master	# pierwsze przesłanie projektu do serwisu
$ git push	# przesłanie aktualnej wersji projektu do serwisu
```

##### 5. Kompilacja i uruchamianie pierwszego programu

```sh
$ gcc program1.c -o program1.o  # kompilacja programu
$ ./program1.o 	# uruchomienie programu
```
