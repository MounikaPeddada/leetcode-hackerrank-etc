# Write your MySQL query statement below
select m.name as name 
FROM Employee as m
JOIN Employee as e
ON e.managerId=m.id
GROUP BY m.id
HAVING count(*) >=5


