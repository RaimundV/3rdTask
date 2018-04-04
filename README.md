# Second OOP Task

## Installing

1. Download the zip file.
2. Unzip.
3. Open the folder as a project in some C++ IDE.

## How to use

### 1. Menu:

```
1. Enter grades yourself
2. Get grades from table
3. Generate student files
4. Check performance
5. Check container performance
6. Check container performance without arguments
Enter option:
```

#### 1. Enter grades yourself
1. You have to enter your name and surname
2. Then you have to choose between:
```
1. Enter an unlimited amount of grades
2. Enter a limited amount of grades
```
3. Enter an unlimited amount of grades: Lets' you enter and unlimited amount of grades until you press 0.
4. Enter a limited amount of grades: Lets' you enter the amount of the students homework and then enter the grades.
5. When you have entered all the homework grades you have to choose how to count the grades, either as **median** or as **average**.
6. Enter exam grade.
7. You see the students' average grade.
#### 2. Get grades from table
1. Takes information from the "Grades.txt" file.
2. Counts the students grades with **average** and **median**.
3. Shows the output in "AVG.txt" file.
#### 3. Generate student files
1. Generates files with 10, 100, 1000, 10000, 100000 Student grades and measures the time taken.

| Nr. | The function took | function + file generation
| :---: | :---: | :---:
| 1 | 0.0015007 | 0.01086
| 2 | 0.0009996 | 0.0040019
| 3 | 0.0040037 | 0.01201
| 4 | 0.041032 | 0.094576
| 5 | 0.40932  | 0.83471
#### 4. Check performance(uses sorting algorithms)
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
#### 5. Check container performance(uses more containers to sort the students)
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

##### Strategy Nr. 2:

| Nr. | Vector | Deque | List
| :---: | :---: | :---: | :---:
| 1 | 0 | 0 | 0
| 2 | 0.0010004 | 0.0010005 | 0.000515
| 3 | 0.0050029 | 0.011007 | 0.004002
| 4 | 0.05104 | 0.06855 | 0.040134
| 5 | 0.58645 | 0.64356 | 0.514

#### 6. Check container performance without arguments
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

## Warnings:
1. In input files where grades are supposed to be only write **integers**.
2. In this ReadME file every * symbol is some kind of number between 1-5.
3. Files generated in step 3 can be found in "wow*.txt" files.
