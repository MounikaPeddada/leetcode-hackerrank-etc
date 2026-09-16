# Write your MySQL query statement below
SELECT Signups.user_id , ROUND(SUM(CASE WHEN action = 'confirmed' THEN 1 ELSE 0 END)*1.0/count(*),2) AS confirmation_rate 
FROM Confirmations
RIGHT JOIN Signups 
ON Signups.user_id = Confirmations.user_id
GROUP BY Signups.user_id;