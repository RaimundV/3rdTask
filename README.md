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
#### 4. Check performance(uses sorting algorithms)
1. Gets student information from files that were generated in step 3.
2. Checks performance when sorting the students by their types (**winners** or **losers**) with different containers: vector, list, deque.
3. Outputs information to inputL*(list), inputD*(deque), input*(vector) files.

#### 5. Check container performance(uses more containers to sort the students)
1. Gets student information from files that were generated in step 3.
1. Checks performance when inserting the students to different containers by their types (**winners** or **losers**) 
done by different containers: vector, list, deque.
1. Outputs information to: 
   1. "ContainerL*.txt"(list), "ContainerD*.txt"(deque), "ContainerV*.txt"(vector) files (1st strategy).
   1. "Container2L*.txt"(list), "Container2D*.txt"(deque), "Container2V*.txt"(vector) files (2nd strategy).
## Warnings:
1. In input files where grades are supposed to be only write **integers**.
2. In this ReadME file every * symbol is some kind of number between 1-5.
3. Files generated in step 3 can be found in "wow*.txt" files.
