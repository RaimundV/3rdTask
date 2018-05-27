# Second OOP Task

### Vertinimas

Pataise header failus ir pridejo 13 uzduoties laikus. Visa kita buvo puikiai.

## Installing

1. Download the zip file.
2. Unzip.
3. Open the folder as a project in some C++ IDE.

Or clone with gitbash.

## How to use

Run the program and all the needed functions run.

#### 1. Generate student files
1. Generates files with 10, 100, 1000, 10000, 100000 Student grades and measures the time taken.

| Nr. | The function took | function + file generation
| :---: | :---: | :---:
| 1 | 0.0015007 | 0.01086
| 2 | 0.0009996 | 0.0040019
| 3 | 0.0040037 | 0.01201
| 4 | 0.041032 | 0.094576
| 5 | 0.40932  | 0.83471
#### 2. Check performance(uses sorting algorithms)
1. Gets student information from files that were generated in step 3.
2. Checks performance when sorting the students by their types (**winners** or **losers**) with different containers: vector, list, deque.
3. Outputs information to inputL*(list), inputD*(deque), input*(vector) files.

| Nr. | Vector | Deque | List
| :---: | :---: | :---: | :---:
| 1 | 0.0004989 | 0 | 0
| 2 | 0.001001 | 0.0019979 | 0.0010018
| 3 | 0.0040037 | 0.0080052 | 0.0050046
| 4 | 0.0090048 | 0.11308 | 0.056544
| 5 | 0.952  | 1.1048 | 0.52141

Using class:

| Nr. | Vector | Deque | List
| :---: | :---: | :---: | :---:
| 1 | 0.0009987 | 0 | 0.0010005
| 2 | 0.0010005 | 0.0010161 | 0.001
| 3 | 0.0100075 | 0.0110272 | 0.0050016
| 4 | 0.0880609 | 0.100069 | 0.06206
| 5 | 0.9637  | 1.03974 | 0.672476

Using class and flags:

| Nr. | Vector | Deque | List
| :---: | :---: | :---: | :---:
| 1 | 0.0009987 | 0 | 0
| 2 | 0.0009983 | 0.0020032 | 0.0010005
| 3 | 0.0050016 | 0.0050033 | 0.0019997
| 4 | 0.052035 | 0.0530359 | 0.030023
| 5 | 0.548388  | 0.453339 | 0.336241

#### 3. Check container performance(uses more containers to sort the students)
1. Gets student information from files that were generated in step 3.
1. Checks performance when inserting the students to different containers by their types (**winners** or **losers**) 
done by different containers: vector, list, deque.
1. Outputs information to: 
   1. "ContainerL*.txt"(list), "ContainerD*.txt"(deque), "ContainerV*.txt"(vector) files (1st strategy).
   1. "Container2L*.txt"(list), "Container2D*.txt"(deque), "Container2V*.txt"(vector) files (2nd strategy).
   
##### Strategy Nr. 1:

| Nr. | Vector | Deque | List
| :---: | :---: | :---: | :---:
| 1 | 0 | 0 | 0
| 2 | 0.0010009 | 0 | 0.0005034
| 3 | 0.0050055 | 0.0050029 | 0.0040028
| 4 | 0.04956 | 0.057081 | 0.040046
| 5 | 0.43744 | 0.55343 | 0.45344

Using class:

| Nr. | Vector | Deque | List
| :---: | :---: | :---: | :---:
| 1 | 0 | 0 | 0
| 2 | 0.0020001 | 0.0009974 | 0
| 3 | 0.0080048 | 0.0050024 | 0.0040028
| 4 | 0.104076 | 0.0490323 | 0.0410297
| 5 | 0.550384 | 0.571404 | 0.490348

Using class and flags:

| Nr. | Vector | Deque | List
| :---: | :---: | :---: | :---:
| 1 | 0 | 0 | 0
| 2 | 0.0010004 | 0.001 | 0.0010032
| 3 | 0.0040015 | 0.0040028 | 0.0020023
| 4 | 0.0410261 | 0.0240179 | 0.0220142
| 5 | 0.335234 | 0.251181 | 0.230163

Using class and flags (added partition algorithm):

| Nr. | Vector | Deque | List
| :---: | :---: | :---: | :---:
| 1 | 0 | 0 | 0
| 2 | 0 | 0 | 0
| 3 | 0 | 0 | 0
| 4 | 0.0312516 | 0.0625036 | 0.0203105
| 5 | 0.335535 | 0.320121 | 0.232919

##### Strategy Nr. 2:

| Nr. | Vector | Deque | List
| :---: | :---: | :---: | :---:
| 1 | 0 | 0 | 0
| 2 | 0.0010004 | 0.0010005 | 0.000515
| 3 | 0.0050029 | 0.011007 | 0.004002
| 4 | 0.05104 | 0.06855 | 0.040134
| 5 | 0.58645 | 0.64356 | 0.514

Using class:

| Nr. | Vector | Deque | List
| :---: | :---: | :---: | :---:
| 1 | 0.0010005 | 0 | 0
| 2 | 0.0009987 | 0.0010014 | 0
| 3 | 0.007003 | 0.0040037 | 0.0060033
| 4 | 0.0420284 | 0.042049 | 0.0450308
| 5 | 0.480342 | 0.553391 | 0.556392

Using class and flags:

| Nr. | Vector | Deque | List
| :---: | :---: | :---: | :---:
| 1 | 0 | 0 | 0
| 2 | 0.0010014 | 0 | 0
| 3 | 0.0040024 | 0.0020192 | 0.0040024
| 4 | 0.0250157 | 0.019995 | 0.0240148
| 5 | 0.394278 | 0.212147 | 0.295227

Using class and flags (added partition algorithm):

| Nr. | Vector | Deque | List
| :---: | :---: | :---: | :---:
| 1 | 0 | 0 | 0
| 2 | 0 | 0 | 0
| 3 | 0.0039998 | 0 | 0
| 4 | 0.0312654 | 0.0156258 | 0.028874
| 5 | 0.386718 | 0.21876 | 0.347267

#### 4. Check container performance without arguments
1. Gets student information from files that were generated in step 3.
1. Checks performance when inserting the students to different containers by their types (**winners** or **losers**) 
done by different containers: vector, list, deque.
1. Outputs information to: "Container2Lnb*.txt"(list), "Container2Dnb*.txt"(deque), "Container2Vnb*.txt"(vector) files (2nd strategy without algorithms).

| Nr. | Vector | Deque | List
| :---: | :---: | :---: | :---:
| 1 | 0 | 0 | 0
| 2 | 0.001997 | 0.0019996 | 0
| 3 | 0.064063 | 0.0750514 | 0.0080052
| 4 | 4.56825 | 2.27262 | 0.0540366
| 5 | 443.054 | 210.47 | 0.486344

#### 5. Unit Test
Unit Test was done with Catch2. It just checks if the function that checks if a student is a Winner works properly.

## Warnings:
1. In input files where grades are supposed to be only write **integers**.
2. In this ReadME file every * symbol is some kind of number between 1-5.
3. Files generated in step 3 can be found in "wow*.txt" files.
