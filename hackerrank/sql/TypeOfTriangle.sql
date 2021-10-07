/*
Problem Link: https://www.hackerrank.com/challenges/what-type-of-triangle/problem
Solution Contributed by: saurabh042

Write a query identifying the type of each record in the TRIANGLES table using its three side lengths. Output one of the following statements for each record in the table:

Equilateral: It's a triangle with 3 sides of equal length.
Isosceles: It's a triangle with 2 sides of equal length.
Scalene: It's a triangle with all sides of differing lengths.
Not A Triangle: The given values of A, B, and C don't form a triangle.

Input Format

The TRIANGLES table is described as follows:
Column      Data type
A           Integer
B           Integer
C           Integer


Each row in the table denotes the lengths of each of a triangle's three sides.
*/
-- MySQL soltution
select Case
    WHEN A+B > C AND A+C > B AND B+C > A THEN
        CASE
            WHEN A=B AND B=C THEN 'Equilateral'
            WHEN A=B OR B=C OR A=C THEN 'Isosceles'
            ELSE 'Scalene'
        END
    ELSE 'Not A Triangle'
END
from TRIANGLES;
