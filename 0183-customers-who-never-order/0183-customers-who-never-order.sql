# Write your MySQL query statement below
SELECT name AS Customers
From Customers C
LEFT JOIN Orders O
ON C.id = O.customerId
WHERE O.customerId is NULL;